#include	<stdio.h>

char npm[10], nama[50], alamat[50];
void garis()
{
	printf("----------------------------------------------\n");
}

void input()
{
	printf("Masukkan NPM Anda "); gets(npm);
	printf("Masukkan nama Anda "); gets(nama);
	printf("Masukkan alamat Anda "); gets(alamat);
}	

void identitas()
{
	printf("NPM Anda adalah %s\n", npm);
	printf("Nama Anda adalah %s\n", nama);
	printf("Alamat Anda adalah %s\n", alamat);
}

main()
{
	garis();
	input();
	garis();
	garis();
	identitas();
	garis();
}
