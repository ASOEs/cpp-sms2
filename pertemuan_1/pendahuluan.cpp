/*
pertemuan ke 3 , struktur data tanggal 23 februari 2024 pengenalan c++ dan array
*/



// digunakan untuk menambahkan
#include <iostream>
using namespace std;

int main(){
    cout << "hello world" << endl;

    // ARRAY
    cout << "------Array------" << endl;

    // deklarasi array --> index

    string nama[2] = {"ahmad", "soe"};
    cout << "nama saya adalah:" << nama[0] <<endl;

    for (int i = 0; i <= 2; i++)
    {
        cout << "index ke-" << i << "=" << nama[i] << endl;
    }

    int array[2][2];
    array[0][0] = 20;
    array[0][1] = 15;
    array[1][0] = 17;
    array[1][1] = 33;

    cout << "elemen dari array adalah" << endl;
    cout << array[0][0] << " " << array[0][1] << endl;
    cout << array[1][0] << " " << array[1][1] << endl;

}