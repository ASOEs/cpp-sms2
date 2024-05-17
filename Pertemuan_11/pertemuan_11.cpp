#include <iostream>
using namespace std;

const int ukuran = 5;
struct queue{
    int top;
    string isi[ukuran];
} q;

void createQueue()
{
    q.top = 0;
}

int isEmpty(){
    if (q.top == 0){
        return 1;
    }else{
        return 0;
    }
}

int Isfull(){
    if(q.top >= ukuran){
        return 1;
    }else{
        return 0;
    }
}

void insertQueue(string data){
    if (Isfull() == 1){
        cout<<"maaf, data tidak dapat ditambahkan karena antrian sudah penuh"<<endl;

    }else{
        q.isi[q.top] = data;
        cout << "data: " << q.isi[q.top] << " sudah masuk kedalam antrian" << endl;
        q.top++;
    }
}

void deleteQueue(){
    if (isEmpty() == 1){
        cout << "Maaf, tidak ada data yang dihapus karena antrian kosong"<<endl;
    }else{
        string pop = q.isi[0];
        cout << "Data "<<pop<< " Sudah keluar dari antrian" << endl;
        for (int i=1;i<q.top;i++){
            q.isi[i-1]=q.isi[i];
        }
        q.top--;
    }
}

void findQueue(string cari){
    string temp;
    int itemp;
    if (isEmpty()==1){
        cout << "Maaf pencarian data tidak dapat dilakukan karena antrian kosong"<<endl;
    }else{
        for (int i =1;i <= q.top;i++){
            if (cari == q.isi[i]){
                temp = cari;
                itemp = i;
            }
        }
        if (cari == temp){
            cout << "Data "<< cari<<" ditemukan pada posisi ke-"<<itemp<<"diantrian"<<endl;
        }else{
            cout <<"tidak ada data "<< cari << " yang ditemukan pada antrian"<<endl;
        }
    }
}


void displayQueue(){
    if (isEmpty()==0){
        cout << "Menampilkan isi antrian" <<endl;
        for (int i = 0;i < q.top;i++){
            cout <<"Data " << q.isi[i] << " berada diposisi ke-" << i << endl;
        }
    }else{
        cout << "maaf, tidak ada data dalam antrian" << endl;
    }
}

int main(){
    cout << "============="<<endl;
    insertQueue("1");
    insertQueue("2");
    // insertQueue();
    // insertQueue();
    // insertQueue();
    cout << "============="<<endl;
    displayQueue();
    cout << "============="<<endl;
    deleteQueue();
    cout << "============="<<endl;
    displayQueue();
    cout << "============="<<endl;
    findQueue("1");
}