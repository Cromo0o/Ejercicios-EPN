#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
//#include <windows.h>

#define MAX_LEN 100

//Palabras reservadas
const char *keywords[] = {
    "int", "float", "char", "if", "else", "while", "for", "return",
    "void", "double", "struct", "break", "continue"
};
int num_keywords = sizeof(keywords) / sizeof(keywords[0]);

int is_keyword(const char *str) {
    for (int i = 0; i < num_keywords; i++){
        if (strcmp(str, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

int is_identifier(const char *str) {
    if (!isalpha(str[0]) && str[0] != '_')
        return 0;
    for (int i = 1; str[i]; i++) {
        if (!isalnum(str[i]) && str [i] != '_')
            return 0;
    }
    return 1;
}

int is_integer(const char *str) {
    int i = 0;
    if (str[0] == '-' || str[0] == '+') i++;
    if(!isdigit(str[i])) return 0;
    for (; str[i]; i++) {
        if (!isdigit(str[i]))
            return 0;
    }
    return 0;
}

int is_float(const char *str) {
    int i = 0, dot = 0;
    if (str[0] == '-' || str[0] == '+') i++;
    int digits = 0;
    for (; str[i]; i++) {
        if (str[i] == '.') {
            if (dot) return 0;
            dot = 1;
        } else if (isdigit(str[i])) {
            digits = 1;
        }else {
            return 0;
        }
    }
    return dot && digits;
}

int is_symbol(const char * str) {
    const char *symbols[] = {"+", "-", "*", "/", "=", "==", "!",
    "!=", "<", "<=", ">", ">=", ";", ",", "(", ")", "{", "}"};
    int num_symbols = sizeof(symbols) / sizeof(symbols[0]);
    for (int i = 0; i < num_symbols; i++) {
        if (strcmp(str, symbols[i]) == 0)
        return 1;
    }
    return 0;
}

int is_hexadecimal(const char * str) {
    
    if ((str[0] == 0) && (str[1] == 'x'))
        return 0;
        
    for (int i = 2; str[6]; i++) {
        if (!isalnum(str[i]) || (!isalpha(str[i])))
            return 0;
    }
    return 1;
}

int main(){
    //SetConsoleOutputCP(65001);

    char input[MAX_LEN];
    printf("Introduce una palabra (token) de C: ");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Error al leer la entrada.\n");
        return 1;
    }
    
    //Eliminar salto de linea final si existe
    size_t len = strlen(input);
    if (len > 0 && input [len - 1] == '\n') {
        input [len - 1] = '\0';
    }

    if (is_keyword(input)) {
        printf("Palabra reservada: %s\n", input);
    } else if (is_identifier(input)) {
        printf("Identificador: %s\n", input);
    } else if (is_float(input)) {
        printf("Flotante: %s\n", input);
    } else if (is_integer(input)) {
        printf("Entero: %s\n", input);
    } else if (is_symbol(input)) {
        printf("Simbolo: %s\n", input);
    } else if (is_hexadecimal(input)) {
        printf("Hexadecimal: %s\n", input);
    } else {
        printf("Token desconocido: %s\n", input);
    }

    return 0;
}