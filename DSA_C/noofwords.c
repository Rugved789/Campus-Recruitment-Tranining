#include<stdio.h>
#include<string.h>
int main(){

    char str[50]="symbiosis institute of technology";
    printf("%s\n",str);

    int strLength=strlen(str);

    int i=0;
    int count=0;
    int max=0;
    while(i<50){
        if(str[i]!=' '){
            if(str[i]=='\0'){
                count++;
            }
            count++;
        }
        else{
            if(count>max){
                max=count;
            }
            count=0;
        }
        i++;    
    }

    printf("%d\n",count+1);
    printf("%d\n",max);
    return 0;
}