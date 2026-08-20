#include<stdio.h>

int main(){
    int arr[]={1,2,1,2,3};
    int n =sizeof(arr)/sizeof(arr[0]);
    int start=0;int freq[1000]={0};
    int max_len=0;int distinct_count=0;
    for(int end=0;end<n;end++){
       if (freq[arr[end]]==0){
       distinct_count++;}
       freq[arr[end]]++;
        while(distinct_count>2){
            freq[arr[start]]--;
            if(freq[arr[start]]==0){
                distinct_count--;
            }
                start++;}
            int current_len=end-start+1;
            if(current_len>max_len){
                max_len=current_len;}
    }
    printf(" maxmium length is %d",max_len);
    return 0;
}