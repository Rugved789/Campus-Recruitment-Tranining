#include<stdio.h>
#include<string.h>
int main(){

    char str[50]="symbiosis institute of technology";
    printf("%s\n",str);

    int strLength=strlen(str);

    int i=0;
    int count=0;
    int vowels=0;
    while(i<50){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            vowels++;
        }
        if(str[i] =='i'){
            count++;
        }
        i++;    
    }

    printf("%d\n",count);
    printf("%d\n",vowels);
    return 0;
}