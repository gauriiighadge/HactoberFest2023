import cv2
from random import randrange 
 #OpenCV-Python is a library of Python bindings designed to solve computer vision problems.
 # cv2.imread() method loads an image from the specified file. 
 # If the image cannot be read (because of the missing file, improper permissions, 
 # or unsupported or invalid format) then this method returns an empty matrix


#Load some pre trained on face frontals from opencv (haar cascades algorithm)
trained_face_data = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')

#choose an image to detect faces in
# img = cv2.imread('RDJ.png')
# img = cv2.imread('pm.png')


webcam = cv2.VideoCapture(1 )
#iterate forever over frames
while True:
    succesful_frame_read, frame = webcam.read() 
    grayscaled_img = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY) 
    #detect faces
    face_coordinates = trained_face_data.detectMultiScale(grayscaled_img)
    for(x,y,w,h) in face_coordinates:
        cv2.rectangle(frame,(x,y),(x+w,y+h),(0,255,0),2)
     
    cv2.imshow('Gaurav Saxena Face Detector',frame)
    key = cv2.waitKey(1)

    #### stop if Q key is pressed
    if key==81 or key ==113:
        break

webcam.release()

#need to make the image grayscale
# grayscaled_img = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)

# #detect faces
# face_coordinates = trained_face_data.detectMultiScale(grayscaled_img)
# # print(face_coordinates)

# #draw rectangles around the faces
# # we use for loop to dectect multiple people
# for(x,y,w,h) in face_coordinates:
#     cv2.rectangle(img,(x,y),(x+w,y+h),(randrange(256),randrange(256),randrange(256)),2)
     
# #(0,255,0) is the color of the rectangle i.e. Green
# # (2) is the thickness of the rectangle

# cv2.imshow('Gaurav Saxena Face Detector',img)
# cv2.waitKey()

# print("code completed")
