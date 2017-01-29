/*
//-dilation_erosion.cpp : Noise removal by dilating and then eroding the image
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;

Mat erosion(Mat img){

Mat img2(img.rows, img.cols, CV_8UC1, Scalar(0));
img2 = img.clone();
int white, black, i, j, x, y;
for (i = 1; i < img.rows - 1; i++){
for (j = 1; j < img.cols - 1; j++){
white = black = 0;
for (x = -1; x < 2; x++){
for (y = -1; y < 2; y++){
if (img.at<uchar>(i + x, j + y) ==0)
black++;
else
white++;
}
}
if (black>0)
img2.at <uchar>(i,j) = 0;
}
}
return img2;
}
Mat dilation(Mat img){
Mat img2(img.rows, img.cols, CV_8UC1, Scalar(0));
img2 = img.clone();
int white, black,i,j,x,y;
for (i = 1; i < img.rows - 1; i++){
for (j = 1; j < img.cols - 1; j++){
white = black = 0;
for (x = -1; x < 2; x++){
for (y = -1; y < 2; y++){
if (img.at<uchar>(i + x, j + y) == 0)
black++;
else
white++;
}
}
if (white> 0){
img2.at <uchar>(i, j) = 255;
}
}
}
return img2;
}

int main(){
Mat img;
img = imread("filter2.png", 0);
Mat img1(img.rows, img.cols, CV_8UC1, Scalar(0));
Mat img2(img.rows, img.cols, CV_8UC1, Scalar(0));
int i, j;	// Binary image
for (i = 0; i < img.rows; i++)
for (j = 0; j < img.cols; j++)
if (img.at <uchar>(i, j) > 127)
img.at <uchar>(i, j) = 255;
else img.at <uchar>(i, j) =0;
img1=dilation(img);
img2=erosion(img1);
img2 = erosion(img2);
img2 = dilation(img2);
namedWindow("Binary", WINDOW_AUTOSIZE);
imshow("Binary", img);
namedWindow("Erosion", WINDOW_AUTOSIZE);
imshow("Erosion", img1);
namedWindow("Dilate", WINDOW_AUTOSIZE);
imshow("Dilate",img2);
waitKey(0);
return 0;
}
*/