#include <stdio.h>
#include <stdlib.h>
#include "blood_bank.h"

int main() {

printf("\n🩸================================🩸");
printf("\n🩸    BLOOD BANK MANAGEMENT SYSTEM    🩸");
printf("\n🩸================================🩸\n");

int opt = 0;

while (1) {

    printf("\n📋 MAIN MENU:");
    printf("\n1. ➕ Add New Donor");
    printf("\n2. 📋 View All Donors");
    printf("\n3. 🚨 REQUEST BLOOD (Need Donor)");
    printf("\n4. 💾 Exit");
    printf("\nEnter choice (1-4): ");
    scanf("%d", &opt);

    switch (opt) {
        case 1:
            addDonor();
            break;

        case 2:
            displayDonors();
            break;

        case 3:
            requestBlood();
            break;

        case 4:
            printf("\n✅ Goodbye! 👋\n");
            exit(0);

        default:
            printf("❌ Invalid choice! Try 1-4.\n");
    }

    printf("\nPress Enter to continue...");
    getchar();
    getchar();
}

return 0;


}
