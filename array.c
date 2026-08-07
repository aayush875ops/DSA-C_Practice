#include <stdio.h>

int main() {
    int arr[] = {10, 25, 42, 7, 89};
    int n = 5; // size of the array
    int target = 42; // the number we are looking for
    int found = -1; // stores the index if found

    // Loop through each element
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = i; // Save the index where we found it
            break;     // Exit the loop since we found it
        }
    }

    if (found != -1) {
        printf("Found %d at index %d!\n", target, found);
    } else {
        printf("Number not found.\n");
    }

    return 0;
}