#include <iostream>
using namespace std;
#define size 5
int stack[size];
int top = -1;
void push(int mm);
int pop();
void display();
int main()
{

    push(1);
    push(6);
    push(5);
    push(4);
    display();
    return 0;
}

void push(int mm)
{
    if (top == size-1)
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        top++;
        stack[top] = mm;
    }
}
int pop()
{
    if (top == -1)
    {
        cout << "stack underflow" << endl;
        return -1;
    }
    else
    {
        return stack[top--];
    }
}
void display()
{
    if (top == -1)
    {
        cout << "stack underflow" << endl;
    }
    else
    {
        while (top != -1)
        {
            cout << stack[top]<<endl;
            top--;
        }

    }
}