#include "network_manager.h"
#include <iostream>

bool NetworkManager::initialize() {
    std::cout << "Инициализация сети..." << std::endl;
    return true;
}

void NetworkManager::shutdown() {
    std::cout << "Завершение работы сети..." << std::endl;
}
