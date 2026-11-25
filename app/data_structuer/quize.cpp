#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // enter bell
    stack<string>a,b,c;
    cout<<"enter number of bellon";
    int n;
    cin>>n;
    int cunt=0;
    for (int i = 1; i <= n; i++)
    {
        cout<<"bellon"<<i<<endl;
        string bll;
        cin>>bll;
        a.push(bll);
    }
    while (!a.empty())
    {
        if (a.top()=="g")
        {
            b.push(a.top());
            cunt++;
        }else{
            c.push(a.top());
        }
        a.pop();
    }
    cout<<"nomber of green ====>"<<cunt<<endl;
    cout<<"\n============================\n";
    cout<<"stack green"<<endl;
    while (!b.empty())
    {
        cout<<b.top()<<endl;
        b.pop();
        
    }
    cout<<"\n============================\n";
    cout<<"stack of red"<<endl;
while (!c.empty())
{
    cout<<c.top()<<endl;
    c.pop();
    
}

    
    return 0;
}