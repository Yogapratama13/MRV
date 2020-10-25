#include <stdio.h>
#include <stdlib.h>

int main () {

int pil, pil1, pil2, pil3;
int barisa, koloma, barisb, kolomb, i, j, matrik1[10][10], matrik2[10][10], jumlah[10][10];

pil :
	printf ("\n1. Sistem Persamaan Linier");
	printf ("\n2. Determninan");
	printf ("\n3. Matriks Balikan");
	printf ("\n4. Keluar");
	printf ("\nMasukkan Pilihan : "); scanf("%d", &pil);
	
	switch (pil) {
		case 1 :
			printf ("\n======================================================================================================================");
			printf ("\nSistem Persamaan Linier\n");
			pil1 :
				printf ("\n1. Metode Eliminasi Gauss");
				printf ("\n2. Metode Eliminasi Gauss-Jordan");
				printf ("\n3. Metode Matriks Balikan");
				printf ("\n4. Kaidah Cramer");
				printf ("\nMasukkan Pilihan : "); scanf("%d", &pil1);
				switch (pil1) {
					case 1 :
						printf ("\n======================================================================================================================\n");
						printf ("Metode Eliminasi Gauss");
						printf("\nInput jumlah baris matrik A : "); scanf("%d", &barisa);
						printf("Input jumlah kolom matrik A : "); scanf("%d", &koloma);
							for (i = 0; i < barisa; i++){
      							for (j = 0; j < koloma; j++){
      							printf("Input Matriks A[%d][%d]: ",i+1,j+1);
  								scanf("%d",&matrik1[i][j]);
      					}
   					}
   						printf("\n Matrik A : \n");
   							for (i=0; i< barisa; i++){
    							for (j=0; j<koloma; j++){
    							printf("%3d", matrik1[i][j]);
    					}
    						printf("\n");
    						
   					}
   					barisb = barisa;
   					kolomb = 1;
							for (i = 0; i < barisb; i++){
      							for (j = 0; j < kolomb; j++){
      							printf("Input Matriks B[%d][%d]: ",i+1,j+1);
  								scanf("%d",&matrik2[i][j]);
      					}
   					}
   					printf("\n Matrik B : \n");
   							for (i=0; i< barisb; i++){
    							for (j=0; j<kolomb; j++){
    							printf("%3d", matrik2[i][j]);
    					}
    						printf("\n");
    						
   					}
   					//rumusnya
   						
						break;
					case 2 :
						printf ("Metode Eliminasi Gauss-Jordan");
						break;
					case 3 :
						printf ("Metode Matriks Balikan");
						break;
					case 4 :
						printf ("Kaidah Cramer");
						break;
				}
				break;
		case 2 :
			printf ("\n======================================================================================================================");
			printf ("\nDeterminan\n");
			pil2 :
				printf ("\n1. Metode Eliminasi Gauss");
				printf ("\n2. Metode Eliminasi Gauss-Jordan");
				printf ("\n3. Metode Matriks Balikan");
				printf ("\n4. Kaidah Cramer");
				printf ("\nMasukkan Pilihan : "); scanf("%d", &pil2);
				switch (pil2) {
					case 1 :
						printf ("Metode Eliminasi Gauss");
						break;
					case 2 :
						printf ("Metode Eliminasi Gauss-Jordan");
						break;
					case 3 :
						printf ("Metode Matriks Balikan");
						break;
					case 4 :
						printf ("Kaidah Cramer");
						break;
				}
				break;
		case 3 :
			printf ("\n======================================================================================================================");
			printf ("\nMatriks Balikan\n");
			pil3 :
				printf ("\n1. Metode Eliminasi Gauss");
				printf ("\n2. Metode Eliminasi Gauss-Jordan");
				printf ("\n3. Metode Matriks Balikan");
				printf ("\n4. Kaidah Cramer");
				printf ("\nMasukkan Pilihan : "); scanf("%d", &pil3);
				switch (pil3) {
					case 1 :
						printf ("Metode Eliminasi Gauss");
						break;
					case 2 :
						printf ("Metode Eliminasi Gauss-Jordan");
						break;
					case 3 :
						printf ("Metode Matriks Balikan");
						break;
					case 4 :
						printf ("Kaidah Cramer");
						break;
				}
				break;
		case 4 :
			printf ("\nTerima Kasih");
			system("exit");
			break;
		default :
			printf ("Mohon Maaf Pilihan Anda Tidak Ada, Silahkan Masukkan Kembali\n\n");
			printf ("======================================================================================================================");
			goto pil;
			break;
	}
}	
