/*
    Program Bulat Positif Negatif
    Ket : Program menentukan bilangan bulat posisitf atau negatif
    By  : Yudha Rizqia Grafer
    Tgl : 14 oktober 2022

*/

#include <iostream>

using namespace std;

int main()
{
    //kamus
    int bilangan;

    //algoritma
    cout << "Masukkan Bilangan : ";
    cin >> bilangan;
    if ( bilangan > 0 ){
        cout << bilangan << " adalah bilangan positif";
    }else if (bilangan < 0){
    cout << bilangan << " adalah bilangan negatif";
    }else{
    cout << bilangan << " adalah 0";
    }
    return 0;
}
