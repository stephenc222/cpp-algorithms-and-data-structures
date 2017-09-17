#include <iostream>

using namespace std;

// each node of the list
struct node {
  int data;
  node *next;
};

class SinglyLinkedList {
  private:
    node *head, *tail;
  public:
    void createNode( int data );
    void insertAtStart (int data);
    void insertAtEnd (int data);
    void removeNode( double node );
    void printList( void );
    SinglyLinkedList() {
      head=NULL;
      tail=NULL;
    }

};

void SinglyLinkedList::createNode(int data) {
  node *temp = new node;
  temp->data=data;
  temp->next=NULL;
  if(head==NULL) {
    head=temp;
    tail=temp;
    temp=NULL;
  } else {
    tail->next=temp;
    tail=temp;
  }
}

void SinglyLinkedList::insertAtStart(int data) {
  node *temp = new node;
  temp->data = data;
  temp->next = head;
  head = temp;
}

void SinglyLinkedList::insertAtEnd(int data) {
  node *temp = new node;
  temp->data = data;
  temp->next = tail;
  tail = temp;
}

void SinglyLinkedList::printList(void) {
  node *temp = new node;
  temp = head;
  while (temp != NULL) {
    cout << temp->data << "\t";
    temp=temp->next;
  }
}