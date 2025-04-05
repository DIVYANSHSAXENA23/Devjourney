#include <stdio.h>

struct student {
    int no;
    char name[20];
};

int main() {
    struct student s;
    s.no = 8;
    printf("hello");
}