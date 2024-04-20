#include <iostream>
#include <string>
using namespace std;

struct transaksi{
    string jumlah;
    transaksi* next;
};

transaksi* head = NULL;

void addTransaksi(string jumlah){
    transaksi* baru = new transaksi;
    baru->jumlah=jumlah;
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
            cout <<" Jumlah transaksi: " << temp->jumlah << endl;
            temp = temp->next;
        }
    }
}

int main(){
    char pilihanUser;
    int pilihan;
    string jumlah;

    cout << "Menu" << endl;
    cout << "1. Setor tunai" << endl;
    cout << "2. Riwayat transaksi" << endl;



    do{
        cout << "Masukan piliihan: "; cin >> pilihan;
        switch (pilihan){
            case 1:
                cout << "Jumlah: "; cin >> jumlah;
                addTransaksi(jumlah);
                break;
            case 2:
                printTransaksi();
                break;
            default:
                cout << "pilihan tidak valid" << endl;
        }
        cout <<"Apakah anda ingin melanjutkan? (y/n): ";cin >>pilihanUser;
    }while(pilihanUser == 'y' || pilihanUser == 'Y');
    cout << "Terimakasih" << endl;
}