#include <iostream>
using namespace std;
/* MEMBUAT OUPUT 
    1+2 = 3
    3+4 = 7
    5+6 = 11
    DENGAN LOOPING

*/
void loopjumlah()
{
    int n, i, j, k;
    cout << " masukkan banyak operasi penjumlahan" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << "+" << i + 1 << " = " << i + i + 1 << endl;
        }
    }

}
int main()
    {

        loopjumlah();
        return 0;
    }
    