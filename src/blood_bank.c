#include <stdio.h>
#include <string.h>
#include "blood_bank.h"

struct Donor donors[100];
int donorCount = 0;

void addDonor() {
    printf("\n➤ Enter donor details:\n");

    printf("Name: ");
    scanf("%s", donors[donorCount].name);

    printf("Blood Group (A+/A-/B+/B-/AB+/AB-/O+/O-): ");
    scanf("%s", donors[donorCount].bloodGroup);

    printf("Phone: ");
    scanf("%s", donors[donorCount].phone);

    printf("Age: ");
    scanf("%d", &donors[donorCount].age);

    printf("Address: ");
    scanf("%s", donors[donorCount].address);

    int newId = donorCount + 1;
    donors[donorCount].id = newId;

    donorCount++;

    printf(" Donor '%s' (ID: %d) added successfully!\n",
           donors[newId - 1].name, newId);
}

void displayDonors() {
    if (donorCount == 0) {
        printf("📋 No donors yet!\n");
        return;
    }

    printf("\n📋 DONOR LIST (%d donors):\n", donorCount);
    printf("ID | Name        | Blood  | Phone       | Age\n");
    printf("--|--------------|--------|-------------|----\n");

    for (int i = 0; i < donorCount; i++) {
        printf("%2d | %-12s | %-6s | %-11s | %3d\n",
               donors[i].id,
               donors[i].name,
               donors[i].bloodGroup,
               donors[i].phone,
               donors[i].age);
    }
}
