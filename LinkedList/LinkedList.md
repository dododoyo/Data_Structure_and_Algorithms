This class is designed to manage a singly linked list of nodes, where each node contains a float value.

The `LinkedList` class has a private nested structure `ListNode`. This structure represents a node in the linked list. Each `ListNode` has two members: a `float` named `value` that holds the data for the node, and a pointer to the next `ListNode` in the list.

**The `LinkedList` class also has a private member `head`** which is a pointer to the first `ListNode` in the list. This `head` pointer is used as the entry point to the linked list.

The public members of the `LinkedList` class are a constructor, a destructor, and four methods for manipulating the list:

- The constructor `LinkedList(void)` initializes the `head` pointer to `NULL`, indicating that the list is initially empty.
- The destructor `~LinkedList(void)` is declared but not defined in this selection. It would typically be used to deallocate any memory that was dynamically allocated during the lifetime of a `LinkedList` object.
- The `appendNode(float)` method is intended to add a node with a given float value to the end of the list.
- The `insertNode(float)` method is intended to insert a node with a given float value at a specific position in the list.
- The `deleteNode(float)` method is intended to remove a node with a specific float value from the list.
- The `displayList(void)` method is intended to print the values of all nodes in the list.

In C++, the destructor of a class is automatically called when an object of that class goes out of scope. This is the place where you should deallocate any memory that was dynamically allocated during the lifetime of the object.

With this destructor, any `LinkedList` object will automatically clean up its nodes when it is destroyed. For example, in your `main` function, `myList` will be destroyed and its memory freed when `main` returns.

Segmentation fault (core dumped) : This error occurs when you have

- Stack overflow
- read violation
- write violation
- another memory errors

- In my first implementation of appendNode I was just declaring the variable for new node and not allocating any memory space c++ is not like python declaring a variable doesn't mean we have allocated a memory space for it.
- A little bit note about what a pointer is " whenever an asterisks is putted before the name of the variable that variable becomes a pointer and an ampersand(&) will be used to refer the address of a variable for example.

```c++
int x = 4;
int * pointer_to_x = &x;
```
- The above code can be read as `integer pointer named pointer_to_x is set to the address of x`. here is a more detailed explanation. 

- `x` is a variable that holds the value `4`. It doesn't hold an address, it holds an actual integer value.

- `&x` (the address of `x`) is the memory location where `x` is stored.

- `pointer_to_x` is a pointer that holds the address of `x`. So it contains the memory location where `x` is stored, not the address of that memory location.

So in summary, `x` holds the integer value `4`, and `pointer_to_x` holds the memory address where `4` is stored. The address of `pointer_to_x` would be the location in memory where the pointer itself (i.e., the address of `x`) is stored, but that's not typically something you deal with unless you're working with pointers to pointers.

In the RAM (Random Access Memory), `x` stores the actual value `4`. 

When you declare a variable like `int x = 4;`, the system allocates a certain amount of memory to store the integer value `4`. The size of this memory allocation is typically 4 bytes for an `int` on most systems, but it can vary. The variable `x` is essentially a label for this memory location.

When you create a pointer to `x` with `int* pointer_to_x = &x;`, `pointer_to_x` stores the memory address where `x` is located, not the value of `x`. This memory address is a numerical value that points to the location in RAM where `x` is stored.

So, to summarize:

- `x` stores the value `4` in a certain memory location in RAM.
- `pointer_to_x` stores the memory address of `x`, i.e., the location in RAM where `4` is stored.

- A pointer is just a value that happens to be a memory address
  
- When I use displayList is displays n+1 elements (this happened when current node started from head and not head->next)

