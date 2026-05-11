#include <stdio.h>
#include <string.h>
#include <openssl/md5.h>
//#include <crypt.h> 





int main (){
    
    char c[16];
    unsigned char md[MD5_DIGEST_LENGTH];
    char hex [33];
    const char target[] ="9daae68368ac7be2d9902bb79b556c04";
   

    for (int i=0; i<=9999; i++){
        sprintf(c,"LAB_%04d",i);
        
        MD5((unsigned char*)c,strlen(c),md);
        
        for(int j =0;j< 16;j++)
        sprintf(&hex[j*2],"%02x", md[j]);
        hex[32]='\0';

        if(strcmp(hex, target)==0){
            printf("Found: %s\n", c);
            return 0;
        }
    }
    printf("Not found\n");
    return 0;
}
