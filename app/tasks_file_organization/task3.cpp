#include <iostream>
#include <fstream>
#include <string>
#include <array>
using namespace std;
int main()
{
    string word;
    fstream in;
    in.open("welcome.txt", ios::out | ios::in);
    cout << in.tellp() << endl;
    in << "hello everybody ";
    cout << in.tellp() << endl;
    in.seekp(11, ios::beg);
    cout << in.tellp() << endl;
    in << "one ";
    in.seekg(0,ios::beg);
    getline(in,word);
    in.close();
    cout<<word;
    return 0;
}
