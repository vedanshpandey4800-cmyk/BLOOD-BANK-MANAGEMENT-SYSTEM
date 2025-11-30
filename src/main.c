#include <stdio.h>
#include <stdlib.h>
#include "blood_bank.h"

int main() {
    printf("\n ================================ ");
    printf("\n   BLOOD BANK MANAGEMENT SYSTEM   ");
    printf("\n ================================ \n");

    int opt = 0;
    int loopFlag = 1;

    while (loopFlag) {
        printf("\n MAIN MENU:");
        printf("\n1. ➕ Add New Donor");
        printf("\n2.  View All Donors");
        printf("\n3.  Exit");
        printf("\nEnter choice (1-3): ");
        scanf("%d", &opt);

        switch (opt) {
            case 1:
                addDonor();
                break;
            case 2:
                displayDonors();
                break;
            case 3:
                printf("\n Goodbye! \n");
                loopFlag = 0;
                break;
            default:
                printf(" Invalid choice!\n");
        }
    }

    return 0;
}
