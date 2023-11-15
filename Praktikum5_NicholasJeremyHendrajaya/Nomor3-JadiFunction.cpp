#include <iostream>

using namespace std;

 // Function untuk deret fibonacci
 void fibonacci(int jml){
     int a = 0, b = 1, Term;

     cout << "Berikut deret Fibonacci dari jumlah tersebut: ";

     for (int i = 1; i <= jml; ++i) {
        cout << a << " ";
        Term = a + b;
        a = b;
        b = Term;
     }

     cout << endl;
}

     int main () {
     int jml;

     cout << "PROGRAM TABEL FIBONACCI\n\n";

     cout << "Masukkan jumlah angka yang diinginkan: "; cin >> jml;
     cout << endl;

     // Memanggil fungsi Fibonacci
     fibonacci(jml);










    return 0;
}

// Untuk penjelasan tentang Fibonacci lebih lanjut silakan buka file pertemuan 4 nomor 3
