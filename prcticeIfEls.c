#include<stdio.h>

int main()
{
    int time = 21;
    // if(time <= 17 ){
    //     printf("good afternoon");
    // }
    // else if(time >= 18){
    //     printf("good evening");
    // }
    // else{
    //     printf("Good morning");
    // }
    (time < 12) ? printf("good morning" ) : printf("good afternoon");
    return 0;
}