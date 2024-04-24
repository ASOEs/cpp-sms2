#include <iostream>
using namespace std;

int main() {
    int a;
    int *x;

    cout << "-----Nilai 1-----" << endl;
    cout << "Nilai 1: "; cin >> a;
    x = &a;
    cout << "Nilai 1 adalah: " << a <<  endl;
    cout << "letak nilai pada memori: " << x << endl;
}