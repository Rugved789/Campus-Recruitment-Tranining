#include<stdio.h>
void main(){

    int arr[6]={5,9,1,3,12,4};
    int temp=arr[0];
    int second=arr[0];

    for(int i=0;i<=5;i++){
        if(arr[i]>temp){
            temp=arr[i];
        }

    }
    for(int i=0;i<=5;i++){

        if(arr[i]>second && arr[i]<temp){
            second=arr[i];
        }
    }

    printf("Greatest Element:%d\n",temp);
    printf("Second Element:%d",second);

}