#include <stdio.h>

void bubble_sort(int arr[], int n) {
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-i-1; j++)
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

void print_array(int arr[], int n) {
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);

    int arr[n];
    printf("Unesite %d brojeva:\n", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Original array: ");
    print_array(arr, n);

    bubble_sort(arr, n);

    printf("Sorted array:   ");
    print_array(arr, n);

    return 0;
}
