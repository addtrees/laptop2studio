//
// Created by shen on 08/11/18.
//
#include <opencv2/opencv.hpp>
using namespace cv;
#define WINDOW_NAME "mouseOperation"
void on_mouseHandle(int event,int x,int y,int flags,void* param);
void drawRentangle(Mat &img,Rect box);

Rect g_retangle;          //
bool g_bDrawingBox=false; //drawing flag
RNG g_rng(12345);         //random number generate

int main(){
    //init param
    g_retangle=Rect(-1,-1,0,0);
    Mat srcImage(800,800,CV_8UC3),tempImage;
    srcImage.copyTo(tempImage);
    srcImage=Scalar::all(0);  //set all Scalar param to 0
    namedWindow(WINDOW_NAME);
    setMouseCallback(WINDOW_NAME,on_mouseHandle,(void*)&srcImage);

}