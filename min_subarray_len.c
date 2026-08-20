#include<stdio.h>
#include<limits.h>
int main(){
   int arr[]={2,1,5,2,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
   int  min_len=INT_MAX;
    int end=0;
    int start=0;int sum=0;
    int target=7;
    for(end=0;end<n;end++){
        sum +=arr[end];
        while(sum>=target){
           int sum_len=end-start + 1;
            if(sum_len<min_len){
                min_len=sum_len;}
            sum-=arr[start];
            start++;
        }
        
    }if(min_len==INT_MAX){
        printf("0\n");
    }else{
    printf(" minimum subarray is %d",min_len);}
    return 0;

}

