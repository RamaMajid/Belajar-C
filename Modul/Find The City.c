#include <stdio.h>
#include <string.h>

#define JUMLAH_KOTA 10
#define MAX_KOTA 50

	int main()
	{
		char kota[JUMLAH_KOTA][MAX_KOTA];
		char Temukan_Kota[MAX_KOTA];
		int num_kota = 0;
		
		FILE*file = fopen("C:\\Users\\Rifki\\Documents\\Falcon\\KOTA.txt","r");
		if(file == NULL){
			printf("file tidak dapat dibuka!\n");
			return 1;
		}
		
		while(fgets(kota[num_kota], MAX_KOTA, file)!= NULL && num_kota < MAX_KOTA){
			kota[num_kota][strcspn(kota[num_kota],"\n")] = '\0';
			num_kota++;
		}
		fclose(file);
		
		printf("masukan nama kota yang ingin dicari:");
		fgets(Temukan_Kota, MAX_KOTA, stdin);
		Temukan_Kota[strcspn(Temukan_Kota,"\n")] = '\0';
		
		int found = 0;
		int i;
		for(i = 0;i < num_kota; i++){
			if(strcmp(kota[i], Temukan_Kota)== 0){
				printf("berhasil ditemukan!\n");
				found = 1;
				break;
			}
		}
		
		if(!found){
			printf("kota tidak ditemukan!\n");
		}
		
		return 0;
		
	}