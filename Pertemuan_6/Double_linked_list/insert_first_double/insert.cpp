#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
};

node* head;
node* tail;

bool isEmpty(){
    if (head == NULL)
        return true;
    return false;
}

void tambahkan_diawal(int nilai){
    node* new_node = new node;
    new_node -> data = nilai;

    if(isEmpty()){
        head = new_node;
        head-> next = NULL;
    }else{
        new_node -> next = head;
        new_node -> prev = NULL;
        head = new_node;
    }
}

void cetak_list(){
    if (!isEmpty()){
        node* current;
        current = head;
        while (current != NULL){
            cout << current -> data << endl;
            current = current -> next;
        }
    }
}

int main(){
    tambahkan_diawal(1);
    tambahkan_diawal(3);
    tambahkan_diawal(5);
    tambahkan_diawal(7);
    cetak_list();
}