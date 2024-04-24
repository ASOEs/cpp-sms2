#include <iostream>
using namespace std;

int main(){

    cout << "belajar membuat array multidimensi" << endl;

    int a[2][2] = {1,2,3,4};
    int b[2][2] = {1,2,3,4};
    int c[2][2];

    for (int i=0; i<2;i++){
        for (int j=0;j<2;j++){
            c[i][j] = a[i][j] + b[i][j];
            // cout << c[i][j] <<endl;
        }
    }

    cout << "hasil dari penghitungan matriks" << endl;
    for (int i=0; i<2;i++){
        for (int j=0;j<2;j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }


}