#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

node *head;
node *tail;


bool isEmpty(){
    if(head==NULL)
        return true;
    return false;
}

void insertLast(int nilai){
    node *new_node, *current;
    new_node = new node;
    new_node->data = nilai;
    new_node->next = NULL;

    if(isEmpty()){
        head = new_node;
        head -> next =  NULL;
    }
    else{
        current=head;
        while(current->next!=NULL){
            current = current->next;
        }
        current->next = new_node;
    }
}


void cetakList(){
    if(!isEmpty()){
        node *current;
        current = head;
        while(current != NULL){
            cout << current -> data << endl;
            current = current-> next;
        }
    }
}


int main(){
    insertLast(1);
    insertLast(2);
    insertLast(3);
    insertLast(4);
    cetakList();
}