#include <iostream>
#include "LinkedList.cpp"

int main() {
  LinkedList myList;
  std::cout << "Testing 'appendNode'"<<std::endl;
  std::cout << "Appended nodes 10.5, 20.3, 30.7"<<std::endl;
  std::cout << std::endl;
  myList.appendNode(10.5);
  myList.appendNode(20.3);
  myList.appendNode(30.7);

  std::cout << "Testing 'displayList'"<<std::endl;
  myList.displayList();

  std::cout << std::endl;
  std::cout << "Testing 'insertNode'"<<std::endl;
  std::cout << "Inserted nodes 0.9,20.3, 25.9, 45.9, and 0.5"<<std::endl;
  // Test insertNode
  myList.insertNode(0.9); // Insert in the beginning
  myList.insertNode(25.9); // Insert in the middle
  myList.insertNode(20.3); // Insert same values
  myList.insertNode(45.9); // Insert in the ending
  myList.insertNode(0.5); // Insert in the beginning
  std::cout << std::endl;

  std::cout << "Testing 'displayList'"<<std::endl;
  myList.displayList(); 
  std::cout << std::endl;

  std::cout << "Testing 'deleteNode'" << std::endl;
  std::cout << "Deleted node 20.3"<<std::endl;
  myList.deleteNode(20.3); // delete from the middle
  myList.displayList();
  std::cout << std::endl;

  std::cout << "Testing 'deleteNode'" << std::endl;
  std::cout << "Deleted node 45.9"<<std::endl;
  myList.deleteNode(45.9); // delete from the last
  myList.displayList();
  std::cout << std::endl;

  std::cout << "Deleted node 0.9"<<std::endl;
  myList.deleteNode(0.9); // delete from the beginning
  myList.displayList();
  std::cout << std::endl;

  std::cout << "Deleted node 0"<<std::endl;
  myList.deleteNode(0); // delete non-existant element
  myList.displayList();
  std::cout << std::endl;

  return 0;
}