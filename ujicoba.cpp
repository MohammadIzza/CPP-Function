#include <iostream>
using namespace std;
// pingin membuat rumah 
int main()
{
   int i, n,j,k,l,m;
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
    for (l=1;l<=i;l++){
        for (l=1;l>=(i%2);l++){
            cout << " " ;
        }for (m=1;m>=(i%2+1); m++){
            cout << "*";
        }cout << endl;
    }
    return 0;
}
