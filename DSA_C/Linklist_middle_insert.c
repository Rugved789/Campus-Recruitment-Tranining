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

void insertAtMiddle(struct Node **head, int data) {
	struct Node *newNode = createNode(data);

	if (*head == NULL) {
		*head = newNode;
		return;
	}

	int count = 0;
	struct Node *temp = *head;

	while (temp != NULL) {
		count++;
		temp = temp->next;
	}

	int middle = count / 2;
	temp = *head;

	for (int i = 1; i < middle; i++) {
		temp = temp->next;
	}

	newNode->next = temp->next;
	temp->next = newNode;
}

void insertAtBegin(struct Node **head, int data) {
	struct Node *newNode = createNode(data);

	if (*head == NULL) {
		printf("Linked list is empty\n");
		free(newNode);
		return;
	}

	newNode->next = *head;
	*head=newNode;
}

int main() {
	struct Node *head = NULL;

	head = createNode(10);
	head->next = createNode(20);
	head->next->next = createNode(30);
	head->next->next->next = createNode(40);

	printf("Original list: ");
	display(head);

	insertAtMiddle(&head, 25);

	printf("After inserting in middle: ");
	display(head);

	insertAtBegin(&head, 5);

	printf("After inserting in Begining: ");
	display(head);

	return 0;
}
