#include <stdio.h>
#include <stdlib.h>
#include "blood_bank.h"

int main() {
    printf(" BLOOD BANK MANAGEMENT SYSTEM \n");
    printf("============================\n");

    int menuPick = 0;

    while (1) {
        printf("\n1. Add Donor\n");
        printf("2. View Donors\n");
        printf("3. Exit\n");
        printf("Enter choice: ");

        scanf("%d", &menuPick);

        switch (menuPick) {
            case 1:
                addDonor();
                break;
            case 2:
                displayDonors();
                break;
            case 3:
                exit(0);
            default:
                printf("Hmm... that doesn't look like a valid choice.\n");
        }
    }

    return 0;
}
