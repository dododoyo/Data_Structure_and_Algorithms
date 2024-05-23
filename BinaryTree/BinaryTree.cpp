#include <iostream>
class BinaryTree
{
public:
  struct TreeNode
  {
    int value;
    TreeNode *left;
    TreeNode *right;
  };

  TreeNode *root;

  // void destroySubTree(TreeNode*);
  void deleteNode(int target, TreeNode *&currentNode)
  {
    if (currentNode->value > target)
    {
      deleteNode(target, currentNode->left);
    }
    else if (currentNode->value < target)
    {
      deleteNode(target, currentNode->right);
    }
    else
    {
      makeDeletion(currentNode);
    }
  };
  void makeDeletion(TreeNode *&nodeToBeDeleted)
  {
    if (nodeToBeDeleted == NULL)
    {
      std::cout << "You can't delete empty node.";
    }
    else
    {
      // has no right_child
      if (nodeToBeDeleted->right == NULL)
      {
        // re-attach the left child
        TreeNode *tempNode = nodeToBeDeleted;
        nodeToBeDeleted = nodeToBeDeleted->left;
        delete tempNode;
      }
      // has no left_child
      else if (nodeToBeDeleted->left == NULL)
      {
        // re-attach the right child
        TreeNode *tempNode = nodeToBeDeleted;
        nodeToBeDeleted = nodeToBeDeleted->right;
        delete tempNode;
      }
      // has both left and right_child
      else
      {
        TreeNode *tempNode = nodeToBeDeleted;

        tempNode = nodeToBeDeleted->right;

        while (tempNode->left != NULL)
        {
          tempNode = tempNode->left;
        }
        tempNode->left = nodeToBeDeleted->left;

        tempNode = nodeToBeDeleted;
        nodeToBeDeleted = nodeToBeDeleted->right;

        delete tempNode;
      }
    }
  };
  void displayInOrder(TreeNode *currentNode)
  {
    if (currentNode != NULL)
    {
      displayInOrder(currentNode->left);
      std::cout << currentNode->value << "\n";
      displayInOrder(currentNode->right);
    }
  };
  void displayPreOrder(TreeNode *currentNode)
  {
    if (currentNode != NULL)
    {
      std::cout << currentNode->value << "\n";
      displayPreOrder(currentNode->left);
      displayPreOrder(currentNode->right);
    }
  };
  void displayPostOrder(TreeNode *currentNode)
  {
    if (currentNode != NULL)
    {
      displayPostOrder(currentNode->left);
      displayPostOrder(currentNode->right);
      std::cout << currentNode->value << "\n";
    }
  };
  void remove(int num)
  {
    deleteNode(num, root);
  }

public:
  BinaryTree()
  {
    root = nullptr;
  }

  ~BinaryTree()
  {
    // destroySubTree(root);
  }

  void insertNode(int num)
  {
    TreeNode *insertedNode;
    insertedNode = new TreeNode;

    insertedNode->value = num;
    insertedNode->left = NULL;
    insertedNode->right = NULL;

    if (root == nullptr)
    {
      root = insertedNode;
      return;
    }
    TreeNode *currentNode = root;

    while (currentNode != NULL)
    {
      if (num < currentNode->value)
      {
        if (currentNode->left == NULL)
        {
          currentNode->left = insertedNode;
          break;
        }
        else
        {
          currentNode = currentNode->left;
        }
      }
      else if (num > currentNode->value)
      {
        if (currentNode->right == NULL)
        {
          currentNode->right = insertedNode;
          break;
        }
        else
        {
          currentNode = currentNode->right;
        }
      }
      else
      {
        std::cout << "Duplicate value found in Tree.\n";
        break;
      }
    }
  };
  bool searchNode(int num)
  {
    TreeNode *currentNode = root;

    while (currentNode != NULL)
    {
      if (currentNode->value < num)
      {
        currentNode = currentNode->right;
      }
      else if (currentNode->value > num)
      {
        currentNode = currentNode->left;
      }
      else
      {
        return true;
      }
    }
    return false;
  };
  // void remove(int);

  void showNodesInOrder()
  {
    displayInOrder(root);
  }

  void showNodesPreOrder()
  {
    displayPreOrder(root);
  }

  void showNodesPostOrder()
  {
    displayPostOrder(root);
  }
};