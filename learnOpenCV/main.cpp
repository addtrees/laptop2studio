#include <iostream>
#include<opencv2/opencv.hpp>
#include "resource/FirstTest/canny.hpp"
cv::Mat ImageErode(cv::Mat srcImage);

int main() {
    cv::Mat img;
    img=cv::imread("1-1.jpg");
    EdgeDetection(img);
    return 0;
}