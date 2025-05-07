#ifndef DONORMANAGER_H
#define DONORMANAGER_H

#include "Donor.h"
#include <vector>

class DonorManager {
private:
    std::vector<Donor> donors;
    void loadDonors();
    void saveDonors();
public:
    DonorManager();
    void addDonor();
    void viewDonors();
};

#endif