#include "include/DonorManager.h"
#include "include/InventoryManager.h"
#include "include/RequestManager.h"
#include <iostream>

int main() {
    DonorManager donorManager;
    InventoryManager inventoryManager;
    RequestManager requestManager;

    int choice;
    do {
        std::cout << "\n--- Blood Bank Management System ---\n";
        std::cout << "1. Add Donor\n";
        std::cout << "2. View Donors\n";
        std::cout << "3. Add Blood Units\n";
        std::cout << "4. View Inventory\n";
        std::cout << "5. Request Blood\n";
        std::cout << "6. Exit\n";
        std::cout << "Choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: donorManager.addDonor(); break;
            case 2: donorManager.viewDonors(); break;
            case 3: inventoryManager.addBloodUnits(); break;
            case 4: inventoryManager.viewInventory(); break;
            case 5: requestManager.requestBlood(inventoryManager); break;
        }
    } while (choice != 6);

    return 0;
}