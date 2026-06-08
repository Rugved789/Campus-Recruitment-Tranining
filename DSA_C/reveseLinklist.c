//Reverse Linked List
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head = NULL;
void insert(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));de
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
void reverse(){
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
void display(){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    printf("Original List: ");
    display();
    reverse();
    printf("Reversed List: ");
    display();
    return 0;
}
