#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

long converteStringParaInteiro(char *number);
long converteHexadecimalParaInteiro(char *number);
long caractereParaInteiro(char c);

int main(){
	
	while(1){
		char number[20];
	    long numero;
	    
		scanf("%s",number);
		
		if(strcmp(number,"-1") == 0) break;
		
	    if(number[1] == 'x'){
		    numero = converteHexadecimalParaInteiro(number);
		    printf("%ld\n",numero);
	    }
        else{
		    numero = converteStringParaInteiro(number);
		    printf("0x%X\n",numero);
	    }
	}
	
    system("pause");
    return 0;
}

long caractereParaInteiro(char c){
	switch(c){
		case '0': return 0;
		break;
		case '1': return 1;
		break;
		case '2': return 2;
		break;
		case '3': return 3;
		break;
		case '4': return 4;
		break;
		case '5': return 5;
		break;
		case '6': return 6;
		break;
		case '7': return 7;
		break;
		case '8': return 8;
		break;
		case '9': return 9;
		break;
		case 'A': return 10;
		break;
		case 'B': return 11;
		break;
		case 'C': return 12;
		break;
		case 'D': return 13;
		break;
		case 'E': return 14;
		break;
		case 'F': return 15;
		break;
		case 'a': return 10;
		break;
		case 'b': return 11;
		break;
		case 'c': return 12;
		break;
		case 'd': return 13;
		break;
		case 'e': return 14;
		break;
		case 'f': return 15;
		break;
	}
}

long converteStringParaInteiro(char *number){
	const int TAM = strlen(number);
	int i;
	long numero = 0;
	
	for(i = 0; i < TAM; i++){
		numero+=caractereParaInteiro(number[i])*(pow(10,TAM-i-1));
	}
	return numero;	
}
long converteHexadecimalParaInteiro(char *number){
	const int TAM = strlen(number);
	int i,j;
	long numero = 0;
	
	for(i = 2,j=0; i < TAM; i++,j++){
		numero+=caractereParaInteiro(number[i])*(pow(16,TAM-j-3));
	}
	return numero;	
}