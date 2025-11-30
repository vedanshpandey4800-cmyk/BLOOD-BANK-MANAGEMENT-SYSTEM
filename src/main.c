#include <stdio.h>
#include <string.h>

#define MAX_DONORS 100

struct Donor {
    int id;
    char name[50];
    char bloodGroup[5];
    char phone[15];
    int age;
    char address[100];
};

struct Donor donors[MAX_DONORS];
int donorCount = 0;

void addDonor() {
    if (donorCount >= MAX_DONORS) {
        printf(" MAX LIMIT!\n");
        return;
    }
    
    printf("\n Name: ");
    scanf("%s", donors[donorCount].name);
    printf(" Blood Group (A+/O+/B+): ");
    scanf("%s", donors[donorCount].bloodGroup);
    printf(" Phone: ");
    scanf("%s", donors[donorCount].phone);
    printf(" Age: ");
    scanf("%d", &donors[donorCount].age);
    printf(" Address: ");
    scanf("%s", donors[donorCount].address);
    
    donors[donorCount].id = ++donorCount;
    printf(" Donor '%s' (ID: %d) ADDED!\n", donors[donorCount-1].name, donors[donorCount-1].id);
}

void displayDonors() {
    if (donorCount == 0) {
        printf("\n NO DONORS YET!\n");
        return;
    }
    
    printf("\n DONOR LIST (%d donors):\n", donorCount);
    printf("ID | Name       | Blood | Phone      | Age\n");
    printf("--|------------|-------|------------|----\n");
    
    for (int i = 0; i < donorCount; i++) {
        printf("%2d | %-10s | %-5s | %-10s | %3d\n",
               donors[i].id, donors[i].name, donors[i].bloodGroup,
               donors[i].phone, donors[i].age);
    }
}

void requestBlood() {
    char needed[5];
    printf("\n EMERGENCY BLOOD REQUEST:\n");
    printf(" Needed Blood Group: ");
    scanf("%s", needed);
    
    int found = 0;
    printf("\n SEARCHING %s DONORS...\n", needed);
    
    for (int i = 0; i < donorCount; i++) {
        if (strcmp(donors[i].bloodGroup, needed) == 0) {
            printf(" DONOR #%d:\n", donors[i].id);
            printf("    %s\n", donors[i].name);
            printf("    %s\n", donors[i].phone);
            printf("    %s\n", donors[i].address);
            printf("    %d years\n\n", donors[i].age);
            found++;
        }
    }
    
    if (found == 0) {
        printf(" NO %s DONORS AVAILABLE!\n", needed);
        printf(" Register more %s donors!\n", needed);
    } else {
        printf(" %d %s DONOR(S) FOUND!\n", found, needed);
        printf(" CONTACT IMMEDIATELY!\n");
    }
}

int main() {
    printf("\n ================================ ");
    printf("\n    BLOOD BANK MANAGEMENT SYSTEM    ");
    printf("\n ================================ \n");
    
    int choice;
    while (1) {
        printf("\n MAIN MENU:");
        printf("\n1.  Add New Donor");
        printf("\n2.  View All Donors");
        printf("\n3.  Request Blood (Need Donor)");
        printf("\n4. Exit");
        printf("\nEnter choice (1-4): ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: addDonor(); break;
            case 2: displayDonors(); break;
            case 3: requestBlood(); break;
            case 4: 
                printf("\n THANK YOU! \n");
                return 0;
            default: 
                printf(" INVALID CHOICE! (1-4)\n");
        }
        
        printf("\n Press Enter to continue...");
        getchar(); getchar();
    }
    return 0;
}
