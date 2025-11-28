#include <stdio.h>
#include <string.h>
#include "blood_bank.h"

#define MAX_DONORS 100
Donor donors[MAX_DONORS];
int donorCount = 0;

void addDonor() {
    if(donorCount >= MAX_DONORS) {
        printf(" Maximum donors reached!\n");
        return;
    }
    
    Donor *d = &donors[donorCount];
    d->id = donorCount + 1;
    
    printf("Enter donor name: ");
    scanf("%s", d->name);
    printf("Enter blood group (A+/A-/B+/etc): ");
    scanf("%s", d->bloodGroup);
    printf("Enter phone: ");
    scanf("%s", d->phone);
    printf("Enter last donation date (YYYY-MM-DD): ");
    scanf("%s", d->lastDonation);
    
    printf(" Donor %s (ID: %d) added successfully!\n", d->name, d->id);
    donorCount++;
}

void displayDonors() {
    if(donorCount == 0) {
        printf("📭 No donors registered yet!\n");
        return;
    }
    
    printf("\n DONOR LIST:\n");
    printf("ID | Name        | Blood Group | Phone      | Last Donation\n");
    printf("--|--------------|-------------|------------|--------------\n");
    
    for(int i = 0; i < donorCount; i++) {
        printf("%2d | %-12s | %-11s | %-10s | %s\n", 
               donors[i].id, donors[i].name, donors[i].bloodGroup,
               donors[i].phone, donors[i].lastDonation);
    }
}
