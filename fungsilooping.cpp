#include <iostream>
using namespace std;
/* MEMBUAT SEGITIGA DENGAN ANGKA */
void loop()
{
    int i, n, j;
    cout << "masukkan banyak baris \n";
    cin >> n;
    cout << "---------------------- \n";
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
int main()
{
    loop();
    loop();
    return 0;
}