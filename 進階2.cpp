//3A713221
#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) { 

    char word[1000]; 
    int i,len; 
    
    printf("�п�J�@�Ӧr�� :"); 
    scanf("%s",word); 
    len = strlen(word); 
    printf("�ϦV�r�ꬰ :");
    
    for(i=len-1;i>=0;i--){ 
    printf("%c",word[i]); 
    } 
    
    printf("\n"); 
    system("pause"); 
	return 0;
}
