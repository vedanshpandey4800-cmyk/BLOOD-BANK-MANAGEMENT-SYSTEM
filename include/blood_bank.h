#ifndef BLOOD_BANK_H
#define BLOOD_BANK_H

#define MAX_DONORS 100

struct Donor {
    int id;
    char name[50];
    char bloodGroup[5];
    char phone[15];
    int age;
    char address[100];
};

extern struct Donor donors[MAX_DONORS];
extern int donorCount;

void addDonor();
void displayDonors();
void requestBlood();  
#endif
