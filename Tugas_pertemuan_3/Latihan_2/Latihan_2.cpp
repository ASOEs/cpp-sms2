#include <iostream>
using namespace std;

struct mahasiswa{
    string nama_lengkap;
    int angkatan;
    string prodi;
};

int main(){

    mahasiswa reguler, beasiswa;
    cout << "Data mahasiswa Reguler" << endl;
    cout << "Masukan nama mahasiwa reguler: "; cin >> reguler.nama_lengkap;
    cout << "Masukan angkatan mahasiwa reguler: "; cin >> reguler.angkatan;
    cout << "Masukan Prodi studi mahasiwa Reguler: "; cin >> reguler.prodi;
    cout << "\n";

    cout << "Data mahasiswa Beasiswa"<< endl;
    cout << "Masukan nama mahasiswa Beasiswa: "; cin >> beasiswa.nama_lengkap;
    cout << "Masukan angkatan mahasiswa beasiswa: "; cin >> beasiswa.angkatan;
    cout << "Masukan Prodi studi mahasiswa beasiswa: "; cin >> beasiswa.prodi;
    cout << endl;

    cout << "---------CLS---------" << endl;
    cout << "Display Mahasiswa reguler" << endl;
    cout << "Mahasiswa reguler" << endl;
    cout << "Nama mahasiswa: " << reguler.nama_lengkap << endl;
    cout << "Angkatan: " << reguler.angkatan << endl;
    cout << "Program Studi: " << reguler.prodi << endl;
    cout << endl;

    cout << "---------CLS---------" << endl;
    cout << "Display Mahasiswa Beasiswa" << endl;
    cout << "Mahasiswa Beasiswa" << endl;
    cout << "Nama mahasiswa: " << beasiswa.nama_lengkap << endl;
    cout << "Angkatan: " << beasiswa.angkatan << endl;
    cout << "Program Studi: " << beasiswa.prodi << endl;
    cout << endl;


}