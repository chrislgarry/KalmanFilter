#include <string.h>

char *string_reverse2(const char *string){ 

    size_t len = 0;
    char *str = string;

    while (*str != '\0'){
        str++;
        len++;
    }

    if(len < 1){
        return string;
    }
  
	char *temp = calloc(len+1, sizeof(char));
	temp[len] = '\0';
	int i;
    for(i=0; i< len; i++){
	    temp[i] = string[i];
	}
	
	int left = 0;
	int right = len-1;
	
	while(left != right){
		temp[left] = string[right];
		temp[right] = string[left]; 
		left++;
		right--;
	}
	
    return temp;
}

void main(int argc, char argv[]){

    const char string[] = "";
    printf("%s\n", string_reverse2(string));
    
    const char string2[] = "a";
    printf("%s\n", string_reverse2(string2));

    const char string3[] = "apples!";
    printf("%s", string_reverse2(string3));

}
