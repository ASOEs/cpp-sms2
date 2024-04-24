#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
};

node* head;
node* tail;
node* current = NULL;

bool isEmpty(){
    if(head == NULL)
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

void tambah_ditengah(node *next_node, int nilai){
    if(next_node == NULL){
        cout << "nilai sebelumnya tidak boleh NULL";
        return;
    }
    node *new_node = new node;
    new_node->data = nilai;

    if (isEmpty()){
        new_node -> prev -> next = new_node;
    }else{
        new_node-> prev = next_node->prev;
        next_node-> prev = new_node;
        new_node->next =next_node;
        head->next = new_node;
    }
}

