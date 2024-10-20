#include <stdio.h>

int main(){
	int harga = 0, jml_barang, pilihan, bayar, i;
	float total, kembalian;
	char obat[4][8] = {"Panadol", "Procold", "Paramex", "Bodrex"};
	int price [4] = {12000, 10000, 14000, 15000};
	
	printf("SELAMAT DATANG DI APOTIK KIMIA KARMA\n");
	printf("------------------------------------------------------------------------\n");
	printf("Sedia : \n");
	for(i =0 ; i < 4; i++){
		printf("%d. %s : %d\n", i+1, obat[i], price[i]);
	}
	printf("------------------------------------------------------------------------\n");
	
	do{
	printf("Silahkan Pilih Yang Kamu Inginkan : ");
	scanf("%i",&pilihan);
		switch(pilihan){
			case 1 :
				printf("%s\n",obat[0]);
				harga = 12000;
				printf("Jumlah : ");
				scanf("%i",&jml_barang);
				total += harga * jml_barang;
				printf(": Rp. %i\n",harga * jml_barang);
				break;
			case 2 :
				printf("%s\n",obat[1]);
				harga = 10000;
				printf("Jumlah : ");
				scanf("%i",&jml_barang);
				total += harga * jml_barang;
				printf(": Rp. %i\n",harga * jml_barang);
				break;
			case 3 :
				printf("%s\n",obat[2]);
				harga = 14000;
				printf("Jumlah : ");
				scanf("%i",&jml_barang);
				total += harga * jml_barang;
				printf(": Rp. %i\n",harga * jml_barang);
				break;
			case 4 :
				printf("%s\n",obat[3]);
				harga = 15000;
				printf("Jumlah : ");
				scanf("%i",&jml_barang);
				total += harga * jml_barang;
				printf(": Rp. %i\n",harga * jml_barang);
				break;
			case 5 :
				printf("Total Belanja : Rp. %.f\n",total);
				break;
			default :
				printf("Pilihan Tidak Ada, Silahkan Pilih Dengan Benar\n");
				break;
		}
	}while(pilihan != 5);
		printf("Masukkan Uang : Rp. ");
		scanf("%i",&bayar);
  		kembalian = bayar - total;
		if(bayar >= total){
		printf("Jumlah Kembali : Rp. %.f\n",kembalian);
		}else{
		printf("Mohon Maaf Uang Anda Tidak Cukup\n");
		}
	printf("\nTERIMAKASIH TELAH BERBELANJA DI APOTIK KIMIA KARMA\n");
	printf("------------------------------------------------------------------------");
	return 0;
}