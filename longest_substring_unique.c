#include<stdio.h>
#include<string.h>
int main(){
    char s[]="pwwkew";
    int n = strlen(s);
    int max_len=0;
    int end=0;int start=0;
    int freq[256]={0};
    for(end=0;end<n;end++){
        freq[(unsigned char)s[end]]++;
        while(freq[(unsigned char)s[end]]>1){
            freq[(unsigned char)s[start]]--;
            start++;}
            int current_len=end-start+1;
            if(current_len>max_len){
                max_len=current_len;
            }
        }
        printf("longest unique substring  length is %d\n",max_len);
        return 0;
    }
