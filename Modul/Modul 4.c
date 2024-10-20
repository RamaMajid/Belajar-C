#include <stdio.h>
#define NAMA "Rifki Ramadany Majid"

int main(){
	// Program Kasir Dengan Loop
	int harga = 0, jml_barang, pilihan;
	float total;
	
	printf("Program Oleh %s\n",NAMA);
	printf("================================================\n");
	printf("\t\tPILIHAN MENU\n");
	printf("================================================\n");
	printf("1. French Fries : Rp. 10000\n");
	printf("2. Hot Dog \t: Rp. 20000\n");
	printf("3. Pizza \t: Rp. 15000\n");
	printf("4. Hamburger \t: Rp. 30000\n");
	printf("5. Selesai\n");
	printf("================================================\n");
	
	// Penerapan Loop
	do{
	printf("\nSilahkan Pilih Yang Kamu Inginkan : ");
	scanf("%i",&pilihan);
		switch(pilihan){
			case 1 :
				printf("French Fries : Rp. 10000\n");
				harga = 10000;
				printf("Jumlah : ");
				scanf("%i",&jml_barang);
				total += harga * jml_barang;
				printf(": Rp. %i\n",harga * jml_barang);
				break;
			case 2 :
				printf("Hot Dog : Rp.20000\n");
				harga = 20000;
				printf("Jumlah : ");
				scanf("%i",&jml_barang);
				total += harga * jml_barang;
				printf(": Rp. %i\n",harga * jml_barang);
				break;
			case 3 :
				printf("Pizza : Rp. 15000\n");
				harga = 15000;
				printf("Jumlah : ");
				scanf("%i",&jml_barang);
				total += harga * jml_barang;
				printf(": Rp. %i\n",harga * jml_barang);
				break;
			case 4 :
				printf("Burger : Rp. 30000\n");
				harga = 30000;
				printf("Jumlah : ");
				scanf("%i",&jml_barang);
				total += harga * jml_barang;
				printf(": Rp. %i\n",harga * jml_barang);
				break;
			case 5 :
				printf("Total Belanja : Rp. %.f\n",total);
				break;
			default :
				printf("Pilihan Tidak Ada, Silahkan Pilih Dengan Benar");
				break;
		}
	}while(pilihan != 5);
	printf("Terimakasih Telah Berbelanja\n");
	printf("================================================");
	
	return 0;
}