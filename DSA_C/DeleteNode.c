//Delete Node in a Linked List
#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

struct Node *createNode(int data) {
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	if (newNode == NULL) {
		printf("Memory allocation failed\n");
		exit(1);
	}

	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void display(struct Node *head) {
	struct Node *temp = head;

	if (temp == NULL) {
		printf("Linked list is empty\n");
		return;
	}

	while (temp != NULL) {
		printf("%d -> ", temp->data);
		temp = temp->next;
	}

	printf("NULL\n");
}

void deleteNode(struct Node **head, int data) {
	struct Node *temp = *head;
	struct Node *prev = NULL;

	if (temp != NULL && temp->data == data) {
		*head = temp->next;
		free(temp);
		return;
	}

	while (temp != NULL && temp->data != data) {
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL) {
		printf("Node with data %d not found\n", data);
		return;
	}

	prev->next = temp->next;
	free(temp);
}

int main() {
	struct Node *head = NULL;

	head = createNode(10);
	head->next = createNode(20);
	head->next->next = createNode(30);
	head->next->next->next = createNode(40);

	printf("Original list: ");
	display(head);

	deleteNode(&head, 20);

	printf("After deleting node with data 20: ");
	display(head);

	return 0;
}
