#include <stdio.h>
#include <string.h>
#include "blood_bank.h"

#define MAX_DONORS 100

Donor donors[MAX_DONORS];
int donorCount = 0;

void addDonor() {
    if (donorCount >= MAX_DONORS) {
        printf("Oops... maximum donors reached!\n");
        return;
    }

    Donor *newGuy = &donors[donorCount];
    newGuy->id = donorCount + 1;

    printf("Enter donor name: ");
    scanf("%s", newGuy->name);

    printf("Enter blood group (A+/A-/B+/etc): ");
    scanf("%s", newGuy->bloodGroup);

    printf("Enter phone: ");
    scanf("%s", newGuy->phone);

    printf("Enter last donation date (YYYY-MM-DD): ");
    scanf("%s", newGuy->lastDonation);

    printf("👍 Donor %s added! (ID: %d)\n", newGuy->name, newGuy->id);

    donorCount++;
}

void displayDonors() {
    if (donorCount == 0) {
        printf("📭 No donors registered yet. Add someone first!\n");
        return;
    }

    printf("\n=== Donor List ===\n");
    printf("ID | Name          | Blood Group | Phone        | Last Donation\n");
    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < donorCount; i++) {
        printf("%2d | %-12s | %-11s | %-12s | %s\n",
            donors[i].id,
            donors[i].name,
            donors[i].bloodGroup,
            donors[i].phone,
            donors[i].lastDonation);
    }

    printf("\nTotal donors: %d\n", donorCount);
}
