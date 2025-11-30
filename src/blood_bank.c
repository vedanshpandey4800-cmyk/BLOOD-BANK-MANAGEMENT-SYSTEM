#include <stdio.h>
#include <string.h>
#include "blood_bank.h"

struct Donor donors[MAX_DONORS];
int donorCount = 0;

void addDonor() {
if (donorCount >= MAX_DONORS) {
printf("\n Maximum donors limit reached!\n");
return;
}

int idx = donorCount;

printf("\n➤ Enter donor details:\n");
printf("Name: ");
scanf("%s", donors[idx].name);
printf("Blood Group (A+/A-/B+/B-/AB+/AB-/O+/O-): ");
scanf("%s", donors[idx].bloodGroup);
printf("Phone: ");
scanf("%s", donors[idx].phone);
printf("Age: ");
scanf("%d", &donors[idx].age);
printf("Address: ");
scanf("%s", donors[idx].address);

donors[idx].id = idx + 1;
donorCount++;

printf(" Donor '%s' (ID: %d) added successfully!\n",
       donors[idx].name, donors[idx].id);


}

void displayDonors() {
if (donorCount == 0) {
printf("\n No donors yet!\n");
return;
}

printf("\n DONOR LIST (%d donors):\n", donorCount);
printf("ID | Name        | Blood  | Phone       | Age\n");
printf("--|--------------|--------|-------------|----\n");

int k = 0;
for (k = 0; k < donorCount; k++) {
    printf("%2d | %-12s | %-6s | %-11s | %3d\n",
           donors[k].id, donors[k].name, donors[k].bloodGroup,
           donors[k].phone, donors[k].age);
}


}

void requestBlood() {
char grpWanted[6];
printf("\n EMERGENCY BLOOD REQUEST:\n");
printf("Enter REQUIRED blood group: ");
scanf("%s", grpWanted);

printf("\n🔍 SEARCHING FOR %s DONORS...\n", grpWanted);

int hits = 0;
int c = 0;

for (c = 0; c < donorCount; c++) {
    if (strcmp(donors[c].bloodGroup, grpWanted) == 0) {

        printf(" AVAILABLE DONOR #%d:\n", donors[c].id);
        printf("   Name: %s\n", donors[c].name);
        printf("   Phone: %s\n", donors[c].phone);
        printf("   Address: %s\n", donors[c].address);
        printf("   Age: %d\n\n", donors[c].age);

        hits = hits + 1;
    }
}

if (hits == 0) {
    printf(" NO %s DONORS AVAILABLE!\n", grpWanted);
    printf(" Please register more %s donors!\n", grpWanted);
} else {
    printf(" %d %s donor(s) found! Contact immediately!\n", hits, grpWanted);
}


}
