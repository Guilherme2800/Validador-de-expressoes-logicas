#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
	int i=0;
	int parentesaberto=0,parentesfechado=0,temparentes=0;
	int x=0,escreva=0;
    char funcao[100];
	int resultado,teste=1;
	
	
	while(teste == 1){
	printf("\tDESCRICAO");
	printf("\n\n NEGACAO = ~ \n CONJUNCAO = ^ \n DISJUNCAO = V \n DISJUNCAO EXCLUSIVA = / \n CONDICIONAL = -> \n BICONDICIONAL = <-> \n ");
	printf("\nInforme sua funcao: ");
	fflush(stdin);
	gets(funcao);
	i=0;
	x=0;
	parentesaberto=0;
	parentesfechado=0;
	temparentes=0;
	escreva=0;
	teste=0;
	while(funcao[i] != 0){
		
		// verifica parentes aberto
		if (funcao[i] == 40){
			parentesaberto++;
			temparentes++;
		}
		// verifica parentes fechado
		if (funcao[i] == 41){
			parentesfechado++;
			temparentes++;
		}
		
		// verifica se antes do (E,OU, OU EXCLUSIVO. <, >, -) nao existe nada
		if (funcao[i] == 60 || funcao[i] == 62 || funcao[i] == 45 || funcao[i] == 86  || funcao[i] == 94 || funcao[i] == 47){
			if(funcao[i-1] == 0){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;	
			}
		}
		//verifica se depois do (E,OU, OU EXCLUSIVO. <,>, -) nao existe nada
		if (funcao[i] == 60 || funcao[i] == 62 || funcao[i] == 45 || funcao[i] == 126 || funcao[i] == 86 || funcao[i] == 94 || funcao[i] == 47){
			if(funcao[i+1] == 0){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;	
			}
		}
		//verifica se antes ou depois do parentes vem uma letra
		if(funcao[i] == 41 || funcao[i] == 40){
			if(funcao[i]==41){
				if(funcao[i+1] > 96 && funcao[i+1] < 123){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;	
				}
			}
			if(funcao[i]==40){
				if(funcao[i-1] > 96 && funcao[i-1] < 123){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;	
				}
			}
		}
		
		if (funcao[i] == 60 || funcao[i] == 62 || funcao[i] == 45 || funcao[i] == 126 || funcao[i] == 86 || funcao[i] == 94 || funcao[i] == 47){
			if(funcao[i+1] == 41){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;	
			}
		}
		
		if (funcao[i] == 126 && funcao[i+1] == 40 && funcao[i-1] == 41){
			printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;
		}
		
		
		
		if(funcao[i] == 41 && funcao[i+1] == 40){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;	
		}
		
		//verificacao se comparador estar correto
		if (funcao[i] == 45 && funcao[i+1] == 45){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;	
		}
		
		if (funcao[i] == 60 && funcao[i+1] == 60){
				printf("\nFuncao Errada, aperte Enter para sair");
				getche();
				break;	
		}
		
		if (funcao[i] == 62 && funcao[i+1] == 62){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;	
		}
		
		if (funcao[i] == 60 && funcao[i+1] == 45 && funcao [i+2] != 62){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;	
		}
		
		if (funcao[i] == 45 && funcao[i+1] != 62){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;	
		}
		
		if (funcao[i] == 45 && funcao[i+1] != 62 && funcao[i+2] == 0){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;	
		}
		
		if (funcao[i] == 96 && funcao[i+1] == 96){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;	
		}

		
		if (funcao[i] == 94 && funcao[i+1] == 94){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;	
		}
		
		if (funcao[i] == 47 && funcao[i+1] == 47){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;	
		}
		
		//verifica se antes do (E, OU, OU EXCLUSIVO) vem um parentes aberto e antes o vazio.
		if (funcao[i] == 96 ||  funcao[i] == 94 ){
			if(funcao[i-1] == 40 && i-2 != 0 && funcao[i-2] == 0){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;	
			}
		}
		
		//verifica se depois do (E, OU, OU EXCLUSIVO) vem um parentes e em seguida o vazio.
		if (funcao[i] == 86 ||  funcao[i] == 94 || funcao[i] == 47){
			if(funcao[i+1] == 41 && funcao[i+2] == 0){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;	
			}
		}
		
		// verifica se antes da conjunção vem (E, OU, OU EXCLUSIVO)
		if (funcao[i] == 86 || funcao[i] == 94 || funcao[i] == 47){
			if(funcao[i-1] == 126){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;	
			}
		}
		
		if (funcao[i] == 126){
			if(funcao[i-1] > 96 && funcao[i-1] <123){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;	
			}
		}
		
		//verifica se ta entre parentes sozinho.
		if (funcao[i] == 60 || funcao[i] == 62 || funcao[i] == 45 || funcao[i] == 86 || funcao[i] == 94 || funcao[i] == 47){
			if(funcao[i-1] == 40){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;
			}
		}
		
		//verifica se tem um parentes aberto e em seguida um fechado
		if (funcao[i] == 40 && funcao[i+1] == 41){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;
		}
		
		//verifica se tem duas letras uma tras da outra.
		if (funcao[i] > 96 && funcao[i] <123 && funcao[i+1] > 96 && funcao[i+1] < 123){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;
		}
		
		//verifica se a escrita estar dentre as opções
		if (funcao[i] < 97 || funcao[i] > 122 ){
			if(funcao[i] != 60 && funcao[i] != 62 && funcao[i] != 45 && funcao[i] != 126 && funcao[i] != 86 && funcao[i] != 94 && funcao[i] != 40 && funcao[i] != 41 && funcao[i] != 47){
				printf("\nFuncao Errada, aperte Enter para sair");
				x++;
				getche();
				break;
			}
		}
		
	
		i++;
		
		//Fim while.
	}
	
	if(funcao[0] == 0){
		printf("\nFuncao Errada, aperte Enter para continuar");
		x++;
		getche();
	}
	
	if (temparentes >= 1 && x == 0){
	if (parentesaberto == parentesfechado){
		printf("\nfuncao OK");
		escreva++;
	}else{
		printf("\nfuncao ERRADA");
		escreva++;
	}

}

if(escreva == 0){
if(x == 0){
	printf("\nfuncao OK");
}
}
	
	printf("\n\nDeseja verificar novamente?    1-sim   0-nao \n Digite sua opcao:");
	
	scanf("%d",&teste);
	system("cls");
}
}

