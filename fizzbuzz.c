/*
Author: Chris Garry
Description: The fizzbuzz task goes as follows:
            
            1. Let integer x iterate from 1 up to 100
            2. If x is divisible by 3, print "fizz"
            3. If x is divisible by 5, print "buzz"
            4. If x is divisible by both 3 and 5, print "fizzbuzz"
            5. Otherwise, print x


This is a very rudimentary solution.
*/


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