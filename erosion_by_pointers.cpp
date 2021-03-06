/*
//-dilation_erosion.cpp : Noise removal by dilating and then eroding the image
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;

void erosion(Mat *img,Mat *img2){
int a = (*img).rows;
int b = (*img).cols;
int white, black, i, j, x, y;
for (i = 1; i <a - 1; i++){
for (j = 1; j < b- 1; j++){
white = black = 0;
for (x = -1; x < 2; x++){
for (y = -1; y < 2; y++){
if ((*img).at<uchar>(i + x, j + y) ==0)
black++;
else
white++;
}
}
if (black>0)
(*img2).at <uchar>(i,j) = 0;
}
}

}
/* Mat dilation(Mat img){
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
*/
/* int main(){
	Mat img3; Mat *img, *img1;
	img3 = imread("filter2.png", 0);
	Mat img12(img3.rows, img3.cols, CV_8UC1, Scalar(0));
	//	Mat img2(img.rows, img.cols, CV_8UC1, Scalar(0));
	int i, j;	// Binary image
	for (i = 0; i < img3.rows; i++)
	for (j = 0; j < img3.cols; j++)
	if (img3.at <uchar>(i, j) > 127)
		img3.at <uchar>(i, j) = 255;
	else img3.at <uchar>(i, j) = 0;
	img12 = img3.clone();
	//img1=dilation(img);
	img1 = &img12;
	img = &img3;

	erosion(img, img1);
	//img2 = dilation(img2);
	namedWindow("Binary", WINDOW_AUTOSIZE);
	imshow("Binary", *img);
	namedWindow("Erosion", WINDOW_AUTOSIZE);
	imshow("Erosion", *img1);
	// namedWindow("Dilate", WINDOW_AUTOSIZE);
	//	imshow("Dilate",img2);
	waitKey(0);
	return 0;
}
*/