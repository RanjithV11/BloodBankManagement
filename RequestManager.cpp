#include "RequestManager.h"
#include <iostream>
#include <fstream>
#include <ctime>

void RequestManager::requestBlood(InventoryManager& inventoryManager) {
    std::string group;
    int qty;
    std::cout << "Enter blood group: "; std::cin >> group;
    std::cout << "Enter quantity: "; std::cin >> qty;

    if (inventoryManager.processRequest(group, qty)) {
        std::ofstream out("data/requests.txt", std::ios::app);
        std::time_t now = std::time(nullptr);
        out << group << " " << qty << " " << std::ctime(&now);
        out.close();
        std::cout << "Request fulfilled.\n";
    } else {
        std::cout << "Not enough units available.\n";
    }
}