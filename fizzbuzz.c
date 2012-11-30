#include "stdio.h"

void main(int argc, char argv[]){
    
	int x;
	for(x = 1; x <= 100; x++){
		
		int flag = 0;

		if(x%3==0){
			printf("fizz");
			flag = 1;
		}

		if(x%5==0){
			printf("buzz");
			flag = 1;
		}

		if(!flag){
			printf("%d",x);
		}

		printf("\n");
	}
}