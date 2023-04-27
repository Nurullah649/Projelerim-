#include<stdio.h>
#include<time.h>
#include <stdlib.h> 
main(){
	int max=20;
	srand(time(NULL));
	int	*p[max],a[max];
	for(int i=0;i<max;i++){
		a[i]=rand()%101;
		p[i]=&a[i];
		printf("%d-",*p[i]);
	}
	printf("\n");
	int *x,*z;
	for(int a=0;a<max;a++){
		x=p[a];
		for(int i=a+1;i<max;i++){
			if(*x<*p[i]){
				z=x;
				x=p[i];
				p[i]=z;
			}	
		}
		p[a]=x;
	}
	for(int i=0;i<max;i++){
		printf("%d-",*p[i]);
	}
}
