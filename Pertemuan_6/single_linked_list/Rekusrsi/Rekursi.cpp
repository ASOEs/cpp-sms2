#include <iostream>
using namespace std;

struct node 
{
    int bilangan;
    node *next;
};

int main(){
    struct node* head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    cout << head <<endl;
    
}
