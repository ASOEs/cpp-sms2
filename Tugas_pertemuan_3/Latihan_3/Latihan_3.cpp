#include <iostream>
using namespace std;

struct karyawan{
    string nama;
    int usia;
    int penghasilan;
    int total;
};

int main(){
    karyawan manager;
    float tunjanngan;

    cout << "Manager"<< endl;
    cout << "Nama Manager; "; cin >> manager.nama;
    cout << "Usia Manager: "; cin >> manager.usia;
    cout << "Penghasilan: "; cin >> manager.penghasilan;
    cout << "Tunjangan: "; cin >> tunjanngan;
    cout << endl;

    manager.total = manager.penghasilan + tunjanngan;

    cout << "----------CLS---------" << endl;
    cout << "Display Manager" << endl;
    cout << "Nama Manager: " << manager.nama << endl;
    cout << "Usia: " << manager.usia << endl;
    cout << "Penghasilan: " << manager.penghasilan << endl;
    cout << "Tunjangan: " << tunjanngan << endl;
    cout << "Total Penghasilan: " << manager.total << endl;
    cout << endl;

    return 0;
}