#include <ctype.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char caesar_decrypt(char c, int key){
    if(c >= 'A' && c <= 'Z'){
        return (c - 'A' - key +26)% 26 + 'A';
    }
    else if (c >= 'a' && c <= 'z'){
        return (c - 'a' - key +26)% 26 + 'a';
    }
    return c;
}
int main(int argc, char *argv[]){
    if (argc !=4){
        printf("Usage: %s input.txt key.txt output.txt \n", argv[0]);
        return 1;
    }

    FILE *fin = fopen (argv[1], "r");
    FILE *fkey = fopen (argv[2], "r");
    FILE *fout = fopen (argv[3], "w");

    if(!fin || !fkey ||!fout){
        printf("Error \n");
        return 1;
    }

int key;
fscanf(fkey, "%d", &key);

char c;
while((c = fgetc(fin)) !=EOF){
    fputc (caesar_decrypt(c, key), fout);
}
fclose(fin);
fclose(fkey);
fclose(fout);

return EXIT_SUCCESS;

}
