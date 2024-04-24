#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

node *head;
node *tail;

bool isEmpty(){
    if (head==NULL)
        return true;
    return false;
}

void insertFirst(int nilai){
    node *new_node;
    new_node = new node;
    new_node -> data = nilai;
    if (isEmpty()){
        head = new_node;
        head -> next = NULL;
    }
    else{
        new_node -> next = head;
        head = new_node;
    }
}

void cetakList(){
    if(!isEmpty()){
        node *current;
        current = head;
        while(current != NULL){
            cout << current << ": "<<current->data << endl;
            current = current->next;
        }
    }
}


int main(){
    head = NULL;
    insertFirst(1);
    insertFirst(2);
    cetakList();

}