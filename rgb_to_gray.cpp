/*
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\core\core.hpp>
#include<opencv2\imgproc\imgproc.hpp>

using namespace std;
using namespace cv;

int main(){
Mat original;
int i, j;
original = imread("2.jpg", 1);
Mat a(original.rows, original.cols, CV_8UC1, Scalar(0));
Mat b(original.rows, original.cols, CV_8UC1, Scalar(0));
namedWindow("original", WINDOW_AUTOSIZE);

for (i = 0; i < original.rows; i++)
for (j = 0; j < original.cols; j++)
a.at<uchar>(i, j) = (original.at<Vec3b>(i, j)[0] + original.at<Vec3b>(i, j)[1] + original.at<Vec3b>(i, j)[2]) / 3;

for (i = 0; i < original.rows; i++)
for (j = 0; j < original.cols; j++)
b.at<uchar>(i, j) = 0.114*original.at<Vec3b>(i, j)[0] + 0.587* original.at<Vec3b>(i, j)[1] + 0.299* original.at<Vec3b>(i, j)[2];

//	namedWindow("a", WINDOW_AUTOSIZE);
//	namedWindow("b", WINDOW_AUTOSIZE);
for (int l = 0; l < 100; l++){
imshow("original", a); waitKey(100);
imshow("original", original); waitKey(100);
imshow("original", b); waitKey(100);
}
waitKey(0);
return 0;
}
*/
