#include <iostream>
using namespace std;
union box{
    int height;
    int weight;
};
int main()
{
    // int x=40;
    // int *ptr = &x;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // int * num=new int (20);
    // cout<<num<<endl;
    // cout<<*num<<endl;
    // int num1,num2,num3;
    // cout<<"enter num 1 : "<<endl;
    // cin>>num1;
    // cout<<"enter num 2 : "<<endl;
    // cin>>num2;
    // cout<<"enter num 3 : "<<endl;
    // cin>>num3;
    // if (num1>num2&&num1>num3)
    //     cout<<"largest valu e is :"<<num1<<endl;
    // else if(num2>num1&&num2>num3)
    // cout<<"largest valu e is :"<<num2<<endl;
    // else
    // cout<<"largest valu e is :"<<num3<<endl;
    // char x;
    // cin >> x;
    // if (x >= 'A' && x <= 'Z')
    // {
    //     cout << "Alpha" << endl;
    //     cout << "is capital" << endl;
    // }
    // else if (x >= 'a' && x <= 'z')
    // {
    //     cout << "Alpha" << endl;
    //     cout << "is small" << endl;
    // }
    // else
    // {
    //     cout << "is digit" << endl;
    // }
    // double x;
    // cin >> x;
    // if (x - int(x) == 0)
    //     cout << "the number is int" << endl;
    // else
    //     cout << "the number is double" << endl;
    box b1;
    b1.height=50;
    b1.weight=30;
    cout<<b1.height<<endl;
    cout<<b1.weight<<endl;
    return 0;
}