#include<stdio.h>

struct Node{
    int data;
    struct Node* next;
};
void insert(struct Node **head,int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode.data=value;
    newNode.next=NULL;


    if(*head==NULL){
        *head=newNode;
        return;
    }
    else{
        struct Node* temp  = head;
        while(*temp.next!=NULL){
            temp=temp.next;
        }
        temp.next=newNode;
        
    }

}
int main(){
    struct Node *head = NULL;
    insert(&head,10);
    return 0;
}