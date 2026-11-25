#include <iostream>
#include <limits.h>
#include <iomanip>
#include <cmath>
#include <array>
using namespace std;
int main()
{
    int num1, num2, opr;
    double angle;

    cout << " 1 = \"+\"" << endl;
    cout << " 2 = \"*\"" << endl;
    cout << " 3 = \"-\"" << endl;
    cout << " 4 = \"/\"" << endl;
    cout << " 5 = \"pow()\"" << endl;
    cout << " 6 = \"sqrt()\"" << endl;
    cout << " 7 = \"%\"" << endl;
    cout << " 8 = \"sin()\"" << endl;
    cout << " 9 = \"cos()\"" << endl;
    cout << " 10 = \"tan()\"" << endl;
    cout << " 11 = \"sec()\"" << endl;
    cout << " 12 = \"csc()\"" << endl;
    cout << " 13 = \"cot()\"" << endl;
    cout << "enter the  opr : ";
    cin >> opr;
    switch (opr)
    {
    case 1:
        cout << "enter the first num : " << endl;
        cin >> num1;
        cout << "enter the seconde num : " << endl;
        cin >> num2;
        cout << "the result equals :==> " << num1 + num2;
        break;
    case 2:
        cout << "enter the first num : " << endl;
        cin >> num1;
        cout << "enter the seconde num : " << endl;
        cin >> num2;
        cout << "the result equals :==> " << num1 * num2;
        break;
    case 3:
        cout << "enter the first num : " << endl;
        cin >> num1;
        cout << "enter the seconde num : " << endl;
        cin >> num2;
        cout << "the result equals :==> " << num1 - num2;
        break;
    case 4:
        cout << "enter the first num : " << endl;
        cin >> num1;
        cout << "enter the seconde num : " << endl;
        cin >> num2;
        cout << "the result equals :==> " << num1 / num2;
        break;
    case 5:
        cout << "enter the first num : " << endl;
        cin >> num1;
        cout << "enter the power num : " << endl;
        cin >> num2;
        cout << "the result equals :==> " << pow(num1, num2);
        break;
    case 6:
        cout << "enter the  num : " << endl;
        cin >> num1;
        cout << "the result equals :==> " << sqrt(num1);
        break;
    case 7:
        cout << "enter the  num : " << endl;
        cin >> num1;
        cout << "the result equals :==> " << num1 % 2;
        break;
    case 8:
        cout << "enter the  angle : " << endl;
        cin >> angle;
        cout << "the result equals :==> " << sin(angle * M_PI / 180);
        break;
    case 9:
        cout << "enter the  angle : " << endl;
        cin >> angle;
        cout << "the result equals :==> " << cos(angle * M_PI / 180);
        break;
    case 10:
        cout << "enter the  angle : " << endl;
        cin >> angle;
        cout << "the result equals :==> " << sin(angle * M_PI / 180) / cos(angle * M_PI / 180);
        break;
    case 11:
        cout << "enter the  angle : " << endl;
        cin >> angle;
        cout << "the result equals :==> " << 1 / sin(angle * M_PI / 180);
        break;
    case 12:
        cout << "enter the  angle : " << endl;
        cin >> angle;
        cout << "the result equals :==> " << 1 / cos(angle * M_PI / 180);
        break;
    case 13:
        cout << "enter the  angle : " << endl;
        cin >> angle;
        cout << "the result equals :==> " << cos(angle * M_PI / 180) / sin(angle * M_PI / 180);
    default:
        cout << "erorr";
        break;
    }
//     cout<< setprecision(15);
// float a=9.1345666888;
// cout<<a;
// cout<<"\n";
// double b=6.564774777777777777;
// cout<< &b<<endl;
// int t=5;
// cout<<sizeof(t)<<endl;
// short int g=5;
// !cout<<sizeof(g)<<endl;
//? using bignum=long long int;
// typedef long long int bignum; 
// bignum g=8000000000000000;
// cout<<g<<endl;
// cout<<sizeof(long long int);
// cout<<sizeof(float(6)+ double(6) );
// cout<<(68978610);
// string a="ahmed";
// string b="asaad";
// cout<<a+" "+b;
// int a=7,b=8;
// cout<<(a<b?(b>a?"hello ahmed":"not corect"):"a<b");
// int num[5]={1,3,5,67,8};
// cout<<endl;
// cout<<sizeof(num);
    //int num[] = { 12,4,5,8,9 };
    // array<int,8> num= { 12,4,5,8,9 };
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << num[i] << endl;
    // }
    // cout<< num[6];
    // cout<<" mahmoud ashref;";
    return 0;
}
