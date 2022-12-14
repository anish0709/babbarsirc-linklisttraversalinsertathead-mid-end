
#include <iostream>
using namespace std;
class node {
public:
  int data;
  node *next;
};

void printlist(node *n) {
  while (n != NULL) {
    cout << n->data;
    // cout for gaps
    n = n->next;
  }
}

// insert node at head
void push(node** head_ref, int new_data)
{
   
    // 1. allocate node
    node* new_node = new node();
 
    // 2. put in the data
    new_node->data = new_data;
 
    // 3. Make next of new node as head
    new_node->next = (*head_ref);
 
    // 4. move the head to point
    // to the new node
    (*head_ref) = new_node;
}

int main() {
  node *head = NULL;
  node *second = NULL;
  node *third = NULL;

  head = new node();
  second = new node();
  third = new node();

  head->data = -1;
  head->next = second;

  second->data = 2;
  second->next = third;

  third->data = 3;
  third->next = NULL;

  printlist(head);
  push(&head, 45);
  printlist(head);
  return 0;
}
