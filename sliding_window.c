#include<stdio.h>
int main(){
    int arr[]={3,5,2,8,1,4};
    int n=6;
    int k=3;
    int window_sum=0;
    for(int i=0;i<k;i++){
        window_sum +=arr[i];}
        int max_sum=window_sum;
    
    for(int i=k;i<n;i++){
        window_sum=window_sum + arr[i] - arr[i-k];
        if(window_sum > max_sum){
            max_sum=window_sum;
        }
    }
        printf("max_sum of %d consecutive elements is: %d\n",k,max_sum);
    
    return 0;
}