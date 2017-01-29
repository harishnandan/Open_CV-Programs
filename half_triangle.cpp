/*
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2\core\core.hpp>

using namespace std;
using namespace cv;

int main(){
Mat a(400, 400, CV_8UC3, Scalar(255, 255, 255));
for (int i = 0; i < 400; i++)
for (int j = i; j < 400; j++){
a.at<Vec3b>(i, j)[2] = 0;
a.at<Vec3b>(i, j)[1] = 0;
a.at<Vec3b>(i, j)[0] = 255;

}
for (int i = 0; i < 400; i++)
for (int j = 0; j < i; j++){
a.at<Vec3b>(i, j)[2] = 0;
a.at<Vec3b>(i, j)[1] = 255;
a.at<Vec3b>(i, j)[0] = 0;

}

namedWindow("codered", WINDOW_NORMAL);
imshow("codered", a);
waitKey(0);
return 0;
}
*/