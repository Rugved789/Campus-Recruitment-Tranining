#include <stdio.h>

int main()
{
    int num=9;
        for (int j=1;j<=3;j++){
            for(int k=1;k<=3;k++){
                printf("%d ",num);
                num--;
            }
            printf("\n");
        }

    return 0;

}