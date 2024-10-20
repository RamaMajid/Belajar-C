#include <stdio.h>
#include <stdbool.h>
#define NAME "Rifki Ramadany Majid"
#define TOKO "Coffee Town"

int main(){
	// Program Kasir
	printf("Program ini dibuat oleh %s\n",NAME);
	printf("----------------------------------------------------------------\n");
	
	printf("\tPROGRAM KASIR SEDERHANA\n");
	printf("----------------------------------------------------------------\n");
	
	// Tipe Data dan Variabel
	int barang;
	char belanja [10];
	bool angka;
	
	printf("\tSelamat Datang Di %s \n", TOKO);
	printf("----------------------------------------------------------------\n");
	printf("Silahkan Masukkan Nama Anda : ");
	scanf("%s", belanja);
	printf("Selamat Berbelanja %s\n", belanja);
	printf("1. Air Mineral\t : Rp. 3000 \n");
	printf("2. Coca Cola\t : Rp. 5000 \n");
	printf("3. Roti Abon\t : Rp. 6500 \n");
	printf("4. Keripik\t : Rp. 2000 \n");;
	scanf("%d", &barang);
	angka = barang;
	if (angka == 1 || 2 || 3 || 4){
		printf("True\n");
	}
	printf("Terimakasih Telah Berbelanja");
	return 0;
}