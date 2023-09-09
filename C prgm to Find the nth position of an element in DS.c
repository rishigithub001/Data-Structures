#include <stdio.h>
#include <stdlib.h>
struct Node {
  int data;
  struct Node *next;
};

void printNth(struct Node *head, int n) {
  int count = 1;
  struct Node *current = head;

  while (current != NULL && count < n) {
    current = current->next;
    count++;
  }

  if (current != NULL) {
    printf("The nth node is %d\n", current->data);
  } else {
    printf("The nth node is not found\n");
  }
}

int main() {
  struct Node *head = NULL;
  struct Node *second = NULL;
  struct Node *third = NULL;

  head = malloc(sizeof(struct Node));
  second = malloc(sizeof(struct Node));
  third = malloc(sizeof(struct Node));

  head->data = 1;
  head->next = second;

  second->data = 2;
  second->next = third;

  third->data = 3;
  third->next = NULL;

  printNth(head, 3);

  return 0;
}

