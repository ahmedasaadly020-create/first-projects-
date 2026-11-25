#include <iostream>
#include <array>
using namespace std;
array<int, 5> circolar_queue;
int front = -1, rear = -1;
void enqueue(int value);
void dequeue();
int get_front();
bool isempty();
bool is_full();
void display();
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    cout << "\n=========================\n";
    enqueue(6);
    dequeue();
    display();
    cout << "\n=========================\n";
    enqueue(6);
    display();
    cout << "\n=========================\n";
    cout << get_front() << endl;
    return 0;
}

bool isempty()
{
    if (front == -1 && rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool is_full()
{
    if (front == 0 && rear == circolar_queue.size() - 1)
    {
        return true;
    }
    else if (front == rear + 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void enqueue(int value)
{
    if (is_full())
    {
        cout << "circolar_queue is full" << endl;
    }
    else
    {
        if (front == -1 && rear == -1)
        {
            front++;
            circolar_queue[++rear] = value;
        }
        else if (rear == circolar_queue.size() - 1)
        {
            rear = 0;
            circolar_queue[rear] = value;
        }
        else
        {
            circolar_queue[++rear] = value;
        }
    }
}
void dequeue()
{
    if (isempty())
    {
        cout << "circolar_queue is empty" << endl;
    }
    else
    {
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == circolar_queue.size() - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
}

int get_front()
{
    if (isempty())
    {
        cout << "circolar_queue is empty" << endl;
        return -1;
    }
    else
    {
        return circolar_queue[front];
    }
}
void display()
{
    if (isempty())
    {
        cout << "circolar_queue is empty" << endl;
    }
    else
    {
        if (front <= rear)
        {
            for (int i = front; i <= rear; i++)
            {
                cout << circolar_queue[i] << "\t";
            }
            cout << endl;
        }
        else
        {
            for (int i = front; i < circolar_queue.size(); i++)
            {
                cout << circolar_queue[i] << "\t";
            }

            for (int i = 0; i <= rear; i++)
            {
                cout << circolar_queue[i] << "\t";
            }
        }
    }
}