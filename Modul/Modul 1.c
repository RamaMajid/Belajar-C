#include <stdio.h>
#define NAME "Rifki Ramadany Majid"
#define TOKO "Coffee Town"

int main(){
	// Program Kasir
	printf("Program ini dibuat oleh %s\n",NAME);
	printf("----------------------------------------------------------------\n");
	
	printf("\tPROGRAM KASIR SEDERHANA\n");
	printf("----------------------------------------------------------------\n");
	
	int barang;
	
	// Input dan Output
	printf("\tSelamat Datang Di %s \n", TOKO);
	printf("----------------------------------------------------------------\n");
	printf("1. Air Mineral\t : Rp. 3000 \n");
	printf("2. Coca Cola\t : Rp. 5000 \n");
	printf("3. Roti Abon\t : Rp. 6500 \n");
	printf("4. Keripik\t : Rp. 2000 \n");
	scanf("%d", &barang);
	printf("Terimakasih Telah Berbelanja");
	return 0;
}