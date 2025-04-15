#include <iostream>
using namespace std;

class Queue
{
private:
    int front, rear, size;
    int capacity;
    int *arr;

public:
    Queue(int capacity)
    {
        this->capacity = capacity;
        this->size = 0;
        this->front = 0;
        this->rear = -1;
        arr = new int[capacity];
    }

    ~Queue()
    {
        delete[] arr;
    }

    void enqueue(int data);
    void dequeue();
    void peek(); 
    bool isEmpty();
    bool isFull();  
    void display();
    void getfront();
    void getrear();
    int Size();
};

void Queue::enqueue(int data)
{
    if (isFull())
    {
        cout << "Queue is full..." << endl;
        return;
    }
   arr[++rear] = data;

}

void Queue::dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is empty..." << endl;
        return;
    }
    rear--;
}

bool Queue::isFull()
{
    return rear == capacity -1; 
}

bool Queue::isEmpty()
{
    return front == -1;
}

void Queue::getfront()
{
    if (isEmpty())
    {
        cout << "Queue is empty..." << endl;
        return;
    }
    cout << "Front element is : " << arr[front] << endl;
}

void Queue::getrear()
{
    if (isEmpty())
    {
        cout << "Queue is empty..." << endl;
        return;
    }
    cout << "Rear element is : " << arr[rear] << endl;
}

void Queue::peek()
{
    if (isEmpty())
    {
        cout << "Queue is empty..." << endl;
        return;
    }
    cout << "Peek element is : " << arr[front] << endl;
}

int Queue::Size()
{
    cout << "Size of queue is : ";
    cout<<rear-front+1<<endl;
}

void Queue::display()
{
    if (isEmpty())
    {
        cout << "Queue is empty..." << endl;
        return;
    }
    cout << "Queue elements are : ";
    for (int i = front; i <= rear; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    Queue queue(5);
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30); 
    queue.enqueue(40);       
    queue.enqueue(50);
    queue.enqueue(60);  
    queue.enqueue(70);
    // queue.dequeue();
    queue.display();  

    // queue.peek();
    // queue.getfront();
    // queue.getrear();
    // queue.Size();
    
    cout<<"Queue is empty : "<<queue.isEmpty()<<endl;
    cout<<"Queue is full : "<<queue.isFull()<<endl;
    
    return 0;
}