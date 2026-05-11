#include <ctype.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


    int main(){
        int a, b;
        printf("enter two numbers");
        scanf("%d %d", &a, &b);
        int x=a;
        int y=b;
        while(y!=0){
            int temp =y;
            y= x%y;
            x= temp;
        }
        if(x ==1){
            printf("coprime \n");
        }else{
            printf("gcd: %d\n",x );
        }
  
        return EXIT_SUCCESS;
    }
