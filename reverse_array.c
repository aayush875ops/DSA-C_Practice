#include<stdio.h>
int main(){
     int arr[]={10,20,30,40,50};
    int n =sizeof(arr)/sizeof(arr[0]);
    int left=0;int right=n-1;
    printf("original array\n");
    for( int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    while(left<right){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
    printf("reversed array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    return 0;
}
