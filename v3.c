#include <stdio.h>

void bubble_sort_asc(int arr[], int n) {
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-i-1; j++)
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

void bubble_sort_desc(int arr[], int n) {
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-i-1; j++)
            if(arr[j] < arr[j+1]) {
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
    int n, choice;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);

    int arr[n];
    printf("Unesite %d brojeva:\n", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Original array: ");
    print_array(arr, n);

    printf("Izaberite nacin sortiranja: 1 – Ascending, 2 – Descending: ");
    scanf("%d", &choice);

    if(choice == 1)
        bubble_sort_asc(arr, n);
    else
        bubble_sort_desc(arr, n);

    printf("Sorted array:   ");
    print_array(arr, n);

    return 0;
}
