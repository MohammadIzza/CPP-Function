#include <iostream>
using namespace std;

/* MEMBUAT FUNGSI MENGHITUNG LUAS*/
void luas(int panjang, int lebar)
{
    int luas = panjang * lebar;
    cout << "Luas perseGi panjang dengan panjang " << panjang << " dan lebar " << lebar << " adalah " << luas << endl;
}

int main()
{
    luas(17, 9);
    luas(21, 11);
    luas(7, 3);

    return 0;
}