#include <stdio.h>

int main() {
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = 8;
    int k = 3;

    printf("First negative integer in every window of size %d:\n", k);

    
    for (int i = 0; i <= n - k; i++) {
        int found = 0; 
     
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break; 
        }
    }

        
        if (!found) {
            printf("0 ");
        }
    }

    printf("\n");
    return 0;
}