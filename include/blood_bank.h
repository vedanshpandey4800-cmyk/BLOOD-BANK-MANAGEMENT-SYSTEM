#ifndef BLOOD_BANK_H
#define BLOOD_BANK_H

#define MAX_DONORS 100

struct Donor {
int id;
char fullName[52];
char group[6];
char phone[18];
int age;
char homeAddr[104];
};

extern struct Donor donors[MAX_DONORS];
extern int donorCount;

void addDonor();
void displayDonors();
void requestBlood();

#endif
