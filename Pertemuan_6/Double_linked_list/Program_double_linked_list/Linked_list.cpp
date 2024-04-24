#include <iostream>
#include <malloc.h>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
};

int main(){
    //inisialisasi node
    node *head;
    node *one = NULL;
    node *two = NULL;
    node *three = NULL;
    node *current = NULL;

    //alokasi node
    one = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));

    //assign value
    one -> data = 1;
    two -> data = 2;
    three -> data = 3;

    //connect node
    one-> next = two;
    one -> prev =NULL;

    two -> next = three;
    two -> prev = one;

    three -> next = NULL;
    three -> prev = two;

    head = one;

    //tampilkan data head

    current = head;
    cout << current -> data << endl;
    while (current -> next !=NULL){
        current = current -> next;
        cout << current -> data << endl;
    }

}