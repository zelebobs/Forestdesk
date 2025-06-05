#ifndef FORESTDESK_NETWORK_MANAGER_H
#define FORESTDESK_NETWORK_MANAGER_H

// Сетевой менеджер ForestDESK
// Заглушка для будущей реализации взаимодействия с сигналинг сервером

class NetworkManager {
public:
    // Инициализация сетевого менеджера
    bool initialize();

    // Завершение работы
    void shutdown();
};

#endif // FORESTDESK_NETWORK_MANAGER_H
