#include <iostream>
#include <cstring>
using namespace std;

const int kapasitas = 20;

struct stack{
    int top;
    char temp[kapasitas];
}stack;

void create_stack(){
    stack.top =-1;
}

int isEmpty(){
    if(stack.top == -1){
        return 1;
    }else{
        return 0;
    }
}

int isFull(){
    if(stack.top == kapasitas -1){
        return 1;
    }else{
        return 0;
    }
}

void push(char data){
    if (isFull() == 1){
        cout << "Maaf stack sudah penuh"<<endl;
    }else{
        stack.top++;
        stack.temp[stack.top] = data;
    }
}

char pop(){
    if(isEmpty()==0){
        char data = stack.temp[stack.top];
        stack.top--;
        return data;
    }else{
        return '\0';
    }
}

void reverse_kata(const char *sentences){
    int length = strlen(sentences);
    //push karakter ke stack
    for (int i = 0; i < length; i++){
        push(sentences[i]);
    }

    //pop karakter dari stack untuk membalikan kalimat
    cout << "Kalimat Terbalik: ";
    for (int i = 0; i < length;i++){
        cout << pop();
    }
    cout << endl;
}

int main(){
    create_stack();
    char sentences[100];
    cout << "Masukan kalimat (Maksimal 20 karakter): ";
    cin.getline(sentences,100);

    reverse_kata(sentences);
    
}