/*
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core/core.hpp"
#include<math.h>
#include<iostream>

using namespace cv;
using namespace std;

int main(){
VideoCapture vid(0);
Mat temp;
while (1){
vid.read(temp);
Mat mirror(temp.rows, temp.cols, CV_8UC3, Scalar(0, 0, 0));
for (int i = 0; i < temp.rows; i++)
for (int j = 0; j < temp.cols; j++)
{
mirror.at<Vec3b>(i, j) = temp.at<Vec3b>(i, temp.cols - j - 1);


}
imshow("vid",mirror);
if (waitKey(25) == 'e') break;
}
return 0;
}

*/