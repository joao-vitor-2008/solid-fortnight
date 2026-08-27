#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
	char c[4];
	int counter;
} char_counter;

char to_uppercase(char c){
	if(c >= 'a' && c <= 'z')return c-32;
	else return c;
}

bool occurs(char* str, char element){
	if(str[0] == '\0' || element == 0) return false;
	else if(str[0] == element) {
		return true;
	} else {
		return occurs(&str[1], element);
	}
}

bool is_letter(char c, char* str){
        if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z')) return true;
	else return occurs(str, c );
}

int qtd_letra(char* str, char character){
        if(str[0] == '\0') return 0;
        if(to_uppercase(character) == to_uppercase(str[0])) return 1 + qtd_letra(&str[1], character);
        return 0 + qtd_letra(&str[1], character);
}

char_counter* func(char* especials_chars, char* sentence){
    char_counter* str = malloc( (52 + strlen(especials_chars)/2) * sizeof(char_counter) );
    
    for(int i = 0; sentence[i] != '\0'; i++){
        if(is_letter(sentence[i], especials_chars)){
            
        }
    }

    return str;
}

int main(){
    int letter_counter = 0;
    char sentence[] = "jJoOaAãÃ";
	char especials[] = "áéíóúâêôàãõçüÁÉÍÓÚÂÊÔÀÃÕÇÜ";

    char_counter* ptr = func(especials, sentence);

	printf("Total de letras é: %zu", sizeof(ptr));
}
