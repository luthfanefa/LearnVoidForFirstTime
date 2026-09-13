#include <iostream>

using namespace std;

void passbyvalue(int b) {
    b += 2;
    cout << "ditambah dua jadi "<< b << endl;
}

void passbyref(int &b) {
    b += 2;
    cout << "ditambah dua jadi "<< b << endl;
}


int main () {

    int a;
    cout << "masukan angka : " ;
    cin >> a;
    passbyvalue(a);
    cout << "angka yang kamu masukan sebelumnya : " << a << endl ;
    passbyref(a);
    cout << "angka yang kamu masukan sebelumnya : " << a << endl ;
    
    return 0 ;
}