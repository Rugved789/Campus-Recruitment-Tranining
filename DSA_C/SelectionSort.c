#include<stdio.h>

int sort (int arr[],int size){
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    return 0;
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

int main(){


    int arr[]={5,7,1,2,18,24,16,15,30,25,5};
    int size = sizeof(arr)/sizeof(arr[0]);

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