#include<stdio.h>

int binarySearch (int arr[],int size,int target){
        int low = 0;
        int high=size-1;
        while (low<=high){
            int mid = (low + high)/2;
            if(arr[mid]==target){
                return 1;
            }
            else if(arr[mid]<target){
                low = mid+1;
            }
            else if (arr[mid]>target){
                high = mid-1;
            }
        }
        return -1;
    }
int main(){
    int arr[6]={2,8,15,19,20,26};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 21;
    
    int result = binarySearch(arr,size,target);
    if(result==1){
        printf("Element Found\n");
    }
    else{
        printf("Element not found\n");
    }

    return 0;
}