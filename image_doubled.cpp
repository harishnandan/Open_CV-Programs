/*#include<opencv2\highgui\highgui.hpp>
#include<opencv2\core\core.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main(){
Mat original;
int i, j, x, y, a, b;
original = imread("a.png", 1);
Mat gray(2 * original.rows, 2 * original.cols, CV_8UC3, Scalar(0, 0, 0));
for (i = 0; i < original.rows; i++)
for (j = 0; j < original.cols; j++)
{
for (x = 0; x < 2; x++)
for (y = 0; y < 2; y++)
gray.at<Vec3b>(2 * i + x, 2 * j + y) = original.at<Vec3b>(i, j);
}
namedWindow("gray", WINDOW_AUTOSIZE);
imshow("gray", gray);
waitKey(0);
return 0;
}
*/
