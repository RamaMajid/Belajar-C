#include <stdio.h>
#define NAME "Rifki Ramadany Majid"
#define TOKO "Coffee Town"

int main(){
	printf("Program ini dibuat oleh %s\n",NAME);
	printf("----------------------------------------------------------------\n");
	
	printf("\tPROGRAM KASIR SEDERHANA\n");
	printf("----------------------------------------------------------------\n");
	
	int harga, barang, jml_barang, total;
	char pilihan;
	
	printf("\tSelamat Datang Di %s \n", TOKO);
	printf("----------------------------------------------------------------\n");
	printf("1. Air Mineral\t : Rp. 3000 \n");
	printf("2. Coca Cola\t : Rp. 5000 \n");
	printf("3. Roti Abon\t : Rp. 6500 \n");
	printf("4. Keripik\t : Rp. 2000 \n");
	
	
	printf("\nApakah Ada Yang Ingin Kamu Beli ? " "(Y/T) : ");
	scanf("%c",&pilihan);
	if(pilihan == 'Y'){
		printf("Selamat Berbelanja Di %s",TOKO);
	}else if(pilihan == 'T'){
		printf("Terimakasih Telah Mengunjungi %s",TOKO);
		return 0;
	}else{
		printf("Salah, restart program deh");
		return 0;
	}
	printf("\nSilahkan Pilih : ");
	scanf("%d",&barang);
	// Penerapan Condition
	switch(barang){
		case 1 :
		printf("Air Mineral\n");
		harga = 3000;
		printf("Jumlah Item : ");
		scanf("%d",&jml_barang);
		total = harga * jml_barang;
		printf("Total Pembayaran : Rp. %d",total);
		printf("\nTerimakasih Telah Berbelanja Di %s\n",TOKO);
		break;
			case 2 :
		printf("Coca Cola\n");
		harga = 5000;
		printf("Jumlah Item : ");
		scanf("%d",&jml_barang);
		total = harga * jml_barang;
		printf("Total Pembayaran : Rp. %d",total);
		printf("\nTerimakasih Telah Berbelanja Di %s\n",TOKO);
		break;
			case 3 :
		printf("Roti Abon\n");
		harga = 6500;
		printf("Jumlah Item : ");
		scanf("%d",&jml_barang);
		total = harga * jml_barang;
		printf("Total Pembayaran : Rp. %d",total);
		printf("\nTerimakasih Telah Berbelanja Di %s\n",TOKO);
		break;
			case 4 :
		printf("Keripik\n");
		harga = 2000;
		printf("Jumlah Item : ");
		scanf("%d",&jml_barang);
		total = harga * jml_barang;
		printf("Total Pembayaran : Rp. %d",total);
		printf("\nTerimakasih Telah Berbelanja Di %s\n",TOKO);
		break;
	 default:
        {
            printf("Pilihan Kamu Tidak Ada !!!");
        }
	}
	return 0;
}