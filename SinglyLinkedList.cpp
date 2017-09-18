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
    void insertAtPos (int pos, int data);
    void deleteFirst();
    void deleteLast();
    void deleteAtPos(int pos);
    void printList();
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

void SinglyLinkedList::insertAtPos(int pos, int data) {
  node *previous = new node;
  node *current = new node;
  node *temp = new node;
  current = head;

  for (int i = 1; i < pos; ++i) {
    previous = current;
    current = current->next;
  }
  temp->data = data;
  previous->next = temp;
  temp->next = current;

}

void SinglyLinkedList::deleteFirst() {
  node *temp = new node;
  temp = head;
  head = head->next;
  delete temp;
}

void SinglyLinkedList::deleteLast() {
  node *current = new node;
  node *previous = new node;
  current = head;
  while (current->next != NULL) {
    previous=current;
    current=current->next;
  }
  tail = previous;
  previous->next = NULL;
  delete current;
}

void SinglyLinkedList::deleteAtPos(int pos) {
  node *current = new node;
  node *previous = new node;
  current = head;
  for (int i = 1; i < pos; ++i) {
    previous = current;
    current = current->next;
  }
  previous->next = current->next;

}

void SinglyLinkedList::printList() {
  node *temp = new node;
  temp = head;
  while (temp != NULL) {
    cout << temp->data << "\t";
    temp=temp->next;
  }
}