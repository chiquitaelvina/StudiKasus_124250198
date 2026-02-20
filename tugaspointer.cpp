#include <iostream>
using namespace std;

int main(){
	
	int urut[3] = {10,20,30}; // array int dengan panjang 3
	int u = 3;                // jumlah index
	int *ptr = urut;          // pointer menunjuk alamat
	
	cout << " nilai array "; // menunjukkan nilai array yg akan dihitung 
	for (int i=0; i<u; i++) {  //perulangan 
		cout << *(ptr + i) << ",";   // menampilkan menggunakan pointer
	}
	
	int maks = *ptr; //inialisasi maksimum
	int min = *ptr;  //inialisasi minimum
	for (int i=0; i<u; i++) { //perulangan
		if (*(ptr + i) > maks){ //jika nilai lebih besar 
			maks = * (ptr + i); //perolehan nilai maks
		}
		if (*(ptr + i) < min) { //jika nilai lebih kecil
			min = *(ptr + i); //perolehan nilai maksimum
		}
	}
	int jumlah = 0; //inisialisasi jumlah
	    for (int i = 0; i<u; i++) { // perulangan
			jumlah += *(ptr + i); // penjumlahan
		}
		int rerata = jumlah / u; //rata-rata nilai
		
		cout << endl; //memberi jarak
		cout << " nilai maksimum: " << maks << endl; //output nilai maks
		cout << " nilai minimum: " << min << endl; //output nilai maks
		cout << " jumlah: " << jumlah << endl; //output jumlah
		cout << " rata-rata: " << rerata << endl; //output nilai rata rata
		
	}
	
	
