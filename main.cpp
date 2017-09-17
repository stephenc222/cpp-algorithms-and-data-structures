
#include <iostream>
#include "sort.cpp"
#include "SinglyLinkedList.cpp"

SinglyLinkedList singlyLinkedList;

int main(int argc, char *argv[]){
  int firstNode = 25;
  int secondNode = 15;
  int thirdNode = 7;
  singlyLinkedList.createNode(firstNode);
  singlyLinkedList.insertAtStart(secondNode);
  singlyLinkedList.insertAtStart(thirdNode);
  singlyLinkedList.printList();


  std::cout << "Hello World!" << std::endl;
  return 0;
}