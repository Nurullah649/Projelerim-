#include<stdio.h>
//Alýnan sayýyý kullanýcýnýn istediði sayýya göre kaydýrýp left rotated shift yapan kod
int binary(int x){
	//sayýyý ikili sayý sistemine çevirip yazan kod kullanýcýnýn sonucu daha rahat görmesi adýna
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
	//kaydýrma ve left rotated shift iþlemi için kontrol eden kod
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


