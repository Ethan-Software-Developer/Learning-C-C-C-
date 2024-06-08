#include <stdio.h>

enum Day{
    sun = 1,mon = 2,tue =3,wed =4,thur=5,fri=6,sat=7
};


int main(){

    enum Day today = sun;
    // printf("%d",today);


    if(today == sun|| today == sat){
        printf("It's the weekend party time.");
    }
    else{
        printf("I have to work today.");
    }

    return 0;
}