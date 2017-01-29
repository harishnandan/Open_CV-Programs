/*
Mat erosion(Mat img){

Mat img2(img.rows, img.cols, CV_8UC1, Scalar(0));
img2 = img.clone();
int white, black, i, j, x, y;
for (i = 1; i < img.rows - 1; i++){
for (j = 1; j < img.cols - 1; j++){
white = black = 0;
for (x = -1; x < 2; x++){
for (y = -1; y < 2; y++){
if (img.at<uchar>(i + x, j + y) ==0)
black++;
else
white++;
}
}
if (black>0)
img2.at <uchar>(i,j) = 0;
}
}
return img2;
}
Mat dilation(Mat img){
Mat img2(img.rows, img.cols, CV_8UC1, Scalar(0));
img2 = img.clone();
int white, black,i,j,x,y;
for (i = 1; i < img.rows - 1; i++){
for (j = 1; j < img.cols - 1; j++){
white = black = 0;
for (x = -1; x < 2; x++){
for (y = -1; y < 2; y++){
if (img.at<uchar>(i + x, j + y) == 0)
black++;
else
white++;
}
}
if (white> 0){
img2.at <uchar>(i, j) = 255;
}
}
}
return img2;
}


*/