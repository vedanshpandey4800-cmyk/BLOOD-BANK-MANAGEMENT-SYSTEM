#ifndef BLOOD_BANK_H
#define BLOOD_BANK_H

struct Donor {
    int    id;
    char   fullName[50];
    char   bGroup[5];
    char   phoneNo[15];
    int    yearsOld;
    char   homeAddr[100];
};

void addDonor();
void displayDonors();

#endif
