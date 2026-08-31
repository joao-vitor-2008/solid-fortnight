#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    unsigned char c[5];
    int counter;
} char_counter;

char to_uppercase(char c){
    if(c >= 'a' && c <= 'z') return c - 32;
    return c;
}

bool occurs(char* str, char element){
    if(str[0] == '\0') return false;
    if(str[0] == element) return true;
    return occurs(&str[1], element);
}

bool is_letter(char c){
    return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}

int qtd_letra(char* str, char character){
    if(str[0] == '\0') return 0;
    int soma = (to_uppercase(character) == to_uppercase(str[0])) ? 1 : 0;
    return soma + qtd_letra(&str[1], character);
}

char_counter* func(char* especials_chars, char* sentence){
    char buffer[80] = "";
    int k = 0;
    int pos_buffer = 0;
    
    char_counter* str = calloc(52 + strlen(especials_chars), sizeof(char_counter));
    
    for(int i = 0; sentence[i] != '\0'; i++){
        char atual = sentence[i];
        
        if(is_letter(atual) && !occurs(buffer, atual)){
            
            str[k].c[0] = atual;
            str[k].c[1] = '\0';
            str[k].counter = qtd_letra(sentence, atual);

            buffer[pos_buffer++] = atual;
            buffer[pos_buffer] = '\0';

            k++;
        }
    }

    return str;
}

int main(){
    char sentence[] = "João";
    char especials[] = "áéíóúâêôàãõçüÁÉÍÓÚÂÊÔÀÃÕÇÜ";

    char_counter* ptr = func(especials, sentence);

    for(int i = 0; ptr[i].c[0] != '\0'; i++){
        printf("Letra: %s | Quantidade: %d\n", ptr[i].c, ptr[i].counter);
    }
    
    char c = 'a';
    printf("%d", c);

    free(ptr);
    return 0;
}
