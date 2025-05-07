#ifndef DONOR_H
#define DONOR_H

#include <string>

class Donor {
public:
    int id;
    std::string name;
    std::string bloodGroup;
    std::string lastDonationDate;

    Donor();
    Donor(int id, const std::string& name, const std::string& group, const std::string& date);
    std::string toString() const;
};

#endif