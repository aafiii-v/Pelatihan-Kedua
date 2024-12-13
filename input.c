#include <stdio.h>
#include <stdlib.h>

void main (){
    char nama[100];
    int umur;
    char alamat[100];

    printf("Nama : ");
    gets(nama);
    printf("Usia : ");
    scanf("%d", &umur);
    printf("Alamat : ");
    getchar();
    gets(alamat);

    printf("\n\n");
    printf("Output : \n");
    printf("Nama : %s\n", nama);
    printf("Usia : %d\n", umur);
    printf("Alamat : %s\n", alamat);


    printf("\nini adalah testing");
}