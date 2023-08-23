#include <stdio.h>
#include <stdlib.h>
struct node 
{
  int data;
  struct node *next;
};

void merge_lists(struct node *head1, struct node *head2) {
  struct node *p1 = head1;
  struct node *p2 = head2;
  struct node *merged_head = NULL;
  struct node *merged_tail = NULL;

  while (p1 != NULL && p2 != NULL) {
    if (p1->data < p2->data) {
      if (merged_head == NULL) {
        merged_head = p1;
        merged_tail = p1;
      } else {
        merged_tail->next = p1;
        merged_tail = p1;
      }
      p1 = p1->next;
    } else {
      if (merged_head == NULL) {
        merged_head = p2;
        merged_tail = p2;
      } else {
        merged_tail->next = p2;
        merged_tail = p2;
      }
      p2 = p2->next;
    }
  }

  if (p1 != NULL) {
    merged_tail->next = p1;
  } else if (p2 != NULL) {
    merged_tail->next = p2;
  }

  return merged_head;
}

int main() {
  struct node *head1 = NULL;
  struct node *head2 = NULL;
  head1 = (struct node *)malloc(sizeof(struct node));
  head1->data = 1;
  head1->next = (struct node *)malloc(sizeof(struct node));
  head1->next->data = 3;
  head1->next->next = NULL;
  head2 = (struct node *)malloc(sizeof(struct node));
  head2->data = 2;
  head2->next = (struct node *)malloc(sizeof(struct node));
  head2->next->data = 4;
  head2->next->next = NULL;
  struct node *merged_head = merge_lists(head1, head2);
  while (merged_head != NULL) {
    printf("%d ", merged_head->data);
    merged_head = merged_head->next;
  }
  printf("\n");
  return 0;
}

