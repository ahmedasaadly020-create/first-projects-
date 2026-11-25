#include <iostream>
#include <string>
#include <fstream>
#include <array>
using namespace std;
int main()
{
    fstream task3;
    task3.open("task3.text", ios::in | ios::out | ios::app);
    array<string, 100> fruit;
    int n;
    int num;
    string fruits;
    cout << "1 ===> write " << endl;
    cout << "2 ===> read " << endl;
    cout << "3 ===>  stop program " << endl;
    while (n < 3)
    {
        cout << "enter your operation ===> ";
        cin >> n;
        if (n==1)
        {
            cout << "enter  number of fruits ====>";
            cin >> num;
            task3.open("task3.text", ios::in | ios::out | ios::app);
            for (int i = 1; i <= num; i++)
            {
                cout << "enter  the fruits " << i << " ====>  ";
                cin >> fruits;
                task3<<"ahmed";
            }
            task3.close();
        
        }
        else if (n==2)
        {
                    
            task3.open("task3.text", ios::in | ios::out | ios::app);
            for (int l = 0; l <= (fruit.size() - 1); l++)
            {
                task3 >> fruit[l];
            }
            for (int k = 0; k < fruit.size(); k++)
            {
                if (fruit[k] == "")
                {
                    break;
                }
                cout << fruit[k] << endl;
            }
            cout << "fresh fruts" << endl;
        }
        else if(n==3)
        {
            
        
            if (n == 3)
            {
                cout<<"the program is off";
                return 0;
            }
        }else{
            cout << " invalid option";
            return 0;
            break;
        }
        }


    return 0;
}
