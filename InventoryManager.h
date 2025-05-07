#ifndef INVENTORYMANAGER_H
#define INVENTORYMANAGER_H

#include <map>
#include <string>

class InventoryManager {
private:
    std::map<std::string, int> inventory;
    void loadInventory();
    void saveInventory();
public:
    InventoryManager();
    void addBloodUnits();
    void viewInventory();
    bool processRequest(const std::string& bloodGroup, int quantity);
};

#endif