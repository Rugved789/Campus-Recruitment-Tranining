#include<stdio.h>
void main(){

    int arr[6]={5,9,1,3,12,4};
    int target=12;
    int index;

    for(int i=0;i<=5;i++){
        if(arr[i]==target){
            index=i;
            break;
        }

    }
    printf("Element is found at : %d and location : %d",index,index+1);

}