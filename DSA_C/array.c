#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int result;
    for(int i=0;i<=9;i++){
        printf("%d\n",arr[i]);
        result=result+arr[i];
    }
    printf("Result:%d",result);


    return 0;
}