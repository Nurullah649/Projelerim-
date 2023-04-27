#include<stdio.h>
#include<time.h>
#include <stdlib.h>
#include<string.h>
main(){
	srand(time(NULL));
	FILE *fp1=fopen("sayi.txt","w");
	if(fp1==NULL){
		printf("Dosya acma hatasý");
	}
	int sayi[100];
	int *sayi1=(int*)calloc(1,sizeof(int)); 
	int x=0;
	for(int i=0;i<100;i++){
		sayi[i]=rand()%101;
		fprintf(fp1,"%d\n",sayi[i]);
		if((sayi[i]&(1<<4))==(0)){
			*(sayi1+x)=(sayi[i]);
			x++;
			realloc(sayi1,(x+1)*sizeof(int));
		}
	}
	for(int i=0;i<x;i++){
		printf("%p=%d\n",(sayi1+i),*(sayi1+i));
	}
	free(sayi1);
	fclose(fp1);
}
