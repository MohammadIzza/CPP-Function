#include <iostream>
using namespace std;
 
/* bentuk segitiganya
 *
 **
 ***
 ****
 *****
 */
void segitiga1()
{
    int i, j, n;
    cout << "masukkan banyak baris segitiga" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*  bentuk segitiganya
    ******
    *****
    ***
    **
    *

*/
void segitiga2()
{
    int i, j, n;
    cout << "masukkan banyak baris segitiga \n";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*  bentuk segitiganya
    *****
     ****
      ***
       **
        *
 */
void segitiga3()
{
    int i, j, k, n;
    cout << "masukkan banyak baris segitiga \n";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {cout << " ";
        }for (k=n;k>=i;k--){
            cout << "*";
        }
        cout << endl;
    }
}
/* bentuk segitiga 
        *
       **
      ***
     ****
    *****   
*/
void segitiga4(){
    int i,n,j,k;
    cout << "masukkan banyak baris segitiga "<< endl;
    cin>> n;
    for (i=1;i<=n;i++){
        for (j=n;j>i;j--){
            cout << " ";
        } for (k=1;k<=i;k++){
            cout << "*";
        }
        cout << endl;
    }
}

/* bentuk segitiga 
      *   
     ***
    *****
   ******* 
  *********
*/
void segitiga5(){
    int i, n,j,k;
    cout << "masukkan banyak baris segitiga " << endl;
    cin >> n;

    for (i=1;i<=n;i++){
        for (j=n;j>=i;j--){
            cout << " ";
        }for (k=1;k<=(2*i-1);k++){      // polanya yaitu 1 2 3 4 5
            cout << "*";                // menjadi       1 3 5 7 9   berarti rumus ke -n nya yaitu= (2*i)-1
        }
        cout << endl;
    }


}

/* bentuk segitiga 
    *********
     *******
      *****
       ***
        *
*/
void segitiga6 (){
    int i, n,j,k;
    cout << "masukkan banyak baris segitiga " << endl;
    cin >> n;

    for (i=n;i>=1;i--){
        for (j=n ; j>=i;j--){
            cout << " ";
        } for (k=1;k<=(2*i -1) ;k++){       // polanya yaitu 5 4 3 2 1  
            cout << "*";                    // menjadi      9 7 5 3 1  lalu pola ke- n menjadi =(2*i) -1
        }
    cout << endl;
    }
}
int main()
{
    int a;
    cout << "masukkan operasi yang diinginkan" << endl;
    cin >> a;
    if (a == 1)
    {
        segitiga1();
    }
    else if (a == 2)
    {
        segitiga2();
    }
    else if (a == 3)
    {
        segitiga3();
    } 
    else if (a == 4)
    {
        segitiga4();
    }
    else if (a == 5)
    {
        segitiga5();
    }
    else if (a == 6)
    {
        segitiga6();
    }
    return 0;
}