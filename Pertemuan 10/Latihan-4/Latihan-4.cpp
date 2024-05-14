#include <iostream>
#include <stack>
using namespace std;

// Fungsi untuk memindahkan bola ke stack lain
void moveBalls(stack<int> &source, stack<int> &destination, int color) {
    while(!source.empty() && source.top() == color) {
        destination.push(source.top());
        source.pop();
    }
}

int main() {
    stack<int> source, destination;
    // Misalkan warna bola direpresentasikan sebagai angka: 1 = hijau, 2 = ungu, 3 = merah, 4 = biru

    // Menambahkan bola ke stack source dalam urutan acak
    source.push(1); // hijau
    source.push(2); // merah
    source.push(3); // biru
    source.push(1); // hijau
    source.push(2); // merah
    source.push(3); // biru
    source.push(1); // hijau
    source.push(2); // merah
    source.push(3); // biru
    // dan seterusnya...

    // Memindahkan bola ke stack destination berdasarkan warna
    moveBalls(source, destination, 1); // Memindahkan bola hijau
    moveBalls(source, destination, 2); // Memindahkan bola merah
    moveBalls(source, destination, 3); // Memindahkan bola biru

    // Menampilkan bola di stack destination
    while(!destination.empty()) {
        cout << destination.top() << " ";
        destination.pop();
        cin.get();
    }

    return 0;
}
