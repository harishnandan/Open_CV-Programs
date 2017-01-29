/*
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\core\core.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;

Mat img;
void Callbackfunc(int Event, int y, int x, int flags, void *userdata){
if (Event == EVENT_LBUTTONDOWN){
printf("B=%d\n", img.at<Vec3b>(x, y)[0]);
printf("G=%d\n", img.at<Vec3b>(x, y)[1]);
printf("R=%d\n", img.at<Vec3b>(x, y)[2]);
}
}
int main(){
img = imread("2.jpg",1);
imshow("win", img);
setMouseCallback("win", Callbackfunc, NULL);
waitKey(0);
return 0;
}
*/