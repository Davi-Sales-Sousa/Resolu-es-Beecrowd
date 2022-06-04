#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void igualaTamanho(int Diferenca, char *number);
int caractereParaInteiro(char c);

int main(){
	
    while(1){
	    char number1[11],number2[11];
	    int i;
		int carry=0,carryOut=0;
		int diferenca;
	
	    scanf("%s %s",number1,number2);
		if(strcmp(number1,"0") == 0 && strcmp(number2,"0") == 0) break;
	
	    int TAM1 = strlen(number1),TAM2 = strlen(number2);
	    if(TAM1 > TAM2){
			diferenca = TAM1 - TAM2;
			igualaTamanho(diferenca,number2);
		}else if(TAM2 > TAM1){
			diferenca = TAM2 - TAM1;
			igualaTamanho(diferenca,number1);
			TAM1 = TAM2;
		}
		
	    for(i = TAM1-1; i >= 0; i--){
		    if((caractereParaInteiro(number1[i])+caractereParaInteiro(number2[i])+carryOut) >= 10){
			    carry++;
				carryOut = 1;
		    }
			else
				carryOut = 0;
			
	    }
	
	    switch(carry){
			case 0: printf("No carry operation.\n");
			break;
			case 1:printf("1 carry operation.\n");
			break;
			default: printf("%d carry operations.\n", carry);
			break;
		}
	}
	return 0;
}

void igualaTamanho(int diferenca, char *number){
	char zeros[20]="";
	int i;
	
	for(i = 0; i < diferenca; i++){
		strcat(zeros,"0");
	}
	strcat(zeros,number);
	strcpy(number,zeros);
}
int caractereParaInteiro(char c){
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
	}
}
	