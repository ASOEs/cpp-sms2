#include <iostream>
using namespace std;

const int ukuran = 5;
struct queue{
    int top;
    int isi[ukuran];
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

void insertQueue(int data){
    if (Isfull() == 1){
        cout<<"maaf, data tidak dapat ditambahkan karena antrian sudah penuh"<<endl;

    }else{
        q.isi[q.top] = data;
        cout << "data: " << q.isi[q.top] << " sudah masuk kedalam antrian" << endl;
        q.top++;
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
    insertQueue(1);
    insertQueue(2);
    insertQueue(3);
    insertQueue(4);
    insertQueue(5);
    insertQueue(6);
    displayQueue();
}