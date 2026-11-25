#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
ifstream file ("task.text");
if (!file.is_open())
cout<<"error opening the file";
else
cout<< file.tellg()<<endl;
string line;
file.seekg(2);
getline(file,line);
cout<<line;

    return 0;
}