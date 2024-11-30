//Program Bubble Sort MAX
//Nama 		: DR
//NPM		  : 
//Kelas		: 

#include<iostream>
using namespace std;

int main() {
    int A[7];
    int j, k, temp;

    cout << "Memasukan nilai pada elemen Array:" << endl;
    for (int C = 0; C < 7; C++) {
        cout << "A[" << C << "] = "; 
        cin >> A[C];
    }

    cout << "\nNilai elemen Array sebelum diurutkan:" << endl;
    for (int C = 0; C < 7; C++) {
        cout << "A[" << C << "] = " << A[C] << endl;
    }

    // Mengurutkan Elemen Array dengan metode Gelembung (Bubble) dari besar ke kecil
    for (j = 0; j < 6; j++) {
        for (k = 0; k < 6 - j; k++) {
            if (A[k] < A[k + 1]) { // Mengubah kondisi agar terurut dari besar ke kecil
                temp = A[k];
                A[k] = A[k + 1];
                A[k + 1] = temp;
            }
        }
    }

    // Menampilkan nilai setelah diurutkan
    cout << "\nNilai elemen Array sesudah diurutkan:" << endl;
    for (int C = 0; C < 7; C++) {
        cout << "A[" << C << "] = " << A[C] << endl;
    }

    return 0;
}
