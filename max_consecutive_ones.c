#include<stdio.h>

int main(){
  int  arr[]={0,0,1,1,0,0,1,1,1};
    int n =sizeof(arr)/sizeof(arr[0]);
   int k=1;
    int zero_count=0;
    int start=0;int max_len=0;
    for(int end=0;end<n;end++){
      if (arr[end]==0){
        zero_count++;}
        while(zero_count>k){
            if(arr[start]==0){
               zero_count--;
            }
            start++;
        }
        int current_len=end-start+1;
        if(current_len>max_len){
            max_len=current_len;
        }
    }
    printf("max consecutive ones: %d\n",max_len);
    return 0;}