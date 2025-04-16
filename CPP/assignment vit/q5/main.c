/*Create a structure called Address with members such as door no, street, city and
pincode. Create another structure to store employee details such as name, id,
age, gender, address (a variable of ‘Address’ structure), Basic Pay (BP),
Dearness Allowance (DA) and House Rent Allowance (HRA). Write a C
program to read the necessary employee details, calculate the total salary (Total
Salary= BP+(BP×DA/100)+ (BP×HRA/100) ) and print all the details of ‘n’
employees.*/
#include<stdio.h>
#include<string.h>
struct Address{
    int door_No;
    char street[100];
    char city[50];
    int pincode;
};
struct employee{
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
int main(){
    int n;
    printf("enter no of employees");
    scanf("%d",&n);
    struct employee emp[n];
    for (int i=0;i<n;i++){
        printf("enter name");
        scanf("%s",emp[i].name);
        printf("enter id");
        scanf("%d",&emp[i].id);
        printf("enter age");
        scanf("%s",emp[i].gender);
        printf("enter door no");
        scanf("%d",&emp[i].address.door_No);
        printf("enter street");
        scanf("%s",emp[i].address.street);
        printf("enter city");
        scanf("%s",emp[i].address.city);
        printf("enter pincode");
        scanf("%d",&emp[i].address.pincode);
        printf("enter basic pay");
        scanf("%s",emp[i].basic_pay);
        printf("enter hra");
        scanf("%s",emp[i].HRA);
        printf("enter DA");
        scanf("%s",emp[i].DA);
        emp[i].total_sal=emp[i].basic_pay+emp[i].basic_pay*(emp[i].HRA/100)+emp[i].basic_pay*(emp[i].DA/100);

    }
    printf("details of employeees are:\n");
    for (int i=0;i<n;i++){
        printf("name is %s\n",emp[i].name);
        printf("id is %d\n",emp[i].id);
        printf("age is %d\n",emp[i].age);
        printf("gender  is %s\n",emp[i].gender);
        
    }
}