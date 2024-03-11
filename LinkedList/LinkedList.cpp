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
        if (head == NULL){
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
            ListNode *newHead = head;
            delete head;
            head = newHead;
          }
          else{
            ListNode *currentNode = head;
            ListNode *prevNode = NULL;

            while( currentNode != NULL and currentNode->value != number){
              prevNode = currentNode;
              currentNode = currentNode->next;
            }
            if (currentNode){
              // The node to delete has been found.
              prevNode->next = currentNode->next;
              delete currentNode;
            }
            return;
          }
        };
      void displayList(void){
        ListNode *currentNode = head->next;
        while (currentNode){
          std::cout << currentNode->value << "->";
          currentNode = currentNode->next;
        }
        std::cout<<std::endl;
      };
};