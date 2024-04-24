#include <iostream>
#include <malloc.h>

using namespace std;

struct node{
    string nama;
    string nim;
    string email;
    node* next;
};

node *head;
node *tail;

bool isEmpty(){
    if (head == NULL)
        return true;
    return false;
}


//fungsi tambah diawal
void tambah_diawal(string nama, string nim, string email){
    node* new_node;
    new_node = new node;
    new_node ->nama=nama;
    new_node -> nim = nim;
    new_node -> email = email;

    if (isEmpty()){
        head = new_node;
        head -> next = NULL;
    }else{
        new_node -> next = head;
        head = new_node;

    }

}

//tambah di terngah
void tambah_ditengah(string nama, string nim, string email,int posisi){
    node* new_node = new node;
    new_node->nama = nama;
    new_node -> nim =nim;
    new_node -> email= email;
    new_node->next = NULL;

    if (head == NULL || posisi ==0){
        new_node->next = head;
        head = new_node;
        return;
    }

    node* current = head;
    int counter = 1;
    while(current -> next != NULL && counter < posisi){
        current = current -> next;
        counter++;
    }

    if (counter != posisi){
        cout << "posisi tidak valid" << endl;
        return;
    }

    new_node->next = current -> next;
    current -> next = new_node;

}

void remove_first(){
    if (head == NULL){
        cout << "Lingked list kosong, tidak ada yang bisa di hapus" << endl;
        return;
    }

    node* temp = head;
    head = head -> next;
    delete temp;
}



void cetak_list(){
    if (!isEmpty()){
        node *current;
        current = head;
        while(current != NULL){
            cout << "NAMA: " << current -> nama << " " << "NIM: " << current -> nim<< " " << "EMAIL: " << current -> email << endl;
            current = current->next;
        }
    }else{
            cout << "List Kosong" << endl;
        }
}



int main(){
    
    tambah_diawal("ahmad","2301508","ardi0909");
    tambah_diawal("ahmad","2301508","ardi");
    tambah_ditengah("soe","2310578","soewerdiahdi",1);
    cetak_list();

    cout << "after Remove: " << endl;

    remove_first();
    cetak_list();
}