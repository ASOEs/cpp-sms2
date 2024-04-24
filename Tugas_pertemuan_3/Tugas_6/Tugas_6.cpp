// Nama : Achmad Soewardi
// Kelas : RPL 2A
// NIM: 2301508


#include <iostream>
using namespace std;

struct ticket
{
    string nama;
    int jumlah_tiket;
    int discount;
    int total_bonus;
    int total_tiket;
    int total_harga;
};


int main(){

    ticket nama;
    ticket jumtiket;
    ticket diskon;
    ticket totaltik;
    ticket totalhar;
    ticket totalbon;

    // memasukan nama dan jumlah tiket
    cout << "----- PEMESANAN TIKET FILM GUARDIAN OF THE GALAXY VOL. 2-----" << endl;
    cout << "Masukan Nama                   : "; cin >> nama.nama;
    cout << "Masukan Jumlah tiket           : "; cin >> jumtiket.jumlah_tiket;
    cout << endl;

    // pengkondisian jika tidak ada tiket yang di beli
    if (jumtiket.jumlah_tiket == 0){
        cout << "tidak ada tiket yang di beli" << endl;
        return 0;
    }


    //total bonnus
    if (jumtiket.jumlah_tiket == 10){
        totalbon.total_bonus = 1;
    }else{
        totalbon.total_bonus =  0;
    }

    // pengkondisian diskon dan bonus tiket
    if (jumtiket.jumlah_tiket == 10){
        diskon.discount = 0;
        totaltik.total_tiket = jumtiket.jumlah_tiket + totalbon.total_bonus;
        totalhar.total_harga = 10 * 50000;

    } else if (jumtiket.jumlah_tiket > 5){
        diskon.discount = 10;
        totaltik.total_tiket = jumtiket.jumlah_tiket;
        totalhar.total_harga = totaltik.total_tiket * 50000 * 0.9; //diskon 10%

    }else{
        diskon.discount = 0;
        totaltik.total_tiket = jumtiket.jumlah_tiket;
        totalhar.total_harga = totaltik.total_tiket * 50000; //tanpa invoice
    }

    // tampilan invoice
    cout << "----------INVOICE----------" << endl;
    cout << " The Guardian of Galaxy Vol. 2" << endl;
    cout << "         Rp. 50.000           " << endl;
    cout << "---------------------------" << endl;
    cout << "Nama pelanggan: " << nama.nama << endl;
    cout << "Jumlah tiket: " << jumtiket.jumlah_tiket << endl;
    cout << "Diskon: " << diskon.discount << "%" << endl;
    cout << "Jumlah tiket keseluruhan: " << totaltik.total_tiket << endl;
    cout << "Total  Bonus: " << totalbon.total_bonus << endl;
    cout << "Total harga: " << totalhar.total_harga << endl;
    cout << "---------TERIMAKASIH--------" << endl;
    cout << endl;
    

    
}