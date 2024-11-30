//Program Bubble Sort MIN
//Nama 		: DR
//NPM		  : -
//Kelas		: -

#include<iostream>
using namespace std;

int main(){
	
	int A[7];
	int j, k, C, temp;
	
	cout<<" Memasukan nilai pada elemen Array : "<<endl;
	for(C=0; C<7; C++){
		cout<<"A["<<C<<"] = "; cin>>A[C];
	}
	
	cout<<"\n Nilai elemen Array sebelum diurutkan : "<<endl;
	for(C=0; C<7; C++){
		cout<<"A["<<C<<"] = "<<A[C]<<endl;
	}
	
	//Mengurutkan Elemen Array dengan metode Gelembung (Bubble)
	for (j=0;j<7;j++){
		for(k=7;k>0;k--){
			if(A[k]<A[k-1]){
				temp = A[k];
				A[k]=A[k-1];
				A[k-1]=temp;
			}
		}
	}
	
	//Menampilkan nilai setelah di urutkan
	cout<<"\n Nilai elemen Array Sesudah diurutkan : "<<endl;
	for(C=1; C<8; C++){
		cout<<"A["<<C<<"] = "<<A[C]<<endl;
	}
	
	
	return 0;
	
}
