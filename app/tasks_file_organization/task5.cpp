#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
struct person1 {
    string name ;
    int age;
};
int main()
{
    vector <string> person(100);
    fstream task4,task5;
    task4.open("person.txt",ios::in | ios::out |ios::app);
    for (int i = 0; i<100 ; i++)
    {
        task4>>person[i];
    }
    
    for (int i = 0; i <person.size() ; i++)
    {
        if (person[i]=="")
        {
            break;
        }
        
        cout<< person[i]<<endl;
    }
    
    return 0;
}