//
// Created by shen on 05/11/18.
//
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#ifndef LEARNOPENCV_2_BLUR_HPP
#define LEARNOPENCV_2_BLUR_HPP

cv::Mat ImageBlur(cv::Mat srcImage);

#endif //LEARNOPENCV_2_BLUR_HPP

cv::Mat ImageBlur(cv::Mat srcImage){
    cv:imshow("srcImage",srcImage);
    cv::Mat dstImage;
    cv::blur(srcImage,dstImage,cv::Size(7,7));
    cv::imshow("dstImage",dstImage);
    cv::waitKey(0);
    return dstImage;
}