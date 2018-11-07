//
// Created by shen on 05/11/18.
//

#ifndef LEARNOPENCV_THREE_CANNY_HPP
#define LEARNOPENCV_THREE_CANNY_HPP

#include<opencv2/opencv.hpp>
#include<opencv2/imgproc/imgproc.hpp>

cv::Mat EdgeDetection(cv::Mat srcImage);

cv::Mat EdgeDetection(cv::Mat srcImage){
    cv::imshow("srcImage",srcImage);
    cv::Mat dstImage,edge,grayImage;
    dstImage.create(srcImage.size(),srcImage.type());//create a matrix with the same size and type of source image
    cv::cvtColor(srcImage,grayImage,cv::COLOR_BGR2GRAY);
    cv::blur(grayImage,edge,cv::Size(3,3));
    cv::Canny(edge,edge,10,50,3);  //the uopper threshold use to find edge,the lower threshold use to connecting the edge well
    cv::imshow("Canny edge",edge);
    cv::waitKey(0);
}
#endif //LEARNOPENCV_THREE_CANNY_HPP
