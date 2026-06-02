#include<stdio.h>
#include<string.h>

int main(){
    char c = '&';
    printf("%c\n",c);
    char arr[]="Hello";

    int strLength= strlen(arr);

    for (int i=strLength;i>=0;i--){
        printf("%c",arr[i]);
    }
    return 0;
}