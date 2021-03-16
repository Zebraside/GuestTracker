#pragma once

#include <dlib/gui_widgets.h>
#include <opencv2/opencv.hpp>

namespace GUI {

class MainWindow : public dlib::drawable_window {
public:
    MainWindow();
    ~MainWindow();

    void show();
    void hide();
    void close();

    void update(const cv::Mat& frame);

private:
    dlib::image_widget _image;
};

} // GUI