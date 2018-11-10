//
// Created by shen on 08/11/18.
//

/*#include<opencv2/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <string>
using namespace std;
using namespace cv;

#define WINDOW_NAME "[picture mix example]"

const int g_nMaxAlphaValue=100;       //sliderbar length
int g_nAlphaValueSlider;              //now slider position
double g_dAlphaValue;                 //global now alpha value,in order to get the addWeight value of one icture
double g_dBetaValue;

Mat g_srcImage1;
Mat g_srcImage2;
Mat g_dstImage;

void on_Trackbar(int,void*){
    g_dAlphaValue=(double)g_nAlphaValueSlider/g_nMaxAlphaValue;
    g_dBetaValue=(1.0-g_dAlphaValue);
    addWeighted(g_srcImage1,g_dAlphaValue,g_srcImage2,g_dBetaValue,0.0,g_dstImage);
    imshow(WINDOW_NAME,g_dstImage);
}

int main(){
    g_srcImage1=imread("thanos.jpg");
    g_srcImage2=imread("1-3.jpg");
    g_srcImage1=g_srcImage1(Range(0,300),Range(0,300));
    g_srcImage2=g_srcImage2(Range(0,300),Range(0,300));
    if(g_srcImage1.empty()||g_srcImage2.empty())
        return -1;
    g_nAlphaValueSlider=70;
    namedWindow(WINDOW_NAME,1);
    string TrackbarName="Max  ";
    TrackbarName+=to_string(g_nMaxAlphaValue);  //add two string
    cout<<TrackbarName;
    createTrackbar(TrackbarName,WINDOW_NAME,&g_nAlphaValueSlider,g_nMaxAlphaValue,on_Trackbar);
    //createTrackbar("bar",WINDOW_NAME,&g_nAlphaValueSlider,g_nMaxAlphaValue);
    on_Trackbar(g_nAlphaValueSlider,0);
    waitKey(0);
    return 0;
}*/

/*using mouse