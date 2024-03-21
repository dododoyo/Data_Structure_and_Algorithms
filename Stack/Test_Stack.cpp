#include <iostream>
#include "Stack.cpp"

int main() {
  Stack stack(5);
  stack.Push(5.0);
  stack.Push(6.5);
  stack.DisplayStack();
  std::cout << "Top:  " << stack.Top() << std::endl;
  stack.Pop();
  std::cout << "Top:  " << stack.Top() << std::endl;
  stack.Push(-7);
  while (! stack.IsEmpty()){
    stack.DisplayStack();
    std::cout << std::endl;;
    stack.Pop();
  }
  return 0;
}