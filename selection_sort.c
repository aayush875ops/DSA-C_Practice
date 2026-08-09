#include<stdio.h>
int main(){
    int arr[]={42,89,15,95,73,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Initial scores \n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    for(int i=0;i<n-1;i++){
        int max_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[max_index]){
                max_index=j;
                
            }
        }
        if(max_index!=i){
        int temp = arr[i];
        arr[i]=arr[max_index];
            arr[max_index]=temp;
        }
        printf("Pass %d: ",i+1);
        for(int k=0;k<n;k++){
            printf("%d ",arr[k]);
        }
        printf("\n");

}
    printf("sorted scores\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}