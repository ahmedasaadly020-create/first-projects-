#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head = NULL;
void insert_node(int value);
void display();
void delete_node(int value);
void insert_beg(int value);
void delete_beg();
int main()
{
    insert_node(19);
    insert_node(4);
    insert_node(15);
    insert_node(20);
    insert_node(8);
    display();
    delete_node(15);
    cout << "\n=================================\n";
    display();
    cout << "\n=================================\n";
    insert_beg(2);
    display();
    cout << "\n=================================\n";
    delete_beg();
    display();
    return 0;
}
void insert_node(int value)
{
    node *new_node, *last;
    new_node = new node;
    new_node->data = value;
    if (head == NULL)
    {
        head = new_node;
        new_node->next = NULL;
    }
    else
    {
        last = head;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = new_node;
        new_node->next = NULL;
    }
}
void display()
{
    node *current_node;
    if (head == NULL)
    {
        cout << "linked list is empty ." << endl;
    }
    else
    {
        current_node = head;
        while (current_node != NULL)
        {
            cout << current_node->data << "\t";
            current_node = current_node->next;
        }
    }
}
void delete_node(int value)
{
    node *current, *privius;
    current = head;
    privius = head;
    if (current->data == value)
    {
        head = current->next;
        free(current);
        return;
    }
    while (current->data != value)
    {
        privius = current;
        current = current->next;
    }
    privius->next = current->next;
    free(current);
}
void insert_beg(int value)
{
    node *new_node = new node;
    new_node->data = value;
    new_node->next = head;
    head = new_node;
}
void delete_beg()
{

    if (head == NULL)
    {
        cout << "linked list is empty \n";
    }
    else
    {
        node *first_node = head;
        head = first_node->next;
        delete (first_node);
    }
}