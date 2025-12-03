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
        printf("❌ MAX LIMIT!\n");
        return;
    }
    
    printf("\n➤ Name: ");
    scanf("%s", donors[donorCount].name);
    printf("➤ Blood Group: ");
    scanf("%s", donors[donorCount].bloodGroup);
    printf("➤ Phone: ");
    scanf("%s", donors[donorCount].phone);
    printf("➤ Age: ");
    scanf("%d", &donors[donorCount].age);
    printf("➤ Address: ");
    scanf("%s", donors[donorCount].address);
    
    donors[donorCount].id = ++donorCount;
    printf("✅ Donor '%s' (ID: %d) ADDED!\n", donors[donorCount-1].name, donors[donorCount-1].id);
}

void displayDonors() {
    if (donorCount == 0) {
        printf("\n📋 NO DONORS!\n");
        return;
    }
    
    printf("\n📋 DONOR LIST (%d):\n", donorCount);
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
    printf("\n🚨 EMERGENCY BLOOD REQUEST:\n");
    printf("➤ Needed Blood Group: ");
    scanf("%s", needed);
    
    int found = 0;
    printf("\n🔍 %s DONORS:\n", needed);
    
    for (int i = 0; i < donorCount; i++) {
        if (strcmp(donors[i].bloodGroup, needed) == 0) {
            printf("✅ #%d: %s (%s)\n", donors[i].id, donors[i].name, donors[i].phone);
            found++;
        }
    }
    
    if (found == 0) {
        printf("❌ NO %s DONORS!\n", needed);
    } else {
        printf("✅ %d %s DONORS FOUND!\n", found, needed);
    }
}

int main() {
    printf("\n🩸 BLOOD BANK MANAGEMENT SYSTEM 🩸\n");
    donors[i].name
    donors[i].bloodGroup
    donors[i].phone
    donors[i].age
    donors[i].address
    
    int choice;
    while (1) {
        printf("\n1. ➕ Add Donor");
        printf("\n2. 📋 View Donors");
        printf("\n3. 🚨 Request Blood");
        printf("\n4. 💾 Exit");
        printf("\n➤ Choice (1-4): ");
        scanf("%d", &choice);
        
        if (choice == 1) addDonor();
        else if (choice == 2) displayDonors();
        else if (choice == 3) requestBlood();
        else if (choice == 4) {
            printf("✅ THANK YOU!\n");
            return 0;
        }
        else printf("❌ INVALID!\n");
        
        printf("\n[Press Enter]");
        getchar(); getchar();
    }
}
