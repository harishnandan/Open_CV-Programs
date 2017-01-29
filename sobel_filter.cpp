/*
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core/core.hpp"
#include <iostream>
#include <math.h>




using namespace std;
using namespace cv;




int main(){


namedWindow("House 2Flipped", WINDOW_AUTOSIZE);
int ll = 0, lw = 0;


createTrackbar("Dl", "House 2Flipped", &lw, 1000);
for (;;){
Mat ig = imread("2.jpg", 0);// imshow("House 2Flipped", ig); waitKey(0); destroyWindow("House 2Flipped");
Mat dn(ig.rows, ig.cols, CV_8UC1, Scalar(0));
//for (ll = 0; ll <lw; ll++){
int i, j;






int a[9]; int i1, md = 0, md2 = 0;


for (i = 1; i < ig.rows - 1; i++){
for (j = 1; j < ig.cols - 1; j++){


a[0] = -1 * lw * ig.at<uchar>(i - 1, j - 1) / 250;
a[1] = lw  * -2 * ig.at<uchar>(i, j - 1) / 250;
a[2] = lw * 0 * ig.at<uchar>(i - 1, j) / 250;
a[3] = lw * 0 * ig.at<uchar>(i, j) / 250;
a[4] = lw * 1 * ig.at<uchar>(i + 1, j + 1) / 250;
a[5] = 0 * ig.at<uchar>(i + 1, j) / 250;
a[6] = lw * 2 * ig.at<uchar>(i, j + 1) / 250;
a[7] = lw * -ig.at<uchar>(i + 1, j - 1) / 250;
a[8] = lw * ig.at<uchar>(i - 1, j + 1) / 250;
md = (a[0] + a[4] + a[7] + a[8]) + (a[1] + a[2] + a[5] + a[6]) + a[3];
a[0] = lw * -1 * ig.at<uchar>(i - 1, j - 1) / 250;
a[1] = 0 * ig.at<uchar>(i, j - 1) / 250;
a[2] = lw * -2 * ig.at<uchar>(i - 1, j) / 250;
a[3] = 0 * ig.at<uchar>(i, j) / 250;
a[4] = lw * 1 * ig.at<uchar>(i + 1, j + 1) / 250;
a[5] = lw * 2 * ig.at<uchar>(i + 1, j) / 250;
a[6] = 0 * ig.at<uchar>(i, j + 1);
a[7] = lw * ig.at<uchar>(i + 1, j - 1) / 250;
a[8] = lw * -ig.at<uchar>(i - 1, j + 1) / 250;
md2 = (a[0] + a[4] + a[7] + a[8]) + (a[1] + a[2] + a[5] + a[6]) + a[3];
dn.at<uchar>(i, j) = (int)abs(sqrt(md *md + md2 *md2));
}
}


imshow("House 2Flipped", dn);


//if (waitKey(0) == 'e')break;
//destroyWindow("House 2Flipped");


//imshow("House 2Flipped", ig); waitKey(1);
//destroyWindow("House Flipped");


/*ig = dn;


// imshow("House 2Flipped", ig);
// waitKey(0);
if (waitKey(1) == 'e')break;
	}
	return 0;
}



*/