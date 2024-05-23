#include <iostream>
#include "BinaryTree.cpp"

int main()
{
  BinaryTree myTree;

  std::cout << "Inserting Nodes. \n";
  myTree.insertNode(5);
  myTree.insertNode(3);
  myTree.insertNode(9);
  myTree.insertNode(1);
  myTree.insertNode(8);
  myTree.insertNode(12);
  std::cout << "Done. \n.";

  // Inorder traversal of a BST gives a sorted number.
  std::cout << "In-order traversal:\n";
  myTree.showNodesInOrder();
  std::cout << "\nPre-order traversal:\n";
  myTree.showNodesPreOrder();
  std::cout << "\nPost-order traversal:\n";
  myTree.showNodesPostOrder();

  std::cout << "\n\nSearching 8" << std::endl;
  if (myTree.searchNode(8))
  {
    std::cout << "8 in Tree" << std::endl;
  }
  else
  {
    std::cout << "8 not in Tree" << std::endl;
  }
  std::cout << "Searching 2" << std::endl;
  if (myTree.searchNode(2))
  {
    std::cout << "2 in Tree" << std::endl;
  }
  else
  {
    std::cout << "2 not in Tree" << std::endl;
  }
  std::cout << "Searching 12" << std::endl;
  if (myTree.searchNode(12))
  {
    std::cout << "12 in Tree" << std::endl;
  }
  else
  {
    std::cout << "12 not in Tree\n"
              << std::endl;
  }
  std::cout << "Deleting 8...\n";
  myTree.remove(8);
  std::cout << "Deleting 12...\n";
  myTree.remove(12);
  std::cout << "Now, here are the nodes:\n";
  myTree.showNodesInOrder();
}