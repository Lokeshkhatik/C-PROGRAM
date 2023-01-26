#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char word[1000],i;
    scanf("%[^\n]%*c",&word);
    for(i=0;i< strlen(word);i++){
        
            printf("%c", word[i]);
        
    }
    return 0;
}