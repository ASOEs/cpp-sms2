#include <iostream>
using namespace std;

int main(){

    int matriks[2][3];

    cout << "masukan nilai array untuk 2x3" << endl;
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            cout<< "masukan nilai untuk baris " << i+1<< " kolom " << j+1 << ":";
            cin >> matriks[i][j];
        }
    }

    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            cout << matriks[i][j] << " ";
        }
        cout<<endl;
    }
}