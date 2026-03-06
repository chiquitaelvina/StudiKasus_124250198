#include <iostream>
using namespace std;

void bubbleSort(string array[], int n){  // fungsi bubble sort 
	for(int i= 0; i<n-1; i++){ 				
		for(int j=0; j< n-i-1; j++){		// perulangan untuk membandingkan
			if (array[j] > array[j+1]){		// jika array[j] lebih besar dari array selanjutnya
				string temp = array[j]; 	// untuk menukar posisi
				array[j] = array [j+1];		
				array [j+1]= temp;			
				}
			}
		}
 }
 
 int tengah (string array[], int low, int high) { // fungsi untuk menentukan posisi pivot quick sort
	 string pivot = array[high];				//pivot diambil dari data terakhir
	 int i = low - 1;							
	 for (int j = low; j< high; j++){			
		 if(array [i]> pivot){					
			 i++;
			 swap (array[i], array[j]);			//menukar nilai array
	 }
 }
 swap (array [i+1], array [high]);				//menempatkan pivot pada posisi yang benar 
 return i+1;									
}
 void quickSort(string array[], int low, int high){ //fungsi untuk quick sort 
 if (low< high) {									
 int ti = tengah(array, low, high); 				// mencari posisi pivot
 quickSort(array, low, ti-1);						
 quickSort(array, ti+1, high);						
	}
 }

void tampilData(string array[], int n){			// fungsi untuk menampilkan data mahasiswa 
	for (int i = 0; i<n; i++) {				
	cout << i+1 << "." << array[i] <<endl; 		
	}
}
 
 int main () { 
	 int n;
	 cout << "DAFTAR NAMA MAHASISWA" <<endl; 
	 
	 cout << "Masukkan jumlah mahasiswa: "; 	  
	 cin >> n;									
	 cin.ignore();								//membersihkan buffer setelah cin
	 
	 string nama [n];							
	 
	 cout << "Masukkan Daftar Nama Mashasiswa: " << endl; 
	 for (int i = 0; i<n; i++) { 							
		 cout << "Nama ke-"<< i+1 << ":";					// menampilkan data mahasiswa
		 getline (cin, nama[i]);							
	 }
	 
	 string bubble[n];										// string untuk hasil bubble sort
	 for (int i=0; i<n; i++) {								// perulangan untuk menyalin data nama
		 bubble[i] = nama[i];								
	 }
	 bubbleSort(bubble, n);									//memanggil untuk menjalankan bubble sort
	 
	 string quick[n];										// array untuk hasil quick sort
	 for(int i=0; i<n; i++) { 								
		 quick[i] = nama[i]; 								
	 }
		 
		quickSort(quick, 0, n-1);							//memanggil fungsi quick sort untuk menjalankan
		cout << endl;										
	 cout << " Daftar nama setelah di-sort (Bubble Sorting):" << endl; 
	 tampilData(bubble, n);												// fungsi untuk menampilkan data bubble sort 
	 
	 cout << "Daftar nama setelah di-sort (Quick Sort): " <<endl;		
	 tampilData(quick, n);												// fungsi untuk menampilkan data quick sort 
	 
	 return 0;
	 
	 
		 	 
}
