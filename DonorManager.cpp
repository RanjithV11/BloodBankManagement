#include "DonorManager.h"
#include <iostream>
#include <fstream>

DonorManager::DonorManager() {
    loadDonors();
}

void DonorManager::loadDonors() {
    std::ifstream in("data/donors.txt");
    Donor donor;
    while (in >> donor.id >> donor.name >> donor.bloodGroup >> donor.lastDonationDate) {
        donors.push_back(donor);
    }
    in.close();
}

void DonorManager::saveDonors() {
    std::ofstream out("data/donors.txt");
    for (const auto& donor : donors) {
        out << donor.toString() << "\n";
    }
    out.close();
}

void DonorManager::addDonor() {
    Donor donor;
    donor.id = donors.size() + 1;
    std::cout << "Enter name: "; std::cin >> donor.name;
    std::cout << "Enter blood group: "; std::cin >> donor.bloodGroup;
    std::cout << "Enter last donation date: "; std::cin >> donor.lastDonationDate;
    donors.push_back(donor);
    saveDonors();
}

void DonorManager::viewDonors() {
    for (const auto& donor : donors) {
        std::cout << donor.toString() << std::endl;
    }
}