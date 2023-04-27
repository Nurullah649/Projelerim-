#include<stdio.h>
#include<time.h>
#include <stdlib.h>
#include<math.h>
//0 ile 100 aras�ndaki rastgele say�lar�n 5. bitini kontrol edip ona g�re i�lem yapan kod
main(){
	FILE *fp1=fopen("say�lar0.txt","w");
	FILE *fp2=fopen("say�lar1.txt","w");
	if(fp1==NULL){
		printf("Dosya acma hatas�");
		return 0;
	}
	if(fp2==NULL){
		printf("Dosya acma hatas�");
		return 0;
	}
	srand(time(NULL));
	int dizi[100];
	for(int i=0;i<100;i++){
		dizi[i]=rand()%101;
		if((dizi[i]&(1<<4))==(1<<4)){
		
			dizi[i]=dizi[i]&(~(1<<2));
			fprintf(fp1,"%d\n",dizi[i]);
		}
		else{
			dizi[i]=dizi[i]|(1<<3);
			fprintf(fp2,"%d\n",dizi[i]);
		}
	}
	fclose(fp1);
	fclose(fp2);
}
