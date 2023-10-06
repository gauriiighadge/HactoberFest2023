import cv2
img=cv2.imread ("C:\\Users\\Livisja\\Desktop\\face detection\\my pic.jpg")
#print ((img.shape))
# resized=cv2.resize(img,(600,600))
resized=cv2.resize(img,(int(img.shape[1]/2),int(img.shape[0]/2)))
cv2.imshow("livish",resized)
cv2.waitKey(0)
cv2.destroyAllWindows()