//A method to reverse a string and return the result.

char *string_reverse2(const char *string){ 

    //Get size of string
    size_t len = 0;
    char *str = string;

    while (*str != '\0'){
        str++;
        len++;
    }

    //If string is length 0 or 1, nothing to reverse
    if(len < 2){
        return string;
    }
  
    //Allocate memory to store reversed string 
    //while initializing nul terminator via calloc
    char *temp = calloc(len+1, sizeof(char));
    
    //swap ;eft and right characters in string
    int left = 0;
    int right = len-1;
    while(left <= right){
	temp[left] = string[right];
	temp[right] = string[left];
        left++;
	right--;
    }
	
    return temp;
}

void main(int argc, char *argv[]){

    const char string[] = "";
    printf("%s\n", string_reverse2(string));
    
    const char string2[] = "a";
    printf("%s\n", string_reverse2(string2));

    const char string3[] = "apples!";
    printf("%s", string_reverse2(string3));

}
