#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    // TODO: Write your while loop here!
    // Remember the 4 steps:
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
                    }
                
    // 1. Loop condition (left <= right)
    // 2. Calculate mid
    // 3. Check if target is at mid (return mid)
    // 4. Update left or right boundary based on target size

    return -1; // Returns -1 if the loop finishes and nothing is found
}

int main() {
    int arr[] = {12, 24, 35, 48, 59, 63, 75, 88, 92};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 24; 

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Target %d found at index %d\n", target, result);
    } else {
        printf("Target %d not found in the array\n", target);
    }

    return 0;
}