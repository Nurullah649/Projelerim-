#include<stdio.h>
int a=1,i=1;
int obeb(int x,int y){
	if(x>y){
		if(x%y==0){
			return y;
		}
		if(x%a==0&&y%a==0){
			i*=a;
			if(a==y){
				return i;
			}
			a++;
			return obeb(x,y);
		}
		else{
			if(a==y){
				return i;
			}
			a++;
			return obeb(x,y);
		}
		
	}
	else{
		if(y%x==0){
			return y;
		}
		if(x%a==0&&y%a==0){
			i*=a;
			if(a==x){
				return i;
			}
			a++;
			return obeb(x,y);
		}
		else{
		if(a==x){
			return i;
		}
		a++;
			return obeb(x,y);
		}
		
	}
	
}
main(){
	int x,y;
	printf("Obebi alınacak sayıları giriniz : ");
	scanf("%d %d",&x,&y);
	printf("sonuc : %d",obeb(x,y));
}
