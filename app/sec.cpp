// #include<iostream>
// #include<string>
// #include<fstream>
// #include<array>
// using namespace std ;
// int main()
// {
//     fstream task2;
//     // task2.open("task2.text",ios::in | ios::app);
//     // array<string,100> fruit;
//     int n;
//     int num;
//     string fruits;
//     //     for (int i = 0; i<=(fruit.size()-1); i++)
//     //     {
//     //         task2>> fruit[i];
//     //     }
//     //     for (int k = 0; k < fruit.size(); k++)
//     //     {
//     //         if (fruit[k]=="")
//     //         {
//     //             break;
//     //         }
//     //         cout<<fruit[k]<<endl;
//     //     }
//     //     cout<<"fresh fruts"<<endl;
//     //     task2.close();
//         //     cout << "enter your operation ===> ";
//         // cin >> n;
//         // if (n == 1)
//         // {
//             task2.open("task2.text", ios::in | ios::out | ios::app);
//             cout << "enter  number of fruits ====>";
//             cin >> num;
//             for (int i = 1; i <= num; i++)
//             {
//                 cout << "enter  the fruits " << i << " ====>  ";
//                 cin >> fruits;
//                 task2 << fruits << endl;
//             }
// return 0;
// }
// #include <iostream>
// #include <string>
// #include <fstream>
// #include <array>
// using namespace std;
// int main()
// {
//     fstream task2;
//     task2.open("task2.docx", ios::in | ios::out | ios::app);
//     array<string, 100> fruit;
//     int n;
//     int num;
//     string fruits;
//     cout << "1 ===> write " << endl;
//     cout << "2 ===> read " << endl;
//     cout << "3 ===>  stop program " << endl;
//     while (n < 3)
//     {
//         cout << "enter your operation ===> ";
//         cin >> n;
//         if (n==1)
//         {
                        
//             task2.open("task2.docx", ios::in | ios::out | ios::app);
//             cout << "enter  number of fruits ====>";
//             cin >> num;
//             for (int i = 1; i <= num; i++)
//             {
//                 cout << "enter  the fruits " << i << " ====>  ";
//                 cin >> fruits;
//                 task2 << fruits << endl;
//             }
//             task2.close();
        
//         }
//         else if (n==2)
//         {
                    
//             task2.open("task2.docx", ios::in | ios::out | ios::app);
//             for (int l = 0; l <= (fruit.size() - 1); l++)
//             {
//                 task2 >> fruit[l];
//             }
//             for (int k = 0; k < fruit.size(); k++)
//             {
//                 if (fruit[k] == "")
//                 {
//                     break;
//                 }
//                 cout << fruit[k] << endl;
//             }
//             cout << "fresh fruts" << endl;
//             task2.close();
//         }
//         else if(n==3)
//         {
            
        
//             if (n == 3)
//             {
//                 cout<<"the program is off";
//                 return 0;
//             }
//         }else{
//             cout << " invalid option";
//             return 0;
//             break;
//         }
//         }


//     return 0;
#include <iostream>
#include <fstream>
using namespace std ;
int main()
{

    // ofstream file1("")
//     int number[11]={10,8,20,25,30,35,-1,0,0,-4,-7};
//     int positive=0,negativ=0,zeros=0;
//     for (int i = 0; i < 6; i++)
//     {
//         if (number[i]>0)
//         {
//             positive++;
//         }else if(number[i]<0){
//             negativ++;
//         }else{
//             zeros++;
//         }
        
//     }
    
//     cout<<"positive numbers : "<<positive<<endl;
//     cout<<"negativ numbers : "<<negativ<<endl;
//     cout<<"zeros numbers : "<<zeros<<endl;
// //         int x;
// //     cout<<"enter number : ";
// //     cin>>x;
// //     bool e=0;
// //     for (int i = 0; i < 6; i++)
// //     {
// //         if (number[i]==x)
// //         {
// //             cout<<"fond";
// //             return  0;
        
        
// //     }else if(number[i]!=x){
// //         e=1;
// //     }
// // }
// // if (e)
// // {
// //     cout<<"not fond";
// // }
    return 0;
}