/*
* @amnolan
*/
#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 80

void get_str(char *array){
	// array is passed as a ptr and can be referred to as such
	char ch, * ptr = array;
	// get the next char as long as it's not a newline char and it's less than the size of the array
	while((ch = getchar()) != '\n' && ptr < array + MAX_SIZE){
		*ptr++ = ch;
	}
	*ptr = '\0';
}

void print_str(char *array)
{
	// print char by char
    while (*array) {
    	putchar(*array++);
    }
    putchar('\n');

}

char shift_str_position(char letter, int shift_amt){
	// we know it's both a letter and not punctuation
	int shifted_char;
	if(isupper(letter)){
		shifted_char = ((letter - 'A') + shift_amt ) % 26 + 'A';
	}else{
		shifted_char = ((letter - 'a') + shift_amt ) % 26 + 'a';
	}
	return shifted_char;
}

void encrypt_str(char *array, int shift_amt){
	char ch, shifted_ch, * ptr = array;
	int pos;
    while (*ptr) {
        ch = *ptr;
		if(isalpha(ch)){
			*ptr++ = shift_str_position(ch, shift_amt);
		}else{
			// skip non-alpha characters
		 	ptr++;
		}
	}
	*ptr = '\0';
}

int main(){
	char message[MAX_SIZE];
	int shift_amt;
	printf("Enter message to be encrypted: ");
	get_str(message);
	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift_amt);
	encrypt_str(message, shift_amt);
	printf("Encrypted message: ");
	print_str(message);
	return 0;
}