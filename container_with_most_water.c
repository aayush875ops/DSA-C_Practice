#include<stdio.h>
int min(int a,int b){
    return (a<b)? a:b;}
    int max(int a,int b){
        return (a>b)?a:b;}
    

int main(){
    int height[]={1,8,6,2,5,4,8,3,7};
    int n=sizeof(height)/sizeof(height[0]);
    int left=0;int right=n-1;int area=0;
    int max_water=0;
    while(left<right){
      int  current_height = min(height[left],height[right]);
        int width=right - left;
       int current_area=current_height*width;
       max_water=max(max_water,current_area);
        

        if(height[left]<height[right]){
            left++;}
            else{
                right--;
            }

        }
        printf("Maximun water container capacity: %d\n",max_water);
        return 0;
    }
