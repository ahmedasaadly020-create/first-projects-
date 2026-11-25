#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream text2;
    text2.open("text.txt", ios::out | ios::app);
    int grade;
    int id;
    string student;
    int n;
    cout << "enter number the student >>>> ";
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        cout << "student : " << i << endl;
        cout << "enter student >>>";
        getline(cin, student);
        cout << "enter ID >>> ";
        cin >> id;
        cin.ignore();
        cout << "enter your grade >>> ";
        cin >> grade;
        cin.ignore();
        text2 << "student : " << i << endl;
        text2 << "student : " << student << endl;
        text2 << "ID : " << id << endl;
        text2 << "grade : " << grade << endl;
        text2 << "=====================" << endl;
    }
    text2.close();
    return 0;
}