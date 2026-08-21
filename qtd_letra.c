#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char to_lowercase(char c){
	if(c >= 'A' && c <= 'Z'){
		return c+32;
	} else {
		return c;
	}
}

bool ocorre(char* str, char element, int i){
	for(int j=0; j < i;j++){
		if(element == str[j]){
			return true;
		}
	}
	return false;
}

int qtd_letra(char* frase, char letra){
	if(frase[0] == '\0'){
		return 0;
	}

	int counter = 0;

	if(to_lowercase(letra) == to_lowercase(frase[0])){
		counter++;
	}

	return counter + qtd_letra(&frase[1], letra);
}

int main(){
	char frase[] = "jJoOo939+++--=";	
	for (int i=0; frase[i] != '\0'; i++){
		if( ( ('A' <= frase[i] && frase[i] <= 'Z') || ('a' <= frase[i] && frase[i] <= 'z') ) && ( ocorre(frase, frase[i], i) == false && ocorre(frase, to_lowercase(frase[i]), i) == false ) ){
			printf("%c -- %d\n", frase[i], qtd_letra(frase, frase[i]));
		}
	}
}
