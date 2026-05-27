#include<stdio.h>

int sort (int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j= 0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return 0;
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

int main(){


    int arr[6]={20,8,15,56,2,16};
    int size = 6;

    printf("Original Array:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    sort(arr,size);    
    printf("\n");
    printf("Sorted Array:");
    printarray(arr,size);
    return 0;
}