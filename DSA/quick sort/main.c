#include<stdio.h>

void qs(int a[], int low, int high) {
    int i = low, j = high;
    int mid = (low + high) / 2;
    int pivot = a[mid];

    while (i <= j) {
        while (a[i] < pivot) i++;
        while (a[j] > pivot) j--;
        if (i <= j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }

    if (low < j)
        qs(a, low, j);
    if (i < high)
        qs(a, i, high);
}

int main() {
    int a[15], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("\nBefore Sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    qs(a, 0, n - 1); // sort

    printf("\nAfter Sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
