
#include <iostream>
#include "sort.cpp"
#include "SinglyLinkedList.cpp"

using namespace std;
SinglyLinkedList singlyLinkedList;

int main(int argc, char *argv[]){
  int firstNode = 25;
  int secondNode = 15;
  int thirdNode = 7;
  cout << "Singly Linked list - insert nodes:" <<  endl;
  singlyLinkedList.createNode(firstNode);
  singlyLinkedList.insertAtStart(secondNode);
  singlyLinkedList.insertAtStart(thirdNode);
  singlyLinkedList.printList();
  cout << endl << "Singly Linked list - delete nodes:" <<  endl;  
  singlyLinkedList.deleteFirst();
  singlyLinkedList.deleteLast();
  singlyLinkedList.printList();


  cout << endl << "Hello World" << endl;
  return 0;
}