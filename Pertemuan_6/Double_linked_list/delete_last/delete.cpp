#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node *prev;
};

node *head;
node *tail;
node *current = NULL;

bool isEmpty(){
    if (head == NULL)
        return true;
    return false;
}

void insert_last(int nilai){
    node *new_node = new node;
    new_node -> data = nilai;
    new_node -> next = NULL;

    if (isEmpty()){
        new_node->prev = NULL;
        head = new_node;
    }else{
        current = head;
        while (current-> next != NULL){
            current = current->next;
        }
        current -> next = new_node;
        new_node -> prev = current;
    }
}

void delete_last(){
    node *hapus, *current;
    if(isEmpty()){
        head = NULL;
    }else if(head->next == NULL){
        hapus = head;
        head = NULL;
        tail = NULL;
        delete hapus;
    }else{
        current = head;
        while(current -> next->next!=NULL){
            current = current -> next;
        }
        delete current->next;
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
    head = NULL;
    insert_last(1);
    insert_last(3);
    insert_last(5);
    cetak_list();
    cout << "sebelum remove first" << endl;
    delete_last();
    cetak_list();
}