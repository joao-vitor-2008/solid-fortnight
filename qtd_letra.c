#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct char_counter {
	char c[2];
	int counter;
	long teste;
};

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

int* func(char* especials_chars, char* sentence){

}

int main(){
        int letter_counter = 0;
        char frase[] = "jJoOaAãÃoO";
	char especials[] = "áéíóúâêôàãõçüÁÉÍÓÚÂÊÔÀÃÕÇÜ";
	int *res = malloc(sizeof(struct char_counter) * (52 + sizeof(especials)-1));
	
	char c[];
	printf("%d", sizeof(c));	


	printf("Total de letras é: %d", letter_counter);
}
