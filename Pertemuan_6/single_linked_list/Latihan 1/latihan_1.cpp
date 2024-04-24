#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;

};


int main(){
    node *head = NULL;
    node *second = NULL;
    node *third = NULL;
    node *fourth = NULL;
    node *fifth = NULL;
    node *six = NULL;
    node *current = NULL;


    //mengalokasi
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    

    head->data = 2;
    head->next = second;
    second->data= 4;
    second->next= third;
    third->data= 6;
    third->next= fourth;
    fourth->data=8;
    fourth->next= fifth;
    fifth->data= 10;
    fifth->next = NULL;

    current = head;
    while(current != NULL){
        cout << current <<":"<<current->data << endl;
        current = current->next;
    }




}