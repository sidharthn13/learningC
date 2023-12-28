#include<stdio.h>
void main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    for(int i = 1; i <=num; i++){
        for(int j = 1; j <= num-i; j++ ){
            printf("%c",' ');
        }
        for(int k = 1; k <= 2*i-1 ; k++){
            printf("%c", '*');
        }
        printf("%c", '\n');
    }
}
