#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of line ===> ";
    cin >> n;
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <=n-i; j++)
    //     {
    //         cout<<" ";
    //     }
    //         for (int t = 1; t <= (2*i-1); t++)
    //         {
    //             cout<<"*";
    //         }

    //     cout<<"\n";
    // }
    
    for (int i = 1; i <= n; i++)
    {
        cout<<"\n";
        for (int l = 1; l <=n; l++)
        {
            cout<<"*";
        }

    }

    return 0;
}
