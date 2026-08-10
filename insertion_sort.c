#include<stdio.h>
int main(){
    int arr[]={250,1200,450,90,800,300};
    int n =sizeof(arr)/sizeof(arr[0]);
    printf("orginal prices\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    for(int i=1;i<n;i++){
        int key =arr[i];
        int j=i-1;
    while(j>=0&&arr[j]<key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
    printf("pass %d(Inserting %d):\n",i,key);
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
    printf("\n");
}
printf("final sorted prices(high to low)\n");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
printf("\n");
return 0;
    

}