#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 1;
    cout << "enter number  ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // int value = i;
        for (int j = 1; j <=i; j++)
        {
            cout << i-j+1 << " ";
        }
        cout << "\n";
    }

    
//<*********************************8****************************************>
    // for (int i = 1; i <= n; i++)
    // {
    //     // int value = i;
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout << i-j+1 << " ";
    //     }
    //     cout << "\n";
    // }


//<*********************************7****************************************>
    // for (int i = 1; i <= n; i++)
    // {
    //     // int value = i;
    //     for (int j = i; j < 2*i; j++)
    //     {
    //         cout << j << " ";
            
    //     }
    //     cout << "\n";
    // }

//<*********************************6****************************************>
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout <<count<<" ";
    //         count++;
    //     }
    //     cout << "\n";
    // }

//<*********************************5****************************************>
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {

    //         cout <<i;
    //     }
    //     cout << "\n";
    // }

//<*********************************4****************************************>
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {

    //         cout <<"*" ;
    //     }
    //     cout << "\n";
    // }

//<*********************************3****************************************>
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {

    //         cout <<count<<" " ;
    //         count++;
    //     }
    //     cout << "\n";
    // }

//<*********************************2****************************************>
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {

    //         cout << n-j+1;
    //     }
    //     cout << "\n";
    // }

//<*********************************1****************************************>
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {

    //         cout << j;
    //     }
    //     cout << "\n";
    // }

    return 0;
}
