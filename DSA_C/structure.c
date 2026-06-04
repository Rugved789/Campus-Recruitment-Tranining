#include <stdio.h>
struct student{
    int rollno;
    float marks;
};


int main(){
    struct student s1;
    s1.rollno = 100;
    s1.marks=40.20;
    printf("Roll no is %d\n",s1.rollno);
    printf("Marks are %f\n",s1.marks);

    struct student s2;
    s2.rollno = 101;
    s2.marks=60.20;
    printf("Roll no is %d\n",s2.rollno);
    printf("Marks are %f\n",s2.marks);
    return 0;
}