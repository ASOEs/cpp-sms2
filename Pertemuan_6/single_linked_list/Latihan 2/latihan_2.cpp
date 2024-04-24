#include <iostream>
using namespace std;

struct  Mahasiswa{
    string nama;
    string nim;
    string email;
    Mahasiswa *next;
};





//tambah awal mahasiswa
void tambah_di_awal(Mahasiswa*& head, const string& nim, const string& nama, const string& email){
    Mahasiswa* new_Mahasiswa = new Mahasiswa;
    new_Mahasiswa->nim = nim;
    new_Mahasiswa->nama= nama;
    new_Mahasiswa->email= email;
    new_Mahasiswa->next = head;
    head = new_Mahasiswa;
}

//menambah di tengah
void tambah_ditengah(Mahasiswa*& head, const string& nim, const string& nama, const string& email, int posisi){
    if (posisi <= 0){
        tambah_di_awal(head,nim,nama,email);
    }else{
        Mahasiswa* new_mahasiswa = new Mahasiswa;
        new_mahasiswa->nim=nim;
        new_mahasiswa->nama=nama;
        new_mahasiswa->email=email;

        Mahasiswa* current = head;
        for(int i =0;i < posisi - 1 && current != NULL; i++){
            current = current->next;
        }

        if (current != NULL){
            new_mahasiswa -> next = current-> next;
            current->next = new_mahasiswa;
        }else{
            cout << "Posisi tidak ditemukan" << endl;
        }
    }
}


//menambah diakhir
void tambah_diakhir(Mahasiswa*& head, const string& nim, const string& nama, const string& email){
    Mahasiswa* new_mahasiswa = new Mahasiswa;
    new_mahasiswa -> nim = nim;
    new_mahasiswa -> nama = nama;
    new_mahasiswa -> email = email;
    new_mahasiswa -> next = NULL;

    if (head == NULL){
        head = new_mahasiswa;
    }else{
        Mahasiswa* current = head;
        while (current->next != NULL){
            current = current -> next;
        }
        current -> next = new_mahasiswa;
    }
}



//menghapus di awal
void hapus_diawal(Mahasiswa*& head){
    if(head != NULL){
        Mahasiswa* temp = head;
        head = head->next;
        delete temp;
    }else{
        cout << "tidak ada node!" << endl;
    }
}

void hapus_ditengah(Mahasiswa*& head, int posisi){
    if (head != NULL){
        if (posisi <= 0){
            hapus_diawal(head);
        }else{
            Mahasiswa* current = head;
            Mahasiswa* sebelumnya = NULL;
            for (int i = 0; i < posisi && head != NULL; i++){
                sebelumnya = current;
                current = current -> next;
            }
        if (current != NULL){
            sebelumnya = current->next;
            delete current;
        }else{
            cout<<"posisi tidak ada yang di hapus" << endl;
        }
        }
    }else{
        cout << "linked list kososng" << endl;
    }
}

//hapus di akhir













//fungsi untuk mencetak list
void cetak_list(const Mahasiswa* head){
    const Mahasiswa* current = head;
    while(current != NULL){
        cout << "NIM: " << current->nim << " " << "Nama: " << current->nama << " " << "Email: " << current->email << endl;
        current = current->next;
    }
}















int main(){
    Mahasiswa* head = NULL;
    tambah_di_awal(head, "1234552","soe","ARDI0404");
    tambah_ditengah(head,"23015788", "Ardi","ardi",1);
    tambah_diakhir(head,"1238273","asoe","asoe.email,com");
    // hapus_diawal(head);
    hapus_ditengah(head,3);
    cetak_list(head);
}