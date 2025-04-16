
#include <stdio.h>

struct Address {
    int door_No;
    char street[100];
    char city[50];
    int pincode;
};

struct Employee {
    char name[50];
    int id;
    int age;
    char gender[10];
    struct Address address;
    float basic_pay;
    float DA;
    float HRA;
    float total_sal;
};

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    
    struct Employee emp[n];

    for (int i = 0; i < n; i++) {
        printf("\n--- Enter details for Employee %d ---\n", i + 1);
        
        printf("Enter name: ");
        scanf(" %[^\n]", emp[i].name);  // Accept spaces in name

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter age: ");
        scanf("%d", &emp[i].age);

        printf("Enter gender: ");
        scanf(" %s", emp[i].gender);

        printf("Enter door number: ");
        scanf("%d", &emp[i].address.door_No);

        printf("Enter street: ");
        scanf(" %[^\n]", emp[i].address.street);  // Accept spaces

        printf("Enter city: ");
        scanf(" %[^\n]", emp[i].address.city);  // Accept spaces

        printf("Enter pincode: ");
        scanf("%d", &emp[i].address.pincode);

        printf("Enter Basic Pay: ");
        scanf("%f", &emp[i].basic_pay);

        printf("Enter HRA (%%): ");
        scanf("%f", &emp[i].HRA);

        printf("Enter DA (%%): ");
        scanf("%f", &emp[i].DA);

        // Calculate Total Salary
        emp[i].total_sal = emp[i].basic_pay +
                           (emp[i].basic_pay * emp[i].DA / 100) +
                           (emp[i].basic_pay * emp[i].HRA / 100);
    }

    // Display employee details
    printf("\n=========== Employee Details ===========\n");
    for (int i = 0; i < n; i++) {
        printf("\n--- Employee %d ---\n", i + 1);
        printf("Name        : %s\n", emp[i].name);
        printf("ID          : %d\n", emp[i].id);
        printf("Age         : %d\n", emp[i].age);
        printf("Gender      : %s\n", emp[i].gender);
        printf("Address     : %d, %s, %s - %d\n",
               emp[i].address.door_No,
               emp[i].address.street,
               emp[i].address.city,
               emp[i].address.pincode);
        printf("Basic Pay   : %.2f\n", emp[i].basic_pay);
        printf("HRA         : %.2f%%\n", emp[i].HRA);
        printf("DA          : %.2f%%\n", emp[i].DA);
        printf("Total Salary: %.2f\n", emp[i].total_sal);
    }

    return 0;
}
