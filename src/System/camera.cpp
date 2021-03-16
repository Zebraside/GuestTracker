#include "camera.hpp"

namespace System {
    Camera::Camera() {

    }

    void Camera::start() {
        int deviceID = 0;
        if (!cap.open(deviceID))
            throw std::runtime_error("Can't open OpenCV camera");
    }

    void Camera::stop() {
        cap.release();
    }

    Frame Camera::frame() {
        cv::Mat frame;
        cap >> frame;
        if (frame.empty())
            throw std::runtime_error("Blank frame grabbed");

        return frame;
    }


} // System