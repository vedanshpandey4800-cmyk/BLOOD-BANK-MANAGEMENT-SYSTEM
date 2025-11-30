#include <stdio.h>
#include <string.h>
#include "blood_bank.h"

struct Donor donors[MAX_DONORS];
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
void requestBlood() {
char grpNeeded[6];
printf("\n🚨 EMERGENCY BLOOD REQUEST:\n");
printf("Enter REQUIRED blood group: ");
scanf("%s", grpNeeded);

printf("\n🔍 SEARCHING FOR %s DONORS...\n", grpNeeded);

int hasMatch = 0;
int idx = 0;

for (idx = 0; idx < donorCount; idx++) {
    if (strcmp(donors[idx].bloodGroup, grpNeeded) == 0) {

        printf("✅ AVAILABLE DONOR #%d:\n", donors[idx].id);
        printf("   Name: %s\n", donors[idx].name);
        printf("   Phone: %s\n", donors[idx].phone);
        printf("   Address: %s\n", donors[idx].address);
        printf("   Age: %d\n\n", donors[idx].age);

        hasMatch = 1;
    }
}

if (hasMatch == 0) {
    printf("❌ NO %s DONORS AVAILABLE!\n", grpNeeded);
    printf("🚨 Please register more %s donors!\n", grpNeeded);
} else {
    printf("✅ %s donor(s) found! Contact them immediately!\n", grpNeeded);
}


}
    }
}
