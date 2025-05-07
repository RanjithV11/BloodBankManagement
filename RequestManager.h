#ifndef REQUESTMANAGER_H
#define REQUESTMANAGER_H

#include "InventoryManager.h"
#include <string>

class RequestManager {
public:
    void requestBlood(InventoryManager& inventoryManager);
};

#endif