#include <stdio.h>

int main(int argc, char const *argv[]){

    float num1 = 9.2, num2 = 7.2, num3 = 5.6;

    if(num1 > num2 && num1 > num3){
        printf("your max number is: %f" ,num1);

    } else if(num2 > num1 && num2 > num3){
        printf("your max number is: %f", num2);
    }else if(num3 > num1 && num3 > num2){
        printf("your max number is: %f", num3);
    }
    
    return 0;
}
