#include "application.hpp"

#include "camera.hpp"
#include <opencv2/highgui.hpp>

void Application::run() {
    System::Camera cam;
    cam.start();

    _main_window.show();

    while (true) {
        auto new_frame = cam.frame();
        cv::imshow("Window", new_frame);
        _main_window.update(new_frame);
        if (cv::waitKey(5) >= 0)
            break;
    }
}