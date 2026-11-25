// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
// int num1,num2,sum,  subtraction,multiplication,division ;
// cout<<"enter first number ";
// cin>>num1;
// cout<<"enter sconde number ";
// cin>>num2;
// sum=num1+num2;
// subtraction=num1-num2;
// multiplication=num1*num2;
// division=num1/num2;
// cout<<sum<<endl;
// cout<<subtraction<<endl;
// cout<<multiplication<<endl;
// cout<<division<<endl;
// cout<<pow((2*num1-4),2);
//     int n,num1,num2=0;
//     cout<<"enter number ";
//     cin>>n;
//     num1=n-num2;
//     cout<<num1<<","<<num2<<endl;

//     return 0;
// }
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     long long n, res = 0, dig;
//     cin >> n;
//     while (n != 0)
//     {
//         dig = n % 10;
//         res = res * 10 + dig;
//         n /= 10;
//     }
//     cout << res;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     // int i, n;
//     // bool is_prime = true;
//     // cout << "Enter a positive integer: ";
//     // cin >> n;
//     // // 0 and 1 are not prime numbers
//     // if (n == 0 || n == 1)
//     // {
//     //     is_prime = false;
//     // }
//     // // loop to check if n is prime
//     // for (i = 2; i <= n / 2; ++i)
//     // {
//     //     if (n %  n+1 != 0)
//     //     {
//     //         is_prime = false;
//     //         break;
//     //     }
//     // }
//     // if (is_prime)
//     //     cout << n << " is a prime number";
//     // else
//     //     cout << n << " is not a prime number";
//     int numbers[5]={10,200,80,40,50};
//     int sum=0;
//     for (int i = 0; i <=4; i++)
//     {
//         sum=sum+numbers[i];
//     }
//     cout<<"sum = >"<<sum<<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     const int ROW = 3;
//     const int COL = 3;
//     int a[ROW][COL]; // تعريف مصفوفة ثنائية الأبعاد بحجم 3 صفوف و 3 أعمدة

//     cout << "Enter the elements of the 2D array:\n";

//     // الحلقة الخارجية للمرور على الصفوف
//     for (int i = 0; i < ROW; i++) {
//         // الحلقة الداخلية للمرور على الأعمدة داخل الصف الحالي
//         for (int j = 0; j < COL; j++) {
//             cin >> a[i][j]; // قراءة وإدخال القيمة من المستخدم وتخزينها في الخلية الحالية
//         }
//     }
//     for (int i = 0; i < ROW; i++) {
//         // الحلقة الداخلية للمرور على الأعمدة داخل الصف الحالي
//         for (int j = 0; j < COL; j++) {
//              cout<< a[i][j]; // قراءة وإدخال القيمة من المستخدم وتخزينها في الخلية الحالية
//         }
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     // تعريف مصفوفتين بحجم 2×2 وتعيين القيم الأولية، ومصفوفة للنتيجة c
//     int a[2][2] = { {1, 1},
//                     {1, 1} };
//     int b[2][2] = { {2, 2},
//                     {2, 2} };
//     int c[2][2];

//     // الحلقة الخارجية لصفوف المصفوفة الأولى
//     for (int i = 0; i < 2; i++) {
//         // الحلقة الوسطى لأعمدة المصفوفة الثانية
//         for (int j = 0; j < 2; j++) {
//             c[i][j] = 0; // تصفير العنصر قبل بدء الجمع التراكمي

//             // الحلقة الداخلية الثالثة لتنفيذ عملية الضرب والجمع
//             for (int k = 0; k < 2; k++) {
//                 c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
//             }
//         }
//     }

//     // طباعة مصفوفة النتيجة النهائية (c)
//     cout << "The result matrix (C) after multiplication:\n";
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             cout << c[i][j] << " \t";
//         }
//         cout << endl; // الانتقال لسطر جديد بعد طبع كل صف
//     }

//     return 0;
// }
// #include <iostream>
// #include <stack>
// using namespace std;
// int main()
// {
// int arr1[2][3];
// for (int i = 0; i < 2; i++)
// {
//     for (int d = 0; d < 3; d++)
//     {
//         cin>>arr1[i][d];
//     }

// }
// for (int i = 0; i < 2; i++)
// {
//     for (int d = 0; d < 3; d++)
//     {
//         cout<< arr1[i][d];
//     }
//     cout<<endl;

// }

// int arr1[2][2]={
//     {1,1},
//     {1,1}
// };
// int arr2[2][2]={
//     {2,2},
//     {2,2}
// };
// int arr3[2][2];
// for (int i = 0; i <2; i++)
// {
//     for (int j = 0; j < 2; j++)
//     {
//         arr3[i][j]=0;
//         for (int k = 0; k <2; k++)
//         {
//             arr3[i][j]=arr3[i][j]+(arr1[i][k]*arr2[k][j]);
//         }

//     }

// }

//     for (int i = 0; i < 2; i++)
// {
//     for (int j = 0; j < 2; j++)
//     {
//         cout<< arr3[i][j]<<"\t";
//     }
//     cout<<endl;

// }
// stack<char>w;
// w.push('a');
// w.push('h');
// w.push('m');
// w.push('e');
// w.push('d');
// while ( !w.empty())
// {
//     cout<<w.top();
//     w.pop();
// }

//     return 0;
// }
// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {
//     stack<char> s;
//     string str;

//     cout << "Enter expression: ";
//     cin >> str;

//     for (char ch : str)
//     {
//         if (ch == '(' || ch == '[' || ch == '{')
//         {
//             s.push(ch);
//         }
//         else if (ch == ')' || ch == ']' || ch == '}')
//         {
//             if (s.empty())
//             {
//                 cout << "Not Balanced";
//                 return 0;
//             }

//             if ((ch == ')' && s.top() == '(') ||
//                 (ch == ']' && s.top() == '[') ||
//                 (ch == '}' && s.top() == '{'))
//             {
//                 s.pop();
//             }
//             else
//             {
//                 cout << "Not Balanced";
//                 return 0;
//             }
//         }
//     }

//     if (s.empty())
//         cout << "Balanced";
//     else
//         cout << "Not Balanced";

//     return 0;
// }

// #include <iostream>
// #include <stack>
// using namespace std;
// int main()
// {
//     stack<char>s;
//     string str;
//     cout<<"enter exprison"<<endl;
//     cin>>str;
//     for(char ch : str){
//         if (ch=='{'||ch=='('||ch=='[')
//         {
//             s.push(ch);
//         }
//         else if (ch=='}'||ch==']'||ch==')')
//         {
//             if (s.empty())
//             {
//                 cout << "Not Balanced";
//                 return 0;
//             }

//                     if ((ch=='}'&& s.top()=='{')||
//             (ch==']'&& s.top()=='[')||
//             (ch==')'&& s.top()=='('))
//         {
//             s.pop();
//         }else
//         {
//             cout << "Not Balanced";
//             return 0;
//         }

//     }
//         }

//             if (s.empty())
//         {
//             cout<<"Balanced"<<endl;
//             return true;
//         }else{
//             cout << "Not Balanced";
//         }

//     return 0;
// }
