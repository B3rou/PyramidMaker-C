#include <stdio.h>

int row(int y); // ayri fonksiyon kullanarak yapmak istedim. Onceden fonksiyonu declare ediyoruz ki y degiskenini ve row fonksiyonunu kullanabilelim.

int main(void)
{
	int height; // birisi for dongusu icin olmak uzere 2 integer lazim
	int i;
	printf("Istediginiz Yuksekligi Giriniz:");
	scanf("%d", &height); // input aliyoruz
	
	for (i = 0; i < height; i++)
	{
		
		row(height - i); // ters piramit yapmak icin cikartarak veri transfer ediyoruz
		
	}
	getchar(); // Buffer temizligi
	getchar(); // konsolun kapanmasini engelliyoruz
}

int row(int y) // her satir icin 1 kere calisacak. for dongusu de satira hash(#) yazacak.
{
	int i; // tekrardan for dongusu icin integer gerekli
	for (i = 0; i < y; i++) 
	{
	  
	 	printf("#");
	}
	printf("\n"); //satiri atlayabilmek icin gerekli. For dongusunun icinde olmamasina ozen gosterin.
}
