#include "main_window.hpp"

#include <dlib/opencv.h>

namespace GUI {

MainWindow::MainWindow() : _image(*this) {
    set_size(430, 380);
    set_title("Main window");

    _image.set_pos(0, 0);
}

MainWindow::~MainWindow() {
    close();
}

void MainWindow::show() {
    dlib::drawable_window::show();
}

void MainWindow::hide() {
    dlib::drawable_window::hide();
}

void MainWindow::close() {
    dlib::drawable_window::close_window();
}

void MainWindow::update(const cv::Mat& frame) {
    dlib::cv_image<dlib::bgr_pixel> dlib_frame(frame);

    _image.set_image(dlib_frame);
}

} // GUI