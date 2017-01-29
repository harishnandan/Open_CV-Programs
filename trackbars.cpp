/*
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\core\core.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main(){
Mat original;
int i, j, a=50, b=50, c=50;
namedWindow("gray", WINDOW_AUTOSIZE);
createTrackbar("track1", "gray", &(a), 100);
createTrackbar("track2", "gray", &(b), 100);
createTrackbar("track3", "gray", &(c), 100);

original = imread("2.jpg", 1);
Mat gray(original.rows, original.cols, CV_8UC1, Scalar(0));
while (1){
for (i = 0; i < original.rows; i++)
for (j = 0; j < original.cols; j++){
gray.at<uchar>(i, j) = (original.at<Vec3b>(i, j)[0] * a*0.01 + original.at<Vec3b>(i, j)[1] * b*0.01 + original.at<Vec3b>(i, j)[2] * c*0.01) / 3;
}
imshow("gray", gray);
i = waitKey(50);
if (i == 'e') break;
}
return 0;
}
*/
