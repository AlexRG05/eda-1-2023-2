#include<stdio.h>
#include<stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

struct Node* addToempty(struct Node* last, int data) {
  if (last != NULL) return last;

  struct Node* newMode = (struct Node*)malloc(sizeof(struct Node));

  newMode->data = data;

  last = newNode;

  last->next = last;

  return last;
}

struct Node* addFront(struct Node* last, int data) {

  if(last == NULL) return addToempty(last; data);

  struct Node* newMode = (struct Node*)malloc(sizeof(struct Node));

  newNode->data = data;

  newNode->next = last->next;

  last->next = newNode;

  return last;

}

struct Node* addEnd(struct Node* last, int data) {

  if (last == NULL) return addToempty(last, data);

  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

  newNode->data = data;

  newNode->next = last->next;

  last->next = newNode;

  last = newNode;

  return last;
}

struct Node* addAfter(struct Node* last, int data, int item) {

  if (last == NULL) return NULL;

  struct Node *newNode, *p;

  p = last->next;
  do {
  if (p->data == item) {

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;

    newNode->next = p->next;

    p->next = newNode;


    if (p == last) last = newNode;
    return last;
  }

  p = p->next;
  } while (p != las->next);

  printf("\nEl nodo dado no esta presente en la lista");
  return last;

}

void deleteNode(strcut Node** last, int key) {

   if (*last == NULL) return;

    if ((*last)->data == key && (*last)->next == *last) {
     free(*last);
     *last = NULL;
     return;
    }
   

   struct Node *temp = *last, *d;

    if ((*last)->data == key) {
     
      while (temp-> next != *last) temp = temp->next;

      temp->next = (*last)->last;
      free(*last);
      *last = NULL;
      return;
    }

   struct Node *temp = *last, *d;

    if ((*last)->data == key) {
     
     while (temp->next != *last) temp = temp->next;

     temp->next = (*last)->next;
     free(*last);
     *last = temp->next;
    }

    while (temp->next != *last && temp->next->data != key) {
   
}











void transverse(struct Node* last) {
  struct Node* p;

  if (last == NULL) {
    printf("La lista esta vacia");
    return;
  }

  p= last->next;

  do {
  printf("d ",p->data);
  p = p->next;

  } while (p != last->next);
}





int main() {
   struct Node* last = NULL;

   last = addToempty(last, 6);
   last = addEnd(last, 8);
   last = addFront(last, 2);

   last = addAfter(last, 10, 2);

   transverse(last);

   deleteNode(&last, 8);

   printf("\n");

   transverse(last);

   return 0;
}


  