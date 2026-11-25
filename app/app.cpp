// #include <iostream>
// #include <fstream>
// #include <array>
// using namespace std;
// int main()
// {
//     // int a, b;
//     // char c;
//     // cout<<"1 ======> char to ASCII "<<endl;
//     // cout<<"2 ======> ASCII to char "<<endl;
//     // cout << "enter case =====> ";
//     // cin >> a;
//     // switch (a)
//     // {
//     //         case 1:
//     //     while (true)
//     //     {

//     //         cout << "enter the char =====> ";
//     //         cin >> c;
//     //         cout << int(c)<<endl;
//     //     }
//     //     break;

//     // case 2:
//     //     while (true)
//     //     {
//     //         if (b == 0)
//     //         {
//     //             break;
//     //         }
//     //         cout << "enter the num ====> ";
//     //         cin >> b;
//     //         cout << char(b) << endl;
//     //     }

//     //     break;

//     // }
//     // cout<<int('a');
//     // array<int,5> num={2,4,6,8,10};
//     // while (true)
//     // {
//     //     int a;
//     //     cout<<"enter the num ";
//     //     cin>>a;
//     //     bool found =false;
//     //     for (int i = 0; i < num.size(); i++)
//     //     {
//     //         if (num[i]==a)
//     //         {
//     //             found=true;
//     //             break;
//     //         }

//     //     }
//     //     if (found)
//     //     {
//     //         cout<<a;
//     //         return 0;
//     //     }

//     // }
//     // string name="E \tL  \n Z E\fr o";
//     // for (int i = 0; i <name.size(); i++)
//     // {
//     //     if (isupper(name[i]))
//     //     {
//     //         cout<< char(tolower(name[i]));
//     //     }else{
//     //         cout<<char( toupper(name[i]));
//     //     }

//     // }
//     // for (int i = 0; i < name.size(); i++)
//     // {
//     //     if (isspace(name[i]))
//     //     {
//     //         continue;
//     //     }else{
//     //         cout<<name[i];
//     //     }

//     // }
//     // int a,b;
//     // cout<<"enter the first number";
//     // cin>>a;
//     // cout<<"enter the scounde number ";
//     // cin>>b;
//     // cout<<"sum = "<<a+b;
//     // cout<<"\n multiplication ="<<a*b;
//     // cout<<"\n subtraction ="<<a-b;
//     // cout<<"division = "<<a/b<<endl;
//     // ofstream ahmed_output;
//     // ahmed_output.open("ahmed_output.text");
//     // ahmed_output.close();
//     // ahmed_output.open("ahmed_output.text");
//     // ahmed_output<<"hello worled";
//     // ahmed_output.close();
//     array<int, 10> arr1;
//     array<int, 10> arr2;
//     array<int, 10> arr;

//     cout << "enter the the first array ===> \n";
//     for (int j = 0; j < 10; j++)
//     {
//         cin >> arr1[j];
//     }
//     cout << "enter the the secound array ===> \n";
//     for (int m = 0; m < 10; m++)
//     {
//         cin >> arr2[m];
//     }
//     for (int i = 0; i < 10; i++)
//     {

//         arr[i] = arr1[i] + arr2[i];
//         arr[i] = arr1[i] - arr2[i];
//     }
//     for (int n = 0; n < 10; n++)
//     {
//         cout << "the number ===> ";
//         cout << arr[n];
//         cout << "\n";
//     }
//     // array<int,5> mark;
//     //     for (int i = 0; i < mark.size(); i++)
//     //     {
//     //         cout<<"enter mark >> ";
//     //         cin>>mark[i];
//     //     }

//     //     for (int m = 0; m < mark.size(); m++)
//     //     {
//     //         cout<<"mark of "<<m+1 <<" = "<<mark[m]<<endl;
//     //     }

//     return 0;
// }
// #include <iostream>
// using namespace std;
// struct book
// {
//     string name;
//     string reader;
//     string athor;
//     int page;
//     double price;
// };
// int main()
// {
//     // book star = { "ahmed","mohammed","sife",115,95.25 };
//     // cout<<"the name is : " << star.name << endl;
//     // cout <<"the reader is : " << star.reader << endl;
//     // cout << "tha athor is : " << star.athor << endl;
//     // cout << "the page is : " << star.page << endl;
//     // cout <<"the price is : " << star.price << endl;
//     book books[13] =    {{"ahmed", "mohamed", "baasem", 33, 77},
//                         {"ahmed", "mohamed", "baasem", 33, 77},
//                         {"ahmed", "mohammed", "sife", 1150, 95.25},
//                         {"ahmed1", "mohammed", "ali", 119, 95.25},
//                         {"ahmed2", "mohammed", "atef", 11565, 95.25},
//                         {"ahmed3", "mohammed", "maged", 1154, 95.25},
//                         {"ahmed4", "mohammed", "omar", 1145, 95.25},
//                         {"ahmed5", "mohammed", "adel", 1155, 95.25},
//                         {"ahmed6", "mohammed", "shema", 1415, 95.25},
//                         {"ahmed7", "mohammed", "menna", 1135, 95.25},
//                         {"ahmed8", "mohammed", "faten", 11512, 95.25},
//                         {"ahmed9", "mohammed", "mai", 1152, 95.25},
//                         {"ahmed10", "mohammed", "safi", 12215, 945.25}};
//     for (int i = 0; i <13; i++)
// 	{
// 		cout << "===========================\n";
// 		cout << "the name is : " << books[i].name<<"\n the reader is : " <<books[i].reader<<" \n tha athor is :"<<books[i].athor << " \nthe page is : "<<books[i].page<<" \n the price is :"<<books[i].price << endl;
// 		cout << "===========================\n";
//     // cout<<books[0].name;
// 	}
//     return 0;
// }
// #include <iostream>
// using namespace std;
// struct book{
// 	string name;
// 	string reader;
// 	string athor;
// 	int page;
// 	double price;
// };
// int main()
// {
// 	book star[11];
// 	star[0] = {"ahmed" ,"mohammed","sife",1150,95.25};
// 	star[1] = { "ahmed1" ,"mohammed","ali",119,95.25 };
// 	star[2] = { "ahmed2" ,"mohammed","atef",11565,95.25 };
// 	star[3] = { "ahmed3" ,"mohammed","maged",1154,95.25 };
// 	star[4] = { "ahmed4" ,"mohammed","omar",1145,95.25 };
// 	star[5] = { "ahmed5" ,"mohammed","adel",1155,95.25 };
// 	star[6] = { "ahmed6" ,"mohammed","shema",1415,95.25 };
// 	star[7] = { "ahmed7" ,"mohammed","menna",1135,95.25 };
// 	star[8] = { "ahmed8" ,"mohammed","faten",11512,95.25 };
// 	star[9] = { "ahmed9" ,"mohammed","mai",1152,95.25 };
// 	star[10] = { "ahmed10" ,"mohammed","safi",12215,945.25 };
// for (int i = 0; i < 9; i++)
// {
// 	cout << "===========================\n";
// 	cout << "the name is : " << star[i].name<<"\n the reader is : " <<star[i].reader<<" \n tha athor is :"<<star[i].athor << " \nthe page is : "<<star[i].page<<" \n the price is :"<<star[i].price << endl;
// 	cout << "===========================\n";
// }

// 	return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
//{
//	int x = 40;
//	int* ptr = &x;
//	cout << ptr << endl;
//	cout << *ptr << endl;
//	int* num = new int(20);
//	cout << num << endl;
//	cout << *num << endl;
//	return 0;
//}
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head = NULL;

void insertnode(int valu);
void display();

int main()
{
    insertnode(10);
    insertnode(4);
    insertnode(11);
    insertnode(17);
    insertnode(19);
    insertnode(40);
    insertnode(112);
    insertnode(178);

    display();
    return 0;
}
//!insert function
void insertnode(int valu)
{
    node *new_node, *last;
    new_node = new node;
    new_node->data = valu;
    if (head == 0)
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
};
//?diplay function
void display()
{

    node *currnt;
    if (head == NULL)
    {
        cout << "linked list empty :";
    }
    else
    {
        currnt = head;
        while (currnt != NULL)
        {
            cout << currnt->data << "\n";
            currnt = currnt->next;
        }
    }
}