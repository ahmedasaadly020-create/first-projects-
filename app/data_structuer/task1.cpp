// !task1
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int>numbers;
    int n;
cout<<"enter number of integer";
cin>>n;
int value;
for (int i = 1; i <= n; i++)
{
    cout<<"enter the number "<<i<<endl;
    cin>>value;
    numbers.push(value);

}
cout<<"search number"<<endl;
int r;
cin>>r;
int count=0;
bool v=false;
while (!numbers.empty())
{
    if (numbers.front()==r)
    {
        v=true;
        
        break;
    }else{
        v=false;
        numbers.pop();
    }
    count++;
}
if (v)
{
    cout<<"index your search number is  :"<<count;
}else{
    cout<<"not fond";
}
system("pause>0");

    return 0;
}
// ? task2
// #include <iostream>
// #include <queue>
// using namespace std;
// int main()
// {
//     cout << "enter number of card";
//     int n;
//     cin >> n;
//     queue<int> card;
//     int value;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << "enter the card " << i << endl;
//         cin >> value;
//         card.push(value);
//     }

// while (card.size()>=2)
// {
//             if (card.size() > 1)
//     {
//         cout << card.front();//5
//         card.pop();//45672
//         int x;
//         x = card.front();//4
//         card.push(x);
//         card.pop();//6246
//     }
// }
// cout<<"\n===================\n";
// cout<<card.front();


//     return 0;
// }