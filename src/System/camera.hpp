#pragma once

#include <opencv2/videoio.hpp>

namespace System {

using Frame = cv::Mat;

class Camera {
public:
    Camera();

    void start();
    void stop();

    Frame frame();

private:
    cv::VideoCapture cap;
};

} // System