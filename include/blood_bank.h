#ifndef BLOOD_BANK_H
#define BLOOD_BANK_H

typedef struct {
    int id;
    char name[50];
    char bloodGroup[4];
    char phone[15];
    char lastDonation[11];
} Donor;

void addDonor();
void displayDonors();

#endif
