#include<stdio.h>
#include<stdlib.h>
main(){
	int *p=(int*)malloc(sizeof(int));
	int a,kontrol=0,i=0;
	while(a>=0){
		printf("sayi giriniz : ");
		scanf("%d",&a);
		if(a%3==0 && a%5==0){
			for(;i<=kontrol;i++){
				*(p+i)=a;
			}
			kontrol++;
			(int*)realloc(p,(kontrol+1)*sizeof(int));
		}
	}
	for(int x=0;x<kontrol;x++){
		printf("%d\n",*(p+x));
	}
}
