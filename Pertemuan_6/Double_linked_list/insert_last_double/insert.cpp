#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
};

node *head;
node *tail;
node *current= NULL;

bool isEmpty(){
    if(head == NULL)
        return true;
    return false;
}

void tambahkan_akhir(int nilai){
    node* new_node;
    new_node = new node;
    new_node -> data = nilai;
    new_node -> next = NULL;

    if (isEmpty()){
        new_node->prev = NULL;
        head = new_node;
    }else{
        current = head;
        while (current->next != NULL){
            current = current->next;
        }
        current->next =new_node;
        new_node->prev =current;
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
    tambahkan_akhir(1);
    tambahkan_akhir(3);
    tambahkan_akhir(5);
    tambahkan_akhir(7);
    cetak_list();
}