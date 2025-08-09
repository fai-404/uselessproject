#include<stdio.h>

int main() {
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array to store the elements
    int arr[n];

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Store input in the array
    }

    // Optionally, print the elements to verify
    printf("You entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
