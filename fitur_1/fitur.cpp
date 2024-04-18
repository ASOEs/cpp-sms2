#include <iostream>
#include <string>
using namespace std;

struct transaksi{
    int jumlah;
    string nama;
    transaksi* next;
};

transaksi* head = NULL;

void addTransaksi(int jumlah, string nama){
    transaksi* baru = new transaksi;
    baru->jumlah=jumlah;
    baru->nama=nama;
    baru->next=NULL;

    if (head == NULL){
        head = baru;
    }else{
        transaksi* temp = head;
        while(temp->next != NULL){
            temp = temp -> next;
        }
        temp->next=baru;
    }
}

void printTransaksi(){
    transaksi* temp = head;
    if (temp == NULL){
        cout << "Belum ada transaksi" << endl;
    }else{
        cout << "Riwayat transaksi: "<<endl;
        while(temp != NULL){
            cout << "Nama: " << temp->nama <<" Jumlah transaksi: " << temp->jumlah << endl;
            temp = temp->next;
        }
    }
}

int main(){
    char pilihanUser;
    int pilihan;
    string nama;
    int jumlah;

    cout << "Menu" << endl;
    cout << "1. Tambah transaksi" << endl;
    cout << "2. Riwayat transaksi" << endl;
    cout << "3. keluar" << endl;


    do{
        cout << "Masukan piliihan: "; cin >> pilihan;
        switch (pilihan){
            case 1:
                cout << "Nama: "; cin >> nama;
                cout << "Jumlah: "; cin >> jumlah;
                addTransaksi(jumlah,nama);
                break;
            case 2:
                printTransaksi();
                break;
            case 3:
                cout << "Terimakasih telah menggunakan program ini!" << endl;
                break;
            default:
                cout << "pilihan tidak valid" << endl;
        }
        cout <<"Apakah anda ingin melanjutkan? (y/n): ";cin >>pilihanUser;
    }while(pilihanUser == 'y' || pilihanUser == 'Y');
}