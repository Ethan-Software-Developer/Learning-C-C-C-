#include <stdio.h>

int main(){

    FILE *pf = fopen("test.txt","r");


    char buffer[255];

    // fgets(buffer,255,pf);
    // printf("%s",buffer); //Get's the first line
if(pf == NULL){
    printf("Unable to locate the file.");
}

else{



while(fgets(buffer,255,pf) != NULL){
    printf("%s",buffer);
}
}

    fclose(pf);

    return 0;
}