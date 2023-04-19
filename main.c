/* Guia 0, Ej 12
 *  Implemente una función que reciba un string por referencia y lo invierta. Por
ejemplo, si el string es "hola", el resultado debe ser "aloh". */
#include<stdio.h>
void invertir(char *, int);
int main(){
    char texto[1000], *textoptr;
    int leng, i;
    printf("Ingrese un texto:\n");
    gets(texto);
    textoptr = &texto;
    for(i=0; texto[i]!='\0'; i++){
        leng++;
    }
    invertir(textoptr, leng);
    printf("El nuevo texto transofrmado es: ");
    puts(texto);
    return 0;

}
void invertir(char *textoptr, int leng){
    int i;
    char temp;
    for(i=0; i<leng/2; i++){
        temp = textoptr[i];
        textoptr[i] = textoptr[leng-i-1];
        textoptr[leng-i-1] = temp;
    }
}












