#include <iostream>
using namespace std;
/* MEMBUAT OUTPUT 
1+2 = 3
2+3 = 5
3+4 = 7
4+5 = 9
DENGAN LOOPING*/
void loopjumlah()
{
    int n, i, j, k;
    cout << " masukkan banyak operasi penjumlahan" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << i << "+" << i + 1 << " = " << i + i + 1 << endl;
    }
}

int main()
{

    loopjumlah();
    return 0;
}