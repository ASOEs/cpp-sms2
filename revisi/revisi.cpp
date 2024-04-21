#include <iostream>
using namespace std;



struct node{
    string username;
    string password;
    int Jumlah;
    node* next;
};

//fungsi login dan register

node* head = NULL;
void addAccount(string username, string password){
    if(password.length() < 8){
        cout << "Password harus memiliki minimal 8 karakter.\n";
        return;
    }
    node* newNode = new node;
    newNode -> username = username;
    newNode -> password = password;
    newNode -> Jumlah = 0;
    newNode -> next = NULL;
    head = newNode;
}

//login
bool chekLogin(string username, string password){
    node* temp = head;
    while (temp != NULL){
        if(temp->username == username && temp->password == password)
            return true;
        temp = temp->next;
    }
    return false;
}

//melihan account
void displayAccount(){
    node* temp = head;
    while(temp != NULL){
        cout << " username: "<< temp->username << "\n password: " << temp->password << "\n Jumlah dana: " << 0 <<endl;
        temp = temp -> next;
    }
}

//setor tunai
void setorTunai(int masukan){
    node* temp = head;
    cout << "sebelum setor tunai: " << temp ->Jumlah << endl;
    temp->Jumlah += masukan;
    cout << "setelah setor tunai: "<< temp-> Jumlah << endl;
}

void checkAccount(string username){
    node* temp = head;
    while (temp != NULL){
        if(temp -> username == username){
            cout << " Username: " << temp -> username << "\n Saldo: " << temp->Jumlah << endl;
            return; 
        }
        temp = temp -> next;
    }
    cout << "akun tidak ditemukan." << endl;
}



void menu(){
    cout <<"===================="<<endl;
    cout <<"|  Selamat datang  |"<<endl;
    cout<<"====================="<<endl;

    cout << "1. Register" <<endl;
    cout << "2. login" <<endl;
    cout << "3. keluar" << endl;
}

void menu2(){
    cout << "1. setor tunai" <<endl;
    cout << "2. cek akun" <<endl;
    cout << "3. keluar" <<endl;
}


//gerbang utama
int main(){
    int pilihan;
    string username;
    string password;
    char pilihanUser;
    int masukan_uang;


   
    while (true){
        menu();
        cout << "Masukan Pilihan: "; cin >> pilihan;
        if (pilihan == 1){
            cout << "Masukan username anda: "; cin >> username;
            cout << "Masukan Password anda: ";cin >> password;
            addAccount(username,password);
            system("cls");
        }else if(pilihan == 2){
            bool login;
            cout << "Masukan username: "; cin >> username;
            cout << "Masukan password: "; cin >> password;
            login = chekLogin(username,password);
            system("cls");

            if (login == true){
                while (true){
                    menu2();
                    cout << "Masukan pilihan anda: "; cin >> pilihan;
                    if (pilihan == 1){
                        cout << "||Setor Tunai||"<<endl;
                        cout << "Masukan nominal: "; cin >> masukan_uang;
                        setorTunai(masukan_uang);
                    } else if(pilihan == 2){
                        cout << "||Profile Akun||" << endl;
                        checkAccount(username);
                    }else if(pilihan == 3){
                        break;
                    }
                }
            }
        }else if(pilihan == 3){
            break;
        }
    }
}