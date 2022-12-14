#include <iostream>
using namespace std;
class node{
public:
int data;
node*next;
};

void printlist(node*n)
{
  while(n!=NULL){
    cout<<n->data;
    //cout for gaps
    n=n->next;
  }
}
void push(node*head_ref, int new_data)
{
  node*head_ref=node*head;
  node*new_node=new node();
  
}



int main() {
  node*head=NULL;
  node*second=NULL;
  node*third=NULL;

  head=new node();
  second=new node();
  third=new node();

  head->data=-1;
  head->next=second;

  second->data=2;
  second->next=third;

  third->data=3;
  third->next=NULL;

  printlist(head);

  return 0;
}

