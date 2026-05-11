#include <ctype.h> // за isupper()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char caesar_encrypt_char(char p, int k) {
    if (isupper(p)) {
        return ( (p - 'A' + k) % 26 ) + 'A';
    }
    else if(islower[p]){
        return ( (p - 'A' + k) % 26 ) + 'A';
    }
    return p; 

char caesar_decrypt_char(char c, int k) {
    if (isupper(c)) {
        return((c + 'A' - k +_26)%26)+'A';
    }
    else if(islower[c]){
        return
    }
    return c;
}
int main(){
    char plaintext[];
    scanf("is",plaintext);
    int key;
    scanf
}