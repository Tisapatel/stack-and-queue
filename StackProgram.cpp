#include <iostream>
using namespace std;

class Stack
{
private:
    int *array;
    int top;
    int capacity;

public:
    Stack(int capacity)
    {
        this->capacity = capacity;
        array = new int[capacity];
        top = -1; // Initialize top to -1 indicating stack is empty
    }

    ~Stack()
    {
        delete[] array;
    }

    void push(int value)
    {
        if (isfull())
        {
            cout << "Stack is full. " << value << endl;
            return;
        }
        array[++top] = value;
        cout << value  << " is push element" << endl;
    }

    void pop()
    {
        if (isempty())
        {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << array[top--] << " is popped from stack." << endl;
    }

    void peek()
    {
        if (isempty())
        {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Top element is: " << array[top] << endl;
    }

    bool isfull()
    {
        return top == capacity - 1;
    }

    bool isempty()
    {
        return top == -1;
    }

    void size()
    {
        cout << "size of stack: " << top + 1 << endl;
    }

    void display()
    {
        if (isempty())
        {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack stack(5); // Create a stack with capacity 5

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60);
    


   
    // stack.pop();


    stack.display();
    // stack.peek();
    // stack.size();

    cout<<"Stack is Full: "<<stack.isfull()<<endl;
    cout<<"Stack is Empty: "<<stack.isempty()<<endl;


return 0;
}
