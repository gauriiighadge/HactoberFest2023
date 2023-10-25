import express, { Express, Request, Response } from "express";
import dotenv from "dotenv";
import cors from "cors";
import { createApi } from "unsplash-js";
import { Random, Stats } from "unsplash-js/dist/methods/photos/types";
import bodyParser from "body-parser";
import fetch from "cross-fetch";

dotenv.config();

const app: Express = express();

app.use(
  cors({
    origin: true,
    methods: ["GET", "PUT", "POST"],
    allowedHeaders: [
      "Origin, X-Requested-With, Content, Accept, Content-Type, Authorization",
    ],
    exposedHeaders: ["Content-Range", "X-Content-Range"],
  })
);

const port = process.env.PORT || 3000;

app.get("/", (req: Request, res: Response) => {
  res.send("hell0 " + port);
});

var urlencodedParser = bodyParser.urlencoded({ extended: true });

const api = createApi({ accessKey: `${process.env.UNSPLASH_API_KEY}`, fetch });

type randomImage = Random & Stats;

function mapRandomSearchData(items: randomImage) {
  const data = {
    id: items.id,
    likes: items.likes,
    userName: items.user.name,
    userTag: items.user.username,
    userProfilePhoto: items.user.profile_image.small,
    imageLink: items.urls.regular,
    downloadImage: items.links.download,
    info: items.alt_description,
    info_alt: items.description,
    twitterTag: items.user.twitter_username,
    instagramTag: items.user.instagram_username,
    downloads: items.downloads,
  };

  return {
    ...data,
  };
}

const getRandomPhotos = async (query?: string) => {
  let reportArray;
  try {
    await api.photos.getRandom({ count: 33, query: query }).then((response) => {
      if (response.type === "success") {
        const responseArray = response.response as randomImage[];
        reportArray = JSON.stringify(
          responseArray.map((items) => mapRandomSearchData(items))
        );
      } else {
        throw new Error("failed getting dat from api");
      }
    });
  } catch (err) {
    console.log("Error setting up Unsplash API:" + err);
  }
  return reportArray;
};

app.get("/generateRandomImages", (req: Request, res: Response) => {
  getRandomPhotos().then((array) => {
    res.json({ data: array });
    console.log({ data: array });
  });
});

app.post(
  "/searchImages",
  urlencodedParser,
  bodyParser.json(),
  (req: Request, res: Response) => {
    const query = req.body.query;
    getRandomPhotos(query).then((array) => {
      res.json({ data: array });
      console.log({ data: array });
    });
  }
);

app.listen(port, () => {
  console.log("port running");
});
