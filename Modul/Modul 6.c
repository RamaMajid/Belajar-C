#include <stdio.h>

void kasir(int total){
	int bayar;
	float kembalian;
	printf("Masukkan Uang \t: Rp. ");
	scanf("%i", &bayar);
	kembalian = bayar - total;
	if(bayar >= total){
	printf("Jumlah Kembali \t: Rp. %.f\n", kembalian);
	}else{
	printf("Mohon Maaf Uang Anda Tidak Cukup\n");
	}
}
int main(){
	int harga = 0, jml_barang, pilihan, i;
	float total;
	char bunga[4][9] = {"Tulip", "Lily", "Daffodil", "Daisy"};
	int price [4] = {42000, 36000, 37000, 40000};
	
	printf("SELAMAT DATANG DI FLOWER BLOOM\n");
	printf("------------------------------------------------------------------------\n");
	printf("Sedia : \n");
	for(i =0 ; i < 4; i++){
		printf("%d. %s \t: Rp. %d\n", i+1, bunga[i], price[i]);
	}
	printf("5. SELESAI\n");
	printf("------------------------------------------------------------------------\n");
	
	do{
	printf("Silahkan Pilih Yang Kamu Inginkan : ");
	scanf("%i",&pilihan);
		switch(pilihan){
			case 1 :
				printf("%s \t: Rp. %d\n",bunga[0], price[0]);
				harga = 42000;
				printf("Jumlah \t: ");
				scanf("%i",&jml_barang);
				total += harga * jml_barang;
				printf("Total \t: Rp. %i\n",harga * jml_barang);
				break;
			case 2 :
				printf("%s \t: Rp. %d\n",bunga[1], price[1]);
				harga = 36000;
				printf("Jumlah \t: ");
				scanf("%i",&jml_barang);
				total += harga * jml_barang;
				printf("Total \t: Rp. %i\n",harga * jml_barang);
				break;
			case 3 :
				printf("%s : Rp. %d\n",bunga[2], price[2]);
				harga = 37000;
				printf("Jumlah \t : ");
				scanf("%i",&jml_barang);
				total += harga * jml_barang;
				printf("Total \t : Rp. %i\n",harga * jml_barang);
				break;
			case 4 :
				printf("%s \t: Rp. %d\n",bunga[3], price[3]);
				harga = 40000;
				printf("Jumlah \t: ");
				scanf("%i",&jml_barang);
				total += harga * jml_barang;
				printf("Total \t: Rp. %i\n",harga * jml_barang);
				break;
			case 5 :
				printf("Total Belanja \t: Rp. %.f\n",total);
				break;
			default :
				printf("Pilihan Tidak Ada, Silahkan Pilih Dengan Benar\n");
				break;
		}
	}while(pilihan != 5);
	kasir(total);
	printf("\nTERIMAKASIH TELAH BERBELANJA DI FLOWER BLOOM\n");
	printf("------------------------------------------------------------------------");
	return 0;
}