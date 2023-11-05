#include <iostream>
using namespace std;
/* MEMBUAT FUNGSI LUAS DENGAN RETURN 
*/
int luas(int panjang, int lebar)
{

    return panjang * lebar;
}

int main()
{
    cout << "luas 1 " << luas(17, 9) << endl;
    cout << "luas 2 " << luas(21, 11) << endl;
    cout << "luas 3 " << luas(7, 3) << endl;

    return 0;
}
