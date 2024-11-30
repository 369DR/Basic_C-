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

    int U = 6;
    for(j = 0; j < 6; j++){
        int jmaks = 0;
        for(k = 1; k <= U; k++){
            if(A[k] > A[jmaks]){
                jmaks = k;
            }
        }
        temp = A[U];
        A[U] = A[jmaks];
        A[jmaks] = temp;
        U--;
    }

    cout << "\nNilai elemen Array sesudah diurutkan:" << endl;
    for(int C = 0; C < 7; C++){
        cout << "A[" << C << "] = " << A[C] << endl;
    }

    return 0;
}

