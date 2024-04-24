#include <iostream>
using namespace std;

struct mata_kuliah{
    string nama;
    string NIM;
    int tugas_1;
    int tugas_2;
    int tugas_3;
    int nilai_akhir;
};

int main(){
    mata_kuliah mahasiswa;

    cout << "Masukan nama: "; cin >> mahasiswa.nama;
    cout << "Masukan NIM: "; cin >> mahasiswa.NIM;
    cout << "Masukan Nilai Tugas 1: "; cin >> mahasiswa.tugas_1;
    cout << "Masukan Nilai Tugas 2: "; cin >> mahasiswa.tugas_2;
    cout << "Masukan Nilai Tugas 3: "; cin >> mahasiswa.tugas_3;
    cout << endl;

    mahasiswa.nilai_akhir = (mahasiswa.tugas_1 + mahasiswa.tugas_2 + mahasiswa.tugas_3) / 3;
    
    string keterangan;
    if (mahasiswa.nilai_akhir > 75)
    {
        keterangan = "Lulus";
    }
    else{
        keterangan = "Belum Lulus";
    }

    cout << "----------NILAI AKHIR----------"<< endl;
    cout << "Nama Mahasiswa: " << mahasiswa.nama << endl;
    cout << "NIM: " << mahasiswa.NIM << endl;
    cout << "Nilai akhir: " << mahasiswa.nilai_akhir<< endl;
    cout << "Status: " << keterangan << endl;

}