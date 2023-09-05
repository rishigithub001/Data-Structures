#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
}*top=NULL,*temp;
void push(int data)
{
 temp=(struct node*)malloc(sizeof(struct node));
 temp->data=data;
 temp->next=top;
 top=temp;
}
void pop()
{
 temp=top;
 if(top!=NULL)
 {
  printf("The popped element is %d",top->data);
  top=top->next;
  free(temp);
 }
 else
 {
  printf("\nStack Underflow");
 }
}
void display()
{
 temp=top;
 if(temp==NULL)
 {
  printf("\nStack is empty\n");
 }
 while(temp!=NULL)
 {
  printf("%d-->",temp->data);
  temp=temp->next;
 }
}
int main()
{
 int choice,data;
 printf("****Linked List Implementation of Stack****");
 do
 {
  printf("\n1.Push 2.Pop 3.Display 4.Exit");
  printf("\nEnter your choice:");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
     printf("Enter a new element:");
     scanf("%d",&data);
     push(data);
     break;
   case 2:
     pop();
     break;
   case 3:
     display();
     break;
   case 4:
     exit(0);
  }
 }while(choice<5);
}

