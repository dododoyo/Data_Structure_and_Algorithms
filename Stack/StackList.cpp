#include <iostream>

class StackList{
  private:
      struct Node
      {
        float value;
        struct Node *next;
      };


  public:
      Node *head;
      StackList(void){
        head = NULL;
      }
      ~StackList(void){
        Node *currentNode,*nextNode;
        currentNode = head;
        while (! currentNode){
          nextNode = currentNode->next;
          delete currentNode;
          currentNode = nextNode;
        }
      }
      bool IsListEmpty() {return !head;}
      double getTop(){
        if (!head){
          std::cout << "Error: the stack is empty";
          return -1;
        }
        else{
          return head->value;
        }
      }
      void insertTop(float number){
        // Always inserts in the beginning of the List
        Node *nodeToInsert = new Node;

        nodeToInsert->value = number;
        nodeToInsert->next = NULL;

        if (!head){
          head = nodeToInsert;
        }
        else{
            nodeToInsert->next = head;
            head = nodeToInsert;
          }
        }
      };
      
      double deleteTop(){
          if (!head){
            std::cout << "Error: the stack is empty." << std::endl;
            return -1;
          }
          else{
            Node *newHead = head->next;
            head_value = head->value;
            delete head;
            head = newHead;
            return head_value;
          }
        };

      void displayList(void){
        Node *currentNode = head;
        while (currentNode){
          std::cout << currentNode->value << "->";
          currentNode = currentNode->next;
        }
        std::cout<<std::endl;
      };
};