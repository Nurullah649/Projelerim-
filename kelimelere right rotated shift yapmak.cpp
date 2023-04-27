#include<stdio.h>
#include<string.h>
void fonk(char *x,int i,int z){
	char c;
	for(int a=0;a<i;a++){
		c=x[z-1];
		x[z-1]='\0';
		x--;
		x[0]=c;	
	}
	puts(x);
}
main(){
	char *ch,ch1[200];
	int i,a;
	printf("Kelime Giriniz : ");
	gets(ch1);
	ch=ch1;
	printf("Ne kadar kaydýrmak istiyorsunuz : ");
	scanf("%d",&i);
	for(int i=0;ch1[i]!='\0';i++){
		a++;
	}
	fonk(ch,i,a);
}
