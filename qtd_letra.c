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

int is_letter(char c){
        if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z')){
                return 1;
        } else {return 0;}
}

int ocorre(char* str, char element, int i){
        for(int j=0; j < i;j++){
                if(element == str[j]){
                        return 1;
                }
        }
        return 0;
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
        int k = 0;
        char frase[] = "jJoOo939+++--=vsnskdhdbnakjshshdjdjbshwsjhdhdjeiendbdhjdjsbehsjs**JJJ";        
        for (int i=0; frase[i] != '\0'; i++){
                char l = frase[i];
                if( is_letter(l) && (!ocorre(frase, l, i) && !ocorre(frase, to_lowercase(l), i)) ){
                        printf("%c -- %d\n", l, qtd_letra(frase, l));
                        k += qtd_letra(frase, l);
                }
        }
        printf("Tota de letras é: %d", k);
}