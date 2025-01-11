#include <stdio.h>
#include<math.h>

int main() {
    float a,b,c,D,r1,r2;

    printf("Enter the coefficients a,b,c\n");
    scanf("%f %f %f", &a, &b, &c);
    D = b*b - 4*a*c;

    if(D>0) { 
        r1 = (-b + sqrt(D))/(2*a);
        r2 = (-b - sqrt(D))/(2*a);
        printf("The roots are real and distinct: %f and %f\n", r1, r2);
    } else if (D==0) {
        r1 = -b/(2*a);
        printf("The roots are real and equal: %f\n", r1);
    } else {
        printf("The roots are imaginary\n");
    }
}