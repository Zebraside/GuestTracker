#include <iostream>

#include "application.hpp"

int main(int, char**) {
    try {
        Application app;
        app.run();
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
