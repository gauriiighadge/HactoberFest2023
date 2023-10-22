async function fetchData(params) {
  res = await fetch("https://meme-api.com/gimme/1");
  res = await res.json();
  var val = res.memes[0].url;
  var image = document.querySelector("#img");
  image.src = val;
}
