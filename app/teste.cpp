#include<iostream>
#include<string>
#include<fstream>
#include<array>
using namespace std ;
int main()
{
array<string,100> fruits;
fstream task2("task2.docx",ios::in | ios::app);
for (int i = 0; i<=(fruits.size()-1); i++)
{
    task2>> fruits[i];
}
task2.close();
for (int k = 0; k < fruits.size(); k++)
{
    if (fruits[k]=="")
    {
        break;
    }
    
    cout<<fruits[k]<<endl;
}

cout<<"fresh fruts"<<endl;
return 0;
}