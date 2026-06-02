#include<stdio.h>
#include<string.h>

int main(){
    char c = '&';
    printf("%c\n",c);
    char arr[]="Hello";
    int count =0;
    while(arr[count]!='\0'){
        count++;
    }

    for (int i=0;i<count;i++){
        printf("%c\t",arr[i]);
    }
    return 0;
}