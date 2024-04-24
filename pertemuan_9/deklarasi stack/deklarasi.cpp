#include <iostream>
using namespace std;

//deklarasi variabel stack
const int kapasitas = 5; //menunjuk ukuran stack
struct stack{
    int top; //menyatakan kondisi stack jika berisi atau tidak
    int temp[kapasitas]; //menyimpan elemen stack
} stack; //deklarasi variabel stack


//create stack
void create_stack(){
    stack.top = -1; //menyatakan bahwa stack nya belum masuk ke dalam kotak
}

//mengecek apakah stacknya kosong atau tidak
int isEmpty(){
    if(stack.top == -1){
        return 1;
    }else{
        return 0;
    }
}


//mengecek apakah stacknya kosong atau tidak
int isFull(){
    if (stack.top == kapasitas - 1){
        return 1;
    }else{
        return 0;
    }
}

//fungsi push untuk menyimpan
void push(int data){
    if (isFull() == 1){ //pengecekan stack sudah penuh atau belum
        cout << "Maaf, stack sudah penuh"<< endl;
    } else{
        stack.top++; //menaikan posisi top keatas
        stack.temp[stack.top]=data; //menyisipkan elemen baru ke posisi top yang baru
        cout << "Data " << stack.temp[stack.top] << " Berhasil masuk kedalam stack" << endl;
    }
}

//menampilkan isi
void display(){
    if (isEmpty() == 0){//pengecekan stack kosong atau tidak
        cout << "Menampilkan isi stack: " << endl;
        for (int i = stack.top; i >= 0; i--){//looping index stack 
            cout << "Data index stack ke-" << i+1 << " adalah " << stack.temp[i] << endl;
        }
        cout << endl;
    } else{
        cout << "maaf, tidak ada data pada stack" << endl;
    }
}




int main(){
    create_stack();
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    cout << endl;
    display();
}