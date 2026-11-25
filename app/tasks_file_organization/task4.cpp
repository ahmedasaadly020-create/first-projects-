// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// struct person {
//     string name ;
//     int age;
// };
// int main()
// {
//     fstream task4;
//     task4.open("person.txt",ios::in | ios::out |ios::app);
//     person person;
//     int oper ;
//     string persons;
//     cout<<"1 ===> add person "<<endl;
//     cout<<"2 ===> off "<<endl;
//     while (1)
//     {
//         cout<<"enter operation ==> ";
//         cin>>oper;
//         switch (oper)
//         {
//         case 1:
//         int n;
//         cout<<"enter neumber of person ";
//         cin>>n;
//             for (int i = 1; i <= n; i++)
//             {
//                 cout<<"enter name person "<<i<<endl;
//                 cin>>person.name;
//                 cout<<"enter age person "<<i<<endl;
//                 cin>>person.age;
//                 task4<<person.name<<","<<person.age<<endl;
//             }
//             task4.close();

//             break;
//         case 2:
//         if (oper==2)
//         {
//             return 0;
//         }

//             break;
//         }
//     }

//     return 0;
// }
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
struct person1
{
    string name;
    int age;
};
int main()
{
    fstream task4;
    task4.open("person.txt", ios::in | ios::out | ios::app);
    person1 person;
    int n;
    cout << "enter neumber of person ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "enter name person " << i << endl;
        cin >> person.name;
        cout << "enter age person " << i << endl;
        cin >> person.age;
        task4 << person.name << "|" << person.age << endl;
    }
    task4.close();

    task4.open("person.txt", ios::in | ios::out | ios::app);
    vector<person1> persons;

    person1 p;

    while (getline(task4, p.name, '|'))
    {
        task4 >> p.age;

        task4.ignore();

        persons.push_back(p);
    }

    task4.close();

person1 youngest = persons[0];
person1 oldest = persons[0];
for (int i = 0; i < persons.size(); i++)
{
    if (persons[i].age < youngest.age)
    {
        youngest = persons[i];
    }

    if (persons[i].age > oldest.age)
    {
        oldest = persons[i];
    }
    
}

fstream result;
result.open("result.txt",ios::in |ios::out);
result << "Youngest Person:" << endl;
result << "Name: " << youngest.name << endl;
result << "Age: " << youngest.age << endl;

result << "==============================" << endl;

result << "Oldest Person:" << endl;
result << "Name: " << oldest.name << endl;
result << "Age: " << oldest.age << endl;

result.close();
    return 0;
}
