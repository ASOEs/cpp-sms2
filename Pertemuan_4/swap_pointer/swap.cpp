#include <iostream>
using namespace std;

int main(){
    int *a, *b;
    int x = 5, y =10;

    cout << "----------***---------" << endl;
    cout << "sebelum di SWAP" << endl;
    cout << "Nilai X: " << x << endl;
    cout << "Nilai Y: " << y << endl;
    cout << "Alamat X: " << &x << endl;
    cout << "Almatan Y: " << &y << endl;
    cout << endl;

    cout << "----------***---------" << endl;
    swap(x,y);
    cout << "setelah di SWAP" << endl;
    cout << "Nilai X: " << x << endl;
    cout << "Nilai Y: " << y << endl;
    cout << "Alamat X: " << &x << endl;
    cout << "Almatan Y: " << &y << endl;
}