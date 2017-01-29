/*
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\core\core.hpp>
#include<opencv2\imgproc\imgproc.hpp>

using namespace std;
using namespace cv;

int main(){

Mat original, mirror;
original = imread("2.jpg");
mirror = imread("2.jpg");
namedWindow("original", WINDOW_AUTOSIZE);
imshow("original", original);
for (int i = 0; i < mirror.rows; i++)
for (int j = 0; j < mirror.cols; j++)
{
mirror.at<Vec3b>(i, j) = original.at<Vec3b>(i, original.cols - j - 1);
}
namedWindow("mirror", WINDOW_AUTOSIZE);
imshow("mirror", mirror);
waitKey(0);
return 0;
}
*/
