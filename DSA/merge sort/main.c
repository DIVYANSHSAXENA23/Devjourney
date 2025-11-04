#include <stdio.h>

void merge(int a[], int lb, int mid, int ub) {
    int b[20];
    int i = lb;
    int j = mid + 1;   // corrected
    int k = lb;

    while (i <= mid && j <= ub) {
        if (a[i] < a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {   // copy remaining left half
        b[k] = a[i];
        i++;
        k++;
    }

    while (j <= ub) {   // copy remaining right half8op
        b[k] = a[j];
        j++;
        k++;
    }

    // copy back to original array
    for (int x = lb; x <= ub; x++) {
        a[x] = b[x];
    }
}

void mergesort(int a[], int lb, int ub) {
    if (lb < ub) {
        int mid = (lb + ub) / 2;
        mergesort(a, lb, mid);
        mergesort(a, mid + 1, ub);
        merge(a, lb, mid, ub);
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    mergesort(a, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
