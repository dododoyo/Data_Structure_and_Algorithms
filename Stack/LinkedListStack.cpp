#include <iostream>
#include "StackList.cpp"

class LinkedListStack{
  public:
      LinkedListStack(){StackList Stack};
      ~LinkedListStack(){};
      bool IsEmpty() {return Stack.IsListEmpty();}
      double Pop(){return Stack.deleteTop();};
      void Push(const double pushed_value){Stack.insertTop(pushed_value);};
      double Top(){return Stack.getTop();};
      void DisplayStack(){Stack.displayList();};
};