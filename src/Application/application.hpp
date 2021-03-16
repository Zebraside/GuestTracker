#pragma once

#include "main_window.hpp"

class Application {
public:
    void run();

private:
    GUI::MainWindow _main_window;
};