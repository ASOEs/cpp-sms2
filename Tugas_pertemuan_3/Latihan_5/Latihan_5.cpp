#include <iostream>
using namespace std;

struct mahasiswa{
    string nama_mahasiswa;
    string nim;
    int angkatan;
    string prodi;
};

struct mata_kuliah{
    mahasiswa Mahasiswa;
    string nama_matkul;
    string kode_matkul;
};

int main(){
    mata_kuliah mk;
    mk.nama_matkul = "Struktur data dan algoritma";
    mk.kode_matkul = "RL105";
    
    cout << "Masukan Nama: "; cin >> mk.Mahasiswa.nama_mahasiswa;
    cout << "Masukan NIM: "; cin >> mk.Mahasiswa.nim;
    cout << "Masukan Prodi: "; cin >> mk.Mahasiswa.prodi;
    cout << "Masukan angkatan: "; cin >> mk.Mahasiswa.angkatan;
    cout << endl;


    cout << "---------DATA MAHASISWA-----"<< endl;
    cout << "Nama: " << mk.Mahasiswa.nama_mahasiswa << endl;
    cout << "NIM: " << mk.Mahasiswa.nim << endl;
    cout << "Prodi: " << mk.Mahasiswa.prodi << endl;
    cout << "Angkatan: " << mk.Mahasiswa.angkatan << endl;
    cout << "Nama Matkul: " << mk.nama_matkul << endl;
    cout << "Nama Matkul: " << mk.kode_matkul << endl;
    cout << endl;
}

