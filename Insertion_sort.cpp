#include <iostream>
using namespace std;

int arr[20];  //membuat array dengan panjang data 20
int n;       // membuat variabel inputan n

void input (){  //procedure input
    while (true){
        cout << "Masukkan Jumlah Data Paada Array : ";
        cin >> n;

        if (n <= 20){
            break;
        }
        else{
            cout << "nArray Tidak Boleh Lebih Dari 20\n";
        }
    }

}

