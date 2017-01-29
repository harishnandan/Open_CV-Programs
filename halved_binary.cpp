/*
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\core\core.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main(){
Mat original; int h[256]; for (int y = 0; y < 256; y++) h[y] = y;

int i, j, x, y, a, b, u;
original = imread("lenna.png", 0);
Mat binary(original.rows, original.cols, CV_8UC1,Scalar(255));

int sum = original.rows*original.cols;
int sum2 = 0;
while (sum2 < (sum / 2)){
for (u = 0; u < 256; u++)
for (i = 0; i < original.rows; i++)
for (j = 0; j < original.cols; j++)
{
if (original.at<uchar>(i, j) == h[u]){
binary.at<uchar>(i, j) = 0; sum2++;
}
if (sum2 >= sum / 2) break;
} if (sum2 >= sum / 2) break;
}
namedWindow("binary", WINDOW_AUTOSIZE);
imshow("binary", binary);
waitKey(0);
return 0;
}
*/
