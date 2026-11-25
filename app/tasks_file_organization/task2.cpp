#include <iostream>
#include <fstream>
#include <string>
#include <array>
using namespace std;
int main()
{
    fstream mytask;
    int n;
    int num;
    string fruit;
    array<string, 1000> fruits;
    cout << "1 ===> write " << endl;
    cout << "2 ===> read " << endl;
    cout << "3 ===> delete " << endl;
    cout << "4 ===>  stop program " << endl;
    while (true)
    {
        cout << "enter your operation ===> ";
        cin >> n;
        if (n == 1)
        {
            mytask.open("mytask.txt", ios::in | ios::out | ios::app);
            cout << "enter  number of fruits ====>";
            cin >> num;
            for (int i = 1; i <= num; i++)
            {
                cout << "enter  the fruits " << i << " ====>  ";
                cin >> fruit;
                mytask << fruit << endl;
            }
            mytask.close();
        }
        else if (n == 2)
        {
            mytask.open("mytask.txt", ios::in | ios::out | ios::app);
            for (int r = 0; r < fruits.size(); r++)
            {
                mytask >> fruits[r];
            }
            for (int l = 0; l < fruits.size(); l++)
            {
                if (mytask.tellg() == 0)
                {
                    cout << "There are no fruits yet" << endl;
                }
                if (fruits[l] == "")
                {
                    break;
                }
                cout << fruits[l] << endl;
            }
            cout << "fresh fruts" << endl;
            mytask.close();
        }
        else if (n == 3)
        {
            mytask.open("mytask.txt", ios::in | ios::out | ios::trunc);
            cout << "Folder is now empty!" << endl;
            cout << "Please restart the program to use it again." << endl;
            mytask.close();
        }
        else if (n == 4)
        {
            if (n == 4)
            {
                cout << "the program is off";
                return 0;
            }
        }
        else
        {
            cout << "invalid option";
            return 0;
        }
    }

    return 0;
}