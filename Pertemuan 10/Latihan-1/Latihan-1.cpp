#include <iostream>
using namespace std;

const int kapasitas =5;

struct stack{
    int top;
    int temp[kapasitas];
}stack;

void create_stack(){
    stack.top = -1;
}

int isEmpty(){
    if (stack.top == -1){
        return 1;
    }else{
        return 0;
    }
}

int isFull(){
    if (stack.top == kapasitas - 1){
        return 1;
    }else{
        return 0;
    }
}

void push(){
    int data;
    cout << "Silahkan masukan data anda: ";cin>>data;
    if (isFull()==1){
        cout <<"Maaf, data stack sudah penuh" << endl;
    }else{
        stack.top++;
        stack.temp[stack.top] = data;
        cout << "Data " << stack.temp[stack.top]<<"Berhasil masuk kedalam stack"<<endl;
    }
}

void display(){
    if(isEmpty()==0){
        cout << "Menampilkan isi stack: " << endl;
        for (int i = stack.top; i >= 0; i--){
            cout << "Data index stack ke-"<<i<<" Adalah "<< stack.temp[i]<<endl;
        }
        cout << endl;
    }else{
        cout << "Maaf, tidak ada data pada stack" << endl;
    }
}

void pop(){
    if (isEmpty() == 0){
        stack.top--;
        cout << "Data sudah berhasil dikeluarkan dari stack"<<endl;
    }else{
        cout << "Maaf, Stack kosong"<<endl;
    }
}

void clear_stack(){
    stack.top = -1;
    cout << "stack sudah dikosongkan"<<endl;
}

void find_stack(){
    int data;
    int tmp,itmp;
    cout << "Masukan data yang ingin anda cari: "; cin >> data;
    if(isEmpty()==1){
        cout << "Tidak ada data yang bisa dicari, karena stack kosong"<<endl;
    }else{
        for (int i = stack.top; i >= 0; i--)
            if (data == stack.temp[i]){
                tmp = data;
                itmp = i;
            }
        if (data == tmp){
            cout << "data " << data <<" Ditemukan di index ke- "<<itmp<<endl;
        }else{
            cout <<"tidak ada data "<< data << "ditemukan pada stack" << endl;
        }
    }

}

int main(){
    create_stack();
    char pilihan;
    do
    {
        push();
        // display();
        
        cout << "Apakah anda ingin memasukan data kembali?(Y/n) ";cin>>pilihan;
        system("cls");
    } while (pilihan == 'Y'||pilihan=='y');
    cout << "Apakah anda ingin menghapus data?(Y/n) ";cin>>pilihan;
    if (pilihan == 'Y'||pilihan =='y'){
        pop();
    }
    find_stack();
    cout << "============================"<<endl;
    display();
    cout << "apakah anda ingin menghapus seluruh isi stack?(Y/n)"; cin>>pilihan;
    if (pilihan == 'Y'||pilihan == 'y' ){
        clear_stack();
    }
    
    
}