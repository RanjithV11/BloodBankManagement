#include "InventoryManager.h"
#include <iostream>
#include <fstream>

InventoryManager::InventoryManager() {
    loadInventory();
}

void InventoryManager::loadInventory() {
    std::ifstream in("data/inventory.txt");
    std::string group;
    int qty;
    while (in >> group >> qty) {
        inventory[group] = qty;
    }
    in.close();
}

void InventoryManager::saveInventory() {
    std::ofstream out("data/inventory.txt");
    for (const auto& pair : inventory) {
        out << pair.first << " " << pair.second << "\n";
    }
    out.close();
}

void InventoryManager::addBloodUnits() {
    std::string group;
    int qty;
    std::cout << "Enter blood group: "; std::cin >> group;
    std::cout << "Enter quantity: "; std::cin >> qty;
    inventory[group] += qty;
    saveInventory();
}

void InventoryManager::viewInventory() {
    for (const auto& pair : inventory) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

bool InventoryManager::processRequest(const std::string& bloodGroup, int quantity) {
    if (inventory[bloodGroup] >= quantity) {
        inventory[bloodGroup] -= quantity;
        saveInventory();
        return true;
    }
    return false;
}