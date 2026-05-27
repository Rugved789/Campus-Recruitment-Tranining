#include<stdio.h>

int main(){


    int arr[6]={20,8,15,56,2,16};
    int size = 6;

    printf("Original Array:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    for(int i=0;i<size-1;i++){
        for(int j= 0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;

            }
        }
    }
    
    printf("\n");
    
    printf("Sorted Array:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}