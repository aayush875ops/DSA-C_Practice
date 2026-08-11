#include<stdio.h>
int main(){
    int arr[]={2,7,11,15,27,33};
    int target=26;int found =0;
    int n=sizeof(arr)/sizeof(arr[0]);
    int left=0;int right=n-1;
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
   printf("Found sum equal to target at index %d and %d (%d + %d = %d)\n", 
                       left, right, arr[left], arr[right], target);         
            found =1;
            break;
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    if(!found){
        printf("not found\n");
    }
    return 0;

}