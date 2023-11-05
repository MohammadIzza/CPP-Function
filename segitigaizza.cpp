#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "masukkan banyak baris segitiga \n";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j < i)
            {
                cout << " ";
            }
            else if (j >= j)
            {
                cout << "*";
            }
        }
        cout << endl;
    }   

    return 0;
}
