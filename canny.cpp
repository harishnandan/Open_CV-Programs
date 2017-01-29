/*
//-dilation_erosion.cpp : Noise removal by dilating and then eroding the image
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;
int main(){
Mat img, img1;
img= imread("canny.png", 1);
int th_min=0,th_max=120;
namedWindow("img", WINDOW_NORMAL);
createTrackbar("threshhold_min", "img", &th_min, 100);
createTrackbar("threshhold_max", "img", &th_max,300);
while (1){
Canny(img, img1, th_min, th_max);
imshow("img", img1);
if (waitKey(50) == 'e') break;
}
return 0;
}
*/