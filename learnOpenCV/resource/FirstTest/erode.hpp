//
// Created by shen on 05/11/18.
//
#pragma once

#ifndef LEARNOPENCV_ERODE_HPP
#define LEARNOPENCV_ERODE_HPP

#include <opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>

cv::Mat ImageErode(cv::Mat srcImage);

cv::Mat ImageErode(cv::Mat srcImage){
    cv::Mat element=cv::getStructuringElement(cv::MORPH_RECT,cv::Size(5,5));
    cv::Mat dstImage;
    cv::erode(srcImage,dstImage,element);
    cv::imshow("erodeImage",dstImage);
    cv::waitKey(0);
    return dstImage;
}

#endif //LEARNOPENCV_ERODE_HPP

