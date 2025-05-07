#include "Donor.h"

Donor::Donor() {}

Donor::Donor(int id, const std::string& name, const std::string& group, const std::string& date)
    : id(id), name(name), bloodGroup(group), lastDonationDate(date) {}

std::string Donor::toString() const {
    return std::to_string(id) + " " + name + " " + bloodGroup + " " + lastDonationDate;
}