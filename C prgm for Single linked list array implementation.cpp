#include <stdio.h>
struct node 
{
int data;
struct node *next;
};
struct node *head = NULL;
void insert(int data) 
{
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  new_node->data = data;
  new_node->next = NULL;
if (head == NULL) {
    head = new_node;
  } else {
    struct node *current = head;
    while (current->next != NULL && current->data < data) {
      current = current->next;
    }
    new_node->next = current->next;
    current->next = new_node;
  }
}

void print_list() {
  struct node *current = head;
  while (current != NULL) {
    printf("%d ", current->data);
    current = current->next;
  }
  printf("\n");
}
int main() 
{
  int data;
  printf("Enter the elements of the list: ");
  while (1) {
    scanf("%d", &data);
    if (data == -1) {
      break;
    }
    insert(data);
  }
  print_list();

  return 0;
}

