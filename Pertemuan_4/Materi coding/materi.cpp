#include <iostream>
using namespace std;

//deklarasi pointer di bagi menjadi 2 yaitu:
//deference operator (&) untuk mendapatkan alamat variabel
//reference operator (*) untuk mengakses variabel melalui pointer



int main(){
    int angka1 = 5, angka2 = 7;
    int *ptr;
    ptr = &angka1;
    *ptr = 10;
    ptr = &angka2;
    *ptr = 20;
    cout << "Nilai 1 adalah: " << angka1 << " dan nilai 2 adalah: " << angka2 << endl;
    cout << "memori nilai 1: " << &angka1 << endl; //cara penggunaan pointer deference operator (&)
};

