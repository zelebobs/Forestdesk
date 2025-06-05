#include <iostream>
#include "core/network_manager.h"
#include "ui/main_window.h"

int main() {
    std::cout << "ForestDESK запускается..." << std::endl;

    NetworkManager network;
    if (!network.initialize()) {
        std::cerr << "Ошибка инициализации сети" << std::endl;
        return 1;
    }

    MainWindow window;
    window.show();

    network.shutdown();
    return 0;
}
