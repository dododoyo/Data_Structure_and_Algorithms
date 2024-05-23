#include <iostream>
class LinkedList{
  private:
      struct ListNode
      {
        float value;
        struct ListNode *next;
      };
      ListNode *head;
      
  public:
      LinkedList(void){
        head = NULL;
      }
      ~LinkedList(void){
        ListNode *currentNode,*nextNode;
        currentNode = head;
        while (! currentNode){
          nextNode = currentNode->next;
          delete currentNode;
          currentNode = nextNode;
        }
      }
      void appendNode(float num){
        ListNode *nodeToAppend = new ListNode; // Allocate memory for nodeToAppend
        nodeToAppend->value = num;
        nodeToAppend->next = NULL;

        if (!head ){
          head = nodeToAppend;
        }
        else{
          ListNode *currentNode = head;
          while(currentNode->next){
            currentNode = currentNode->next;
          }
          currentNode->next = nodeToAppend;
        }
      };
      void insertNode(float number){
        ListNode *nodeToInsert = new ListNode;
        nodeToInsert->value = number;
        nodeToInsert->next = NULL;
        if (!head){
          head = nodeToInsert;
        }
        else{
          ListNode *prevNode = NULL;
          ListNode *currentNode = head;
          while (currentNode and currentNode->value < number){
            prevNode = currentNode;
            currentNode = currentNode->next;
          }
          if (prevNode){
            nodeToInsert->next = prevNode->next;
            prevNode->next = nodeToInsert;
          }
          else{
            nodeToInsert->next = head;
            head = nodeToInsert;
          }
        }
      };
      void deleteNode(float number){
          if (!head){
            return ;
          }
          if (head->value == number){
            ListNode *newHead = head->next;
            delete head;
            head = newHead;
          }
          else{
            ListNode *currentNode = head;
            ListNode *prevNode = NULL;
            
            while( currentNode != NULL && currentNode->value != number){
              prevNode = currentNode;
              currentNode = currentNode->next;
            }
            if (currentNode){
              // The node to delete has been found.
              prevNode->next = currentNode->next;
              delete currentNode;
            }
            // if the current node is NULL it means the node to delete is not found and we do nothing
            return;
          }
        };
      void displayList(void){
        ListNode *currentNode = head;
        while (currentNode){
          std::cout << currentNode->value << "->";
          currentNode = currentNode->next;
        }
        std::cout<<std::endl;
      };
};