#include<stdio.h>

int main(){
    // int num=4;
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=5;j++){
    //         if(j<=num){
    //             printf("_ ");
    //         }
    //         else{
    //             printf("* ");
    //         }
    //     }
    //     num--;
    //     printf("\n");
    // }


    // for(int i=0;i<5;i++){
    //     for(int j=4;j>i;j--){
    //         printf("  ");
    //     }
    //     for(int k=0;k<=i;k++){
    //         printf(" * ");
    //     }
    //     for(int z=1;z<=i;z++){
    //         printf(" * ");
    //     }
    //     printf("\n");
    // }
    
    for(int i=0;i<5;i++){
        for(int j=4;j>i;j--){
            printf("  ");
        }
        for(int k=0;k<=i;k++){
            printf(" * ");
        }
        for(int z=1;z<=i;z++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;


    
}