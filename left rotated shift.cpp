#include<stdio.h>
//Al�nan say�y� kullan�c�n�n istedi�i say�ya g�re kayd�r�p left rotated shift yapan kod
int binary(int x){
	//say�y� ikili say� sistemine �evirip yazan kod kullan�c�n�n sonucu daha rahat g�rmesi ad�na
	int a=x;
	int b[32];
	for(int i=0;i<32;i++){
		b[32-i]=a%2;
		a=a/2;
		
	}
	for(int i=31;i>=0;i--){
		if(b[i]==NULL){
			b[i]=0;
		}
		printf("%d.",b[32-i]);
		if((32-i)%8==0){
			printf(" ");
		} 
	}
	return b[0];
	
}
void kaydirma(int x,int y,int z){
	//kayd�rma ve left rotated shift i�lemi i�in kontrol eden kod
	if(y==1){
		for(int i=1;i<=x;i++){
			z=z<<1;
			z=z|1;
		}
	}
	else{
		for(int i=1;i<=x;i++){
			z=z<<1;
			
		}
	}
	binary(z);
}
main(){
	int i,x,y;
	printf("bir sayi giriniz : ");
	scanf("%d",&i);
	y=binary(i);
	printf("\nsayiyi ne kadar kaydirmak istiyorsunuz : ");
	scanf("%d",&x);
	kaydirma(x,y,i);
}


