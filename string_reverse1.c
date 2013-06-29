//A method to reverse a string in place

void string_reverse1(char *string){ 
    
    size_t len = 0;
    char *str = string;

    while (*str != '\0'){
        str++;
        len++;
    }

    if(len > 0){

        int left = 0;
        int right = len-1;

        while(left <= right){

            char temp1 = string[left];

            string[left] = string[right];
            string[right] = temp1;
     
            left++;
            right--;
        }
    }

    return;
}

void main(int argc, char *argv[]){

    char string[] = "";
    string_reverse1(string);
    printf("%s", string);
    
    printf("\n");

    char string2[] = "a";
    string_reverse1(string2);
    printf("%s", string2);

    printf("\n");

    char string3[] = "apples!";
    string_reverse1(string3);
    printf("%s", string3);
    
    char string4[] = "apples";
    string_reverse1(string4);
    printf("%s", string4);

}
