#ifndef BLOOD_BANK_H
#define BLOOD_BANK_H

struct Donor {
    int id;
    char name[50];
    char bloodGroup[5];
    char phone[15];
    int age;
    char address[100];
};

extern struct Donor donors[100];
extern int donorCount;

void addDonor();
void displayDonors();

#endif
