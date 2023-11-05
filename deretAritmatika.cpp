#include <iostream>
using namespace std;

/* menulis program dengan outputan (deret artimatika)
 1,4,3,8,5,12,7,16,9,20 */

void aritmatika()
{
    int i, n, a, b;
    cout << "masukkkan banyak baris " << endl;
    cin >> n;   
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i * 2;
        }
        else
        {
            cout << i;
        }
        if (i < n)
        {
            cout << ",";
        }
    }
}

int main()
{
    aritmatika();
    return 0;
}