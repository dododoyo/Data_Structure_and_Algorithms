#include <iostream>
class ArrayStack {
  private:  
      int maxTop;
      int top;
      double* values;

  public:
      ArrayStack(int size){
        maxTop = size-1;
        values = new double[size];
        top = -1;
      };
      ~ArrayStack(){delete [] values;};
      bool IsEmpty() {return top == -1;}
      bool IsFull() {return top == maxTop;}
      double Pop(){
        if (IsEmpty()){
          std::cout << "Error: the stack is empty"<< std::endl;
          return -1;
        }
        else{
          return values[top--];
        }
      };
      void Push(const double pushed_value){
        if (IsFull()){
          std::cout <<"Error: the stack is full." << std::endl;
        }
        else{
          values[++top] = pushed_value;
        }
      };

      double Top(){
        if (IsEmpty()){
          std::cout << "Error: the stack is empty." << std::endl;
          return -1;
        }
        else{
          return values[top];
        }
      };
      void DisplayStack(void){
        std::cout << "Top -->";
        for (int i = top ; i >= 0 ; i--)
          std::cout << "\t|\t" << values[i] << "\t|" << std::endl;
        std::cout << "\t|---------------|" << std::endl;
      };
};