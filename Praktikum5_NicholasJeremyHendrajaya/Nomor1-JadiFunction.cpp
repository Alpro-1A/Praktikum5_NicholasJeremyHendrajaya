#include <iostream>

using namespace std;

// Function buat menampilkan dan ngitung jumlah bilangan ganjil sampai batas tertentu
void bilganjil(int batas, int &jmlGanjil) {
    cout << "Bilangan Ganjil: ";
    for (int i = 0; i <= batas; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            jmlGanjil += i;
        }
    }
    cout << endl;
}

// Function buat menampilkan dan ngitung jumlah bilangan genap sampai batas tertentu
void bilgenap(int batas, int &jmlGenap) {
    cout << "Bilangan Genap: ";
    for (int i = 0; i <= batas; i += 2) {
        cout << i << " ";
        jmlGenap += i;
    }
    cout << endl;
}

// Function buat menampilkan dan ngitung jumlah bilangan prima sampai batas tertentu
void bilprima(int batas, int &jmlPrima) {
    cout << "Bilangan Prima: ";
    for (int i = 2; i <= batas; i++) {
        int j;
        for (j = 2; j * j <= i && i % j != 0; j++) {
        }

        if (j * j > i) {
            cout << i << " ";
            jmlPrima += i;
        }
    }
    cout << endl;
}

// Function buat menampilkan faktor ganjil
void faktorganjil(int jmlGanjil) {
    cout << "Faktor-faktor dari penjumlahan bilangan ganjil adalah: ";
    for (int i = 1; i <= jmlGanjil; i++) {
        if (jmlGanjil % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Function buat menampilkan faktor genap
void faktorgenap(int jmlGenap) {
    cout << "Faktor-faktor dari penjumlahan bilangan genap adalah: ";
    for (int i = 1; i <= jmlGenap; i++) {
        if (jmlGenap % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Function buat menampilkan faktor prima
void faktorprima(int jmlPrima) {
    cout << "Faktor-faktor dari penjumlahan bilangan prima adalah: ";
    for (int i = 1; i <= jmlPrima; i++) {
        if (jmlPrima % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Saatnya masuk ke output
int main() {
    int batas;
    int jmlGanjil = 0, jmlGenap = 0, jmlPrima = 0;

    cout << "[ Program Bilangan Ganjil, Genap, dan Prima ]" << endl;
    cout << "Masukkan batas akhir: ";
    cin >> batas;

    // Memanggil function tadi buat menampilkan hasil tadi
    bilganjil(batas, jmlGanjil);
    bilgenap(batas, jmlGenap);
    bilprima(batas, jmlPrima);

    cout << "Jumlah bilangan ganjil: " << jmlGanjil << endl;
    cout << "Jumlah bilangan genap: " << jmlGenap << endl;
    cout << "Jumlah bilangan Prima: " << jmlPrima << endl;

    // Memanggil function tadi buat menampilkan hasil faktor tadi
    faktorganjil(jmlGanjil);
    faktorgenap(jmlGenap);
    faktorprima(jmlPrima);

    return 0;
}
