import cv2
face_cascade=cv2.CascadeClassifier("haarcascade_frontalface_default.xml")
img=cv2.imread("pic.jpg")
resized=cv2.resize(img,(500,500))
grey_img=cv2.cvtColor(resized,cv2.COLOR_BGR2GRAY)

faces=face_cascade.detectMultiScale(grey_img,scaleFactor=1.05,minNeighbors=5)
print(type(faces))
print(faces)
for x,y,w,h in faces:
    img=cv2.rectangle(resized,(x,y),(x+w,y+h),(0,255,0),3)

cv2.imshow("gray",resized)
cv2.waitKey(0)
cv2.destroyAllWindows()