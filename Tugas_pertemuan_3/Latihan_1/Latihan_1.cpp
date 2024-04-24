#include <iostream>
using namespace std;

// membuat structure
struct mahasiswa{
    string nama_lengkap;
    string nim;
    int angkatan;
    string prodi;
    float ipk;
};



int main(){
    mahasiswa reguler;
    reguler.nama_lengkap = "Nadia";
    reguler.angkatan = 2020;
    reguler.prodi = "akutansi";

    mahasiswa beasiswa;
    beasiswa.nama_lengkap = "Rima";
    beasiswa.angkatan = 2021;
    beasiswa.prodi = "teknik industri";

    // menampilkan structure
    cout << reguler.nama_lengkap << " " << reguler.angkatan << reguler.prodi << endl;
    cout << beasiswa.nama_lengkap << " " << beasiswa.angkatan << beasiswa.prodi << endl;


}