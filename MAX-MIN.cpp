//Program Bubble Sort MIN
//Nama 		: DR
//NPM		  : 
//Kelas		: 

#include<iostream>
using namespace std;

int main() {
    int A[7];
    int j, k, temp;

    cout << "Memasukan nilai pada elemen Array:" << endl;
    for(int C = 0; C < 7; C++){
        cout << "A[" << C << "] = "; 
        cin >> A[C];
    }

    cout << "\nNilai elemen Array sebelum diurutkan:" << endl;
    for(int C = 0; C < 7; C++){
        cout << "A[" << C << "] = " << A[C] << endl;
    }

    // Mengurutkan Elemen Array dengan metode MAX_MIN (Selection Sort) dari besar ke kecil
    for(j = 0; j < 6; j++){
        int jmaks = j;
        for(k = j + 1; k < 7; k++){
            if(A[k] > A[jmaks]){
                jmaks = k;
            }
        }
        temp = A[j];
        A[j] = A[jmaks];
        A[jmaks] = temp;
    }

    // Menampilkan nilai setelah diurutkan dari besar ke kecil
    cout << "\nNilai elemen Array sesudah diurutkan dari besar ke kecil:" << endl;
    for(int C = 0; C < 7; C++){
        cout << "A[" << C << "] = " << A[C] << endl;
    }

    return 0;
}

