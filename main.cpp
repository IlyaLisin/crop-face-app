#include "FaceImageProcessing.h"
#include <iostream>

int main(int argc, char* argv[])
{
    FaceImageProcessing* faceImageProcessing =
           new FaceImageProcessing(new FileConfig("/home/lisin/projects/cropFace-app/ImagePreprocessing/trunk/path.xml"), new FileLogger());


    float* landmarks = faceImageProcessing->foundFacePoints();
    faceImageProcessing->cropFace(landmarks);

    cv::waitKey(0);

    return 0;
}



