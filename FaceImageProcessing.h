#include <string>
#include "opencv/cv.h"
#include "opencv2/highgui/highgui.hpp"
#include "stasm_lib.h"
#include "FileConfig.h"
#include "FileLogger.h"

class FaceImageProcessing {
private:
	const int N_BOUND_FACE_POINTS = 16;
    IConfig* _config;
    ILogger* _logger;
public:
    FaceImageProcessing(IConfig* config, ILogger* logger) {
        _config = config;
        _logger = logger;
    }
	
    float* foundFacePoints();
    cv::Mat cropFace(float* landmarks);
};
