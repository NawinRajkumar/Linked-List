//creating a singly linked list with three nodes.
#include <stdio.h>

struct Node
  {
    int data;
    struct Node* next;
  };

int main() 
{
  //a structure is defined using a value and a pointer this value can be of any datatype.
  
  
  //Three nodes are initialized using pointers of the three nodes starts from head.
  //The headers are initialized as NULL but will be                                     connected to the next node in the upcoming.

  struct Node* head = NULL; 
  struct Node* second = NULL;
  struct Node* third = NULL;
 
  //the pointers are dereferenced here and the values are initialized.
  head=(struct Node*)malloc(sizeof(struct Node)); 
  second=(struct Node*)malloc(sizeof(struct Node));
  third=(struct Node*)malloc(sizeof(struct Node));
  
  head->data = 5;
  head->next = second;

  second->data = 10;
  second->next = third;
  
  third->data = 15;
  third->next = NULL;

  struct Node* n = head;

  while(n!=NULL)
    {
      printf(" %d", n->data);
      n = n->next;
    }

}