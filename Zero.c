//Biblioteca
	#include <stdio.h>
	#include <conio.h>
	#include <stdlib.h>
	#include <time.h>
	#include <asciirpg.h>
//-----------------
    int fim = 0;
//Inicio da historia
int historia(){
	srand(time(0));//Seeds para numeros aleatorios
	livroum ();//Primeira escolha
	scanf("%d",&escolha[0]);
	system("cls");
	switch(escolha[0]){
//escolha de força
		case 1:
		dadoforca();//Calcula de forma aleatoria se você consegue executar a ação desejada
			if(resu >= 10){//Se o resultado do calculo anterior for maior ou igual a 10 ele executa a ação
				livroespada();
				system("pause");
				system("cls");
				historiaruim();
	            }
			else{
	            skull ();
	            printf("Quando foi atacar o anciao voce escorregou bateu a cabeca em uma pedra e morreu.\n");
	            printf("Deseja retornar ao ultimo Check-point? [s/n]:\n");
	            printf("->");
	            reset = getch();
				if (reset == 's'){
		            system("cls");
		            historia();
					 }
				else {
		            return 0;
		            }
	            }
		break;
//Escolha de carisma
        case 2:
        dadocarisma();//Calcula de forma aleatoria se você consegue executar a ação desejada
	        if (resu >= 10){
				livroseta();
				system("pause");
				system("cls");
	        	historiaboa();
	        	}
	        else{
	            negado();
	            reset = getch();
				if (reset == 's'){
		            system("cls");
		            historia();
		            }
				else {
		            return 0;
		            }
	            }
		break;
//Escolha de sorte
        case 3:
		dadosorte();//Calcula de forma aleatoria se você consegue executar a ação desejada
			if (resu >= 10){
				dormir();
			    system("pause");
		        system("cls");
	            historiaboa();
	            }
	        else{
				correndo();
				reset = getch();
				if (reset == 's'){
					system("cls");
					historia();
				         }
				else {
					return 0;
		                    }
	            }
		break;
	            }
}
int historiaruim(){
    srand(time(0));//Seeds para numeros aleatorios
    loboescolha();
    printf("Escolha um movimento:\n 1-Atacar 2-Gritar.\n");
    printf("->");
    scanf("%d",&escolha[1]);
    system("cls");
    if(escolha[1] == 1){
    	ataque:
    	dadoforca();
    	if(resu >= 10){
    		varinha();
    		scanf("%d",&escolha[2]);
    		system("cls");
    		if(escolha[2] == 1){
    			finalum();
    			fim = 1;
    			logg();
    			return 0;
    		}
    		else{
    			finaldois();
    			fim = 2;
    			logg();
    			return 0;
    		}
    	}
    else{
        skull ();
        printf("Voce tenta atacar o lobo porem ele lhe abocanha antes que  consiga\n");
        printf("Deseja retornar ao ultimo Check-point? [s/n]:\n");
        reset = getch();
        if (reset == 's'){
			system("cls");
        	historiaruim();
        }
		else {
			return 0;
            }
        }
        }
    else{
    	lobobravo();
    	scanf("%d",&escolha[3]);
        if(escolha[3] == 1){
			system("cls");
			goto ataque;
            }
        else{
            system("cls");
            finaltres();
            fim = 3;
            logg();
            return 0;
		    }
    		}
}
int historiaboa(){
    srand(time(0));//Seeds para numeros aleatorios
    loboescolha();
    printf("Escolha um movimento:\n 1-atacar 2-Conversar 3-Fugir.\n");
    printf("->");
    scanf("%d",&escolha[1]);
    system("cls");
    switch(escolha[1]){
    	case 1:
    	varinha();
    	scanf("%d",&escolha[2]);
    	system("cls");
    		if(escolha[2] == 1){
    			finalum();
    			fim = 1;
    			logg();
    			return 0;
    	}
    		else{
    			finaldois();
    			fim = 2;
    			logg();
    			return 0;
    	}
    	break;
		case 2:
    		finalquatro();
    		fim = 4;
            logg();
    		return 0;
    	break;
    	case 3:
    		finalcinco();
    		fim = 5;
            logg();
    		return 0;
    	break;
    }
}
//Jogo:
int main(){
    apresentacao();//Apresentação do trabalho
	nomedopersonagem();
    gets(nome);//Define o nome do personagem
	system("cls");//Limpa a tela
	escolhaidade();//Escolha a idade do personagem
	scanf("%d",&idade);//define a idade do personagem
	skill ();//Define os pontos de atributo
	system("cls");//Limpa a tela
	placa();//Confirmar as escolhas anteriores
	reset = getch();//Caso confirme os dados o jogo continua se não ele recomeça
		if (reset == 'n'){
			system("cls");
			main();
			}
		else {
			system("cls");
			historia();
			 }
}
int logg(){

    FILE *arq;
    arq = fopen("1.txt", "a");

    struct tm *data_hora_atual;
    time_t segundos;
    time(&segundos);
    data_hora_atual = localtime(&segundos);

        fprintf(arq,"Final %d ", fim);
        fprintf(arq,"%s ", nome);//Nome do Jogador
        fprintf(arq,"%d:",data_hora_atual->tm_hour);//hora
        fprintf(arq,"%d:",data_hora_atual->tm_min);//minuto
        fprintf(arq,"%d ",data_hora_atual->tm_sec);//segundo
        fprintf(arq,"%d/", data_hora_atual->tm_mday);//Dia
        fprintf(arq,"%d/",data_hora_atual->tm_mon+1); //mês
        fprintf(arq,"%d\n",data_hora_atual->tm_year+1900); //ano

    fclose(arq);
    return arq;
}
