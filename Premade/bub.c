#include <stdio.h>

int main() {
    int n, i, j, temp;
    
    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input elements of array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort algorithm
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}
