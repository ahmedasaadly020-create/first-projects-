// #include <iostream>
// #include <array>
// using namespace std;
// // #define size 5
// // int stack[size];
// array<int,5> stack;
// int top=-1;
// void push(int value);
// int pop();
// int peek();
// void display();
// int main()
// {
//     display();
//     push(1);
//     push(11);
//     push(10);
//     push(2);
//     push(13);
//     push(20);
//     display();
//     pop();
//     push(20);
//     display();
//     pop();
//     cout<<"==================="<<endl;
//     cout<< peek()<<endl;
//     cout<<"==================="<<endl;
//     cout<< pop()<<endl;
//     display();

//     return 0;
// }
// void push(int value)
// {
//     if (top==stack.size()-1)
//     {
//         cout<<"stack overflow"<<endl;
//     }else
//     {
//         top++;
//         stack[top]=value;
//     }
    
// }
// int pop()
// {
//     if (top ==-1)
//     {
//         cout<<" stack underflow "<<endl;
//         return 0;
//     }else
//     {
//         return stack[top--];
//     }
    
// }
// int peek()
// {
//     if (top ==-1)
//     {
//         cout<<"stack underflow "<<endl;
//         return 0;
//     }else
//     {
//         return stack[top];
//     }
    
// }
// void display()
// {
//     if (top==-1)
//     {
//         cout<<"stack underflow "<<endl;
//     }else
//     {
//         for (int i = top; i >=0 ; i--)
//         {
//             cout<<stack[i]<<endl;
//             top--;
//         }
        
//         // while (!top==-1)
//         // {
//         //     cout<<stack[top];
//         //     top--;
//         // }
        
        
//     }
    
// }

// ! app of stack ex==>1
#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main()
{
    // stack<char>s,y;
    // string str;
    // cout<<"enter exprison"<<endl;
    // cin>>str;
    // for(char ch : str){
    //     if (ch=='{'||ch=='('||ch=='[')
    //     {
    //         s.push(ch);
    //     }
    //     else if (ch=='}'||ch==']'||ch==')')
    //     {
    //         if (s.empty())
    //         {
    //             cout << "Not Balanced";
    //             return 0;
    //         }
            
    //                 if ((ch=='}'&& s.top()=='{')||
    //         (ch==']'&& s.top()=='[')||
    //         (ch==')'&& s.top()=='('))
    //     {
    //         s.pop();
    //     }else
    //     {
    //         cout << "Not Balanced";
    //         return 0;
    //     }
        
    // }
    //     }


    //         if (s.empty())
    //     {
    //         cout<<"Balanced"<<endl;
    //         return true;
    //     }else{
    //         cout << "Not Balanced";
    //     }
    // stack<string>a,b;
    // a.push("red");
    // a.push("grean");
    // a.push("yellow");
    // a.push("blue");
    // a.push("pink");
    // while (!a.empty())
    // {
    //     string c=a.top();
    //     a.pop();
    //     if (c!="yellow")
    //     {
    //         b.push(c);
    //     }
        
    // }
    // while (!b.empty())
    // {
    //     string n=b.top();
    //     b.pop();
    //     a.push(n);

    // }
    // while (!a.empty())
    // {
    //     cout<<a.top()<<"\t"<<endl;
    //     a.pop();
    // }
    queue<string>a;
    a.push("red");
    a.push("grean");
    a.push("yellow");
    a.push("blue");
    a.push("pink");
        while (!a.empty())
    {
        cout<<a.front()<<"\t"<<endl;
        a.pop();
    }
    
    
        
    return 0;
    
}
