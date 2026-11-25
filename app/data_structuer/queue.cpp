// #include <iostream>
// #include <array>
// using namespace std ;
// array<int,5>queue;
// int front=-1 ;
// int rear=-1;
// void enqueue(int value );
// void dequeue();
// int peek();
// bool isfull();
// bool isempty();
// void clear();
// void display();

// int main()
// {
//     enqueue(10);
//     enqueue(13);
//     enqueue(16);
//     enqueue(18);
//     enqueue(19);
//     isempty();
//     dequeue();
//     dequeue();
//     cout<< peek()<<endl;
//     display();
//     isfull();
//     isempty();

//     return 0;
// }
// void enqueue(int value )
// {
//     if (rear != queue.size()-1)
//     {
//         if (rear==-1 && front==-1)
//         {
//             front++;
//             queue[++rear]=value;
//         }else{
//             queue[++rear]=value;
//         }

//     }else{
//         cout <<"queue is full "<<endl;
//     }
// }
// void dequeue()
// {
//     if (rear!=-1&&front!=-1&&front<=rear)
//     {
//         front ++;
//     }else{
//         cout <<" queue is empty"<<endl;
//     }

// }
// int  peek()
// {
//     if (rear!=-1&&front!=-1&&front<=rear)
//     {
//         return queue[front];
//     }else{
//         cout <<" queue is empty"<<endl;
//         return -1;
//     }
// }
// void display()
// {
//         if (rear!=-1&&front!=-1&&front<=rear)
//     {
//         while (front<=rear)
//         {
//             cout<<queue[front]<<"\t";
//             front ++;
//         }

//     }else{
//         cout <<" queue is empty"<<endl;
//     }
// }
// bool isfull()
// {
//     if (rear==queue.size()-1)
//     {
//         cout<<true<<endl;
//         return true;
//     }else {
//         cout<<false<<endl;
//         return false ;
//     }

// }
// bool isempty()
// {
//     if (rear==-1&&front==-1&&front>rear)
//     {
//         cout<<true<<endl;
//         return true;
//     }else {
//         cout<<false<<endl;
//         return false ;
//     }

// }
// void clear()
// {
//     front=-1;
//     rear=-1;
// }
// ! queue
// #include <iostream>
// #include<array>
// using namespace std;
// array<int,10> queue;
// int front=-1,rear=-1;
// void enqueue(int value);
// void dequeue();
// int get_front();
// void display();
// bool is_full();
// bool is_empty();
// int main()
// {
//     enqueue(15); //!15
//     enqueue(4);// ? 4
//     dequeue();//* 4
//     display(); //? 4
//     enqueue(9); // todo  9
//     enqueue(8);//! 9|8
//     display();//? 9|8
//     dequeue();//* // 9|8
//     dequeue(); // ! 8
//     dequeue();// ___
//     display(); //queue is empty!!
//     return 0;
// }
// // void enqueue(int value )
// // {
// //     if (rear != queue.size()-1)
// //     {
// //         if (rear==-1 && front==-1)
// //         {
// //             front++;
// //             queue[++rear]=value;
// //         }else{
// //             queue[++rear]=value;
// //         }

// //     }else{
// //         cout <<"queue is full "<<endl;
// //     }
// // }
// void enqueue(int value)
// {
//     if (rear!=queue.size()-1)
//     {
//         if (rear==-1 && front==-1)
//         {
//             front++;
//             queue[++rear]=value;
//         }else{
//             queue[++rear] =value;
//         }

//     }else{
//         cout<<"queue is full";
//     }

// }
// // void dequeue()
// // {
// //     if (rear!=-1&&front!=-1&&front<=rear)
// //     {
// //         front ++;
// //     }else{
// //         cout <<" queue is empty"<<endl;
// //     }

// // }
// void dequeue()
// {
//     if (rear!=-1&&front!=-1&&front<=rear)
//     {
//         front++;
//     }else{
//         cout<<"queue is empty"<<endl;
//     }

// }
// int get_front()
// {

//     if (rear!=-1&&front!=-1&&front<=rear)
//     {
//         return queue[front];
//     }else{
//         cout<<"queue is empty"<<endl;
//         return -1;
//     }

// }

// void display()
// {
//         if (rear!=-1&&front!=-1&&front<=rear)
//     {
//         while (front<=rear)
//         {
//             cout<<queue[front]<<"\t";
//             front ++;
//         }

//     }else{
//         cout <<" queue is empty"<<endl;
//     }
// }
// bool is_full()
// {
//     if (rear==queue.size()-1)
//     {
//         cout<<"queue is full "<<endl;
//         return true;
//     }else{
//         return false;
//     }

// }
// bool is_empty()
// {
//     if (front==-1 && rear==-1 && front>rear)
//     {
//         cout<<"queue is empty"<< endl;
//         return true;
//     }else{
//         return false;
//     }
// }
// ! queue
// #include <iostream>
// #include <array>
// using namespace std;
// array<int, 10> queue;
// int front = -1, rear = -1;
// void enqueue(int value);
// void dequeue();
// int get_front();
// void display();
// bool is_full();
// bool is_empty();
// int main()
// {
//     enqueue(10); // 10
//     enqueue(24); //? 10|24
//     enqueue(45); //! 10|24|45
//     enqueue(55); // * 10|24|45|55
//     display();   // todo 10|24|45|55
//     dequeue();   // is empty
//     enqueue(33); // ?33
//     enqueue(6);  //! 33|6
//     enqueue(9);  //* 33|6|9
//     enqueue(22); // todo 33|6|9|22
//     dequeue();   // 6|9|22
//     dequeue();   //? 9|22
//     display();   //! 9|22
//     return 0;
// }
// void enqueue(int value)
// {
//     if (rear != queue.size() - 1)
//     {
//         if (rear == -1 && front == -1)
//         {
//             front++;
//             queue[++rear] = value;
//         }
//         else
//         {
//             queue[++rear] = value;
//         }
//     }
//     else
//     {
//         cout << "queue is full" << endl;
//     }
// }
// void dequeue()
// {
//     if (rear != -1 && front != -1 && front <= rear)
//     {
//         front++;
//     }
//     else
//     {
//         cout << "queue is empty" << endl;
//     }
// }
// int get_front()
// {
//     if (rear != -1 && front != -1 && front <= rear)
//     {
//         return queue[front];
//     }
//     else
//     {
//         cout << "queue is empty" << endl;
//         return -1;
//     }
// }
// void display()
// {
//     if (rear != -1 && front != -1 && front <= rear)
//     {
//         while (front <= rear)
//         {
//             cout << queue[front] << endl;
//             front++;
//         }
//     }
//     else
//     {
//         cout << "queue is empty" << endl;
//     }
// }
// bool is_full()
// {
//     if (rear == queue.size() - 1)
//     {
//         cout << "queue is full" << endl;
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// bool is_empty()
// {
//     if (rear == -1 && front == -1 && front > rear)
//     {
//         cout << "queue is empty" << endl;
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int>a;
    queue<int>b;
    int v;
    a.push(3);
    a.push(6);
    a.push(5);
    a.push(9);
    a.push(4);
    a.push(2);
    while (!a.empty())
    {
        if (a.front()%2!=0)
        {
            v = a.front();
            b.push(v);
            a.pop();
        }else{
            a.pop();
        }
        
    }
    while (!b.empty())
    {
        cout<<b.front();
        b.pop();
    }
    
    

    return 0;
}