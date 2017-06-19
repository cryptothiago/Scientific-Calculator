#include <stdio.h> //BIBLIOTECA PADRÃO
#include <stdlib.h> //BIBLIOTECA PADRÃO
#include <locale.h> //BIBLIOTECA IDIOMA
#include <math.h> //BIBLIOTECA MATEMATICA
#include <ctype.h> //BIBLIOTECA CARACTERES


void menu_simples (void) { //INICIO DA LOGO

	system("cls || clear"); //LIMPAR TELA

    printf("\n\n\n");
    printf("                                          █████╗ ██╗      ██████╗  ██████╗ ██████╗ ██╗████████╗███╗   ███╗ ██████╗ ███████╗\n");
    printf("                                         ██╔══██╗██║     ██╔════╝ ██╔═══██╗██╔══██╗██║╚══██╔══╝████╗ ████║██╔═══██╗██╔════╝\n");
    printf("                                         ███████║██║     ██║  ███╗██║   ██║██████╔╝██║   ██║   ██╔████╔██║██║   ██║███████╗\n");
    printf("                                         ██╔══██║██║     ██║   ██║██║   ██║██╔══██╗██║   ██║   ██║╚██╔╝██║██║   ██║╚════██║\n");
    printf("                                         ██║  ██║███████╗╚██████╔╝╚██████╔╝██║  ██║██║   ██║   ██║ ╚═╝ ██║╚██████╔╝███████║\n");
    printf("                                         ╚═╝  ╚═╝╚══════╝ ╚═════╝  ╚═════╝ ╚═╝  ╚═╝╚═╝   ╚═╝   ╚═╝     ╚═╝ ╚═════╝ ╚══════╝\n\n\n");
    printf("                                                                                                                         [-] Programador: Thiago Ribeiro\n\n");

		printf("  ------------------------------------------------------------------------------------------------------------------------------------------------------------------    \n\n");
} //TERMINO DA LOGO














int continuar_sair (void) { //MENU QUE FICA NO FINAL DE TODOS OS EXERCÍCIOS

    int opcao; //COLOCANDO A VARIAVEL

    do {

        printf("\n\n  ------------------------------------------------------------------------------------------------------------------------------------------------------------------    \n\n");
        
        printf("01. Calcular novamente.\n"); //SAIDA DE DADOS
        printf("02. Voltar ao menu.\n"); //SAIDA DE DADOS
        printf("03. Sair do software.\n"); //SAIDA DE DADOS

        printf("\n[*] Escolha uma opção: "); //SAIDA DE DADOS
        scanf("%d", &opcao); //ENTRADA DE DADOS


        switch (opcao) {

            case 01:
                    return 1; //CALCULA O EXERCÍCIO NOVAMENTE
                break;

            case 02: //VOLTA PARA O MENU NOVAMENTE

                break;

            case 03:
                    exit(1); //SAI DO PROGRAMA
                break;

        }

    }while(opcao > 3);

} //TERMINO DO MENU














void adicao_n (){ //INICIO DO EXERCÍCIO DE ADIÇÃO

    do{

      int n, i=0, soma=0, valor; //COLOCANDO AS VARIAVEIS

      menu_simples(); //COLOCANDO MENU

      printf("Digite a quantidade de vezes que deseja somar: "); //SAIDA DE DADOS
      scanf("%d", &n); //ENTRADA DE DADOS

      printf("\n"); //ESSE \N FOI COLOCADO PARA ESTÉTICA, NÃO DAVA PARA POR NO PRINTF POIS FICAVA ESTRANHO

          while (i < n){

              	printf("Digite o valor a ser somado: "); //SAIDA DE DADOS
           	    scanf("%d", &valor); //ENTRADA DE DADOS

                i = i + 1; //CONTADOR

                soma = soma + valor; //CALCULO
          }

      printf("\n[*] O valor da soma é %d \n", soma); //SAIDA DE DADOS COM O RESULTADO FINAL

    } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

    system("cls | clear"); //LIMPAR TELA

} //FINAL DO EXERCÍCIO DE ADIÇÃO



















void subtracao_n (){ //INICIO DO EXERCÍCIO SUBTRAÇÃO

    do {

        int n, i=0, sub=0, valor; //COLOCANDO AS VARIAVEIS

        menu_simples(); //COLOCANDO MENU

        printf("Digite a quantidade de vezes que deseja subtrair: "); //SAIDA DE DADOS
        scanf("%d", &n); //ENTRADA DE DADOS

        printf("\n"); //ESSE \N FOI COLOCADO PARA ESTÉTICA, NÃO DAVA PARA POR NO PRINTF POIS FICAVA ESTRANHO

        while (i < n){

        	printf("Digite o valor a ser subtraido: "); //ENTRADA DE DADOS
       	    scanf("%d", &valor); //SAIDA DE DADOS

            valor = (valor * -1); //TRANSFORMANDO O VALOR EM POSITIVO, POIS O VALOR ESTAVA ENTRANDO NEGATIVO

            i = i + 1; //CONTADOR

            sub = valor - sub; //CALCULO

        }

		    printf("\n[*] O valor da subtração é %d \n", sub);  //SAIDA DE DADOS COM O RESULTADO FINAL

    } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

    system("cls | clear"); //LIMPAR TELA

} //TERMINO DO EXERCÍCIO DE SUBTRAÇÃO












void divisao_n (){  //INICIO DO EXERCÍCIO DE DIVISÃO

    do {

	int n, i = 0, resultado, divisao, valor; //COLOCANDO AS VARIAVEIS

    menu_simples(); //COLOCANDO MENU

    printf("Digite a quantidade de vezes que deseja dividir: "); //SAIDA DE DADOS
    scanf("%d", &n); //ENTRADA DE DADOS
    printf("\n"); //SAIDA DE DADOS

    while (i < n){

    	printf("Digite o valor a ser dividido: ") ;//SAIDA DE DADOS
   	    scanf("%d", &valor); //ENTRADA DE DADOS

        i = i + 1; // CONTADOR

        valor = (valor * -1); //TRANSFORMANDO O VALOR EM POSITIVO, POIS O VALOR ESTAVA ENTRANDO NEGATIVO

        divisao = divisao - valor; //CALCULO
        resultado = divisao / n; //CALCULO

        }

        printf("\n[*] O valor da divisão é %d\n", resultado); //SAIDA DE DADOS

    } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

    system("cls | clear"); //LIMPAR TELA

} //TERMINO DO EXERCÍCIO DE DIVISÃO












void multiplicacao_n (){  //INICIO DO EXERCÍCIO DE MULTIPLICAÇÃO

    do {

  int n, i = 0, resultado, multiplicacao, valor; //COLOCANDO AS VARIAVEIS

    menu_simples(); //COLOCANDO MENU

    printf("\nDigite a quantidade de vezes que deseja multiplicar: "); //SAIDA DE DADOS
    scanf("%d", &n); //ENTRADA DE DADOS
    printf("\n"); //SAIDA DE DADOS

    while (i < n){

        printf("Digite o valor a ser multiplicado: ") ;//SAIDA DE DADOS
        scanf("%d", &valor); //ENTRADA DE DADOS

        i = i + 1; // CONTADOR

        valor = (valor * -1); //TRANSFORMANDO O VALOR EM POSITIVO, POIS O VALOR ESTAVA ENTRANDO NEGATIVO

        multiplicacao = multiplicacao - valor; //CALCULO
        resultado = multiplicacao * n; //CALCULO

        }

        printf("\n[*] O valor da multiplicação é %d", resultado); //SAIDA DE DADOS

    } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

    system("cls | clear"); //LIMPAR TELA

} //TERMINO DO EXERCÍCIO DE MULTIPLICAÇÃO











void seno (){  //INICIO DO EXERCÍCIO DE SENO

    do {

        double seno = 0; //COLOCANDO AS VARIAVEIS
        float x = 0; //COLOCANDO AS VARIAVEIS

        menu_simples(); //COLOCANDO MENU

        printf("\nDigite o Angulo: "); //SAIDA DE DADOS
        scanf("%f", &x); //ENTRADA DE DADOS

        printf("\n"); //ESSE \N FOI COLOCADO PARA ESTÉTICA, NÃO DAVA PARA POR NO PRINTF POIS FICAVA ESTRANHO

        seno = sin(x); //VARIAVEL SENO ARMAZENARA VALOR DE SENO DE X

        printf("[*] valor de seno de %0.f = %.15f", x, seno); //SAIDA DE DADOS

    } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

    system("cls | clear"); //LIMPAR TELA

} //TERMINO DO EXERCÍCIO DE SENO









void cosseno (){  //INICIO DO EXERCÍCIO DE COSSENO

    do {

        double cosseno = 0; //COLOCANDO AS VARIAVEIS
        float x = 0; //COLOCANDO AS VARIAVEIS

        menu_simples(); //COLOCANDO MENU

        printf("\nDigite o Angulo: "); //SAIDA DE DADOS
        scanf("%f", &x); //ENTRADA DE DADOS

        printf("\n"); //ESSE \N FOI COLOCADO PARA ESTÉTICA, NÃO DAVA PARA POR NO PRINTF POIS FICAVA ESTRANHO

        cosseno = cos(x); //VARIAVEL COSSENO ARMAZENARA VALOR DE COSSENO DE X

        printf("[*] Valor de cosseno de %0.f = %.15f", x, cosseno); //SAIDA DE DADOS

        } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

    system("cls | clear"); //LIMPAR TELA

} //TERMINO DO EXERCÍCIO DE COSSENO















void tangente (){  //INICIO DO EXERCÍCIO DE TANGENTE

    do {

        double tangente = 0; //COLOCANDO AS VARIAVEIS
        float x = 0; //COLOCANDO AS VARIAVEIS

        menu_simples(); //COLOCANDO MENU

        printf("\nDigite o Angulo: "); //SAIDA DE DADOS
        scanf("%f", &x); //ENTRADA DE DADOS

        printf("\n"); //ESSE \N FOI COLOCADO PARA ESTÉTICA, NÃO DAVA PARA POR NO PRINTF POIS FICAVA ESTRANHO

        tangente = tan(x); //VARIAVEL TANGENTE ARMAZENARA VALOR DE TANGENTE DE X

        printf("[*] Valor de tangente de %0.f = %.15f", x, tangente); //SAIDA DE DADOS

        } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

    system("cls | clear"); //LIMPAR TELA

}//TERMINO DO EXERCÍCIO DE TANGENTE


















void potenciacao (){ //INICIO DO EXERCÍCIO DE POTENCIA

    do{

      int n, resultado, a; //COLOCANDO AS VARIAVEIS

      menu_simples(); //COLOCANDO MENU

      printf("\nDigite o expoente: "); //SAIDA DE DADOS
      scanf("%d", &n); //ENTRADA DE DADOS

      printf("\n"); //ESSE \N FOI COLOCADO PARA ESTÉTICA, NÃO DAVA PARA POR NO PRINTF POIS FICAVA ESTRANHO

      printf("Digite a base: "); //SAIDA DE DADOS
      scanf("%d", &a); //ENTRADA DE DADOS

      resultado = (a * n); //CALCULO

      printf("\n[*] O valor da potencia é %d\n", resultado); //SAIDA DE DADOS COM O RESULTADO FINAL

    } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

    system("cls | clear"); //LIMPAR TELA

} //FINAL DO EXERCÍCIO DE POTENCIA











void logaritmos(){  //INICIO DO EXERCÍCIO DE LOGARITMO

    do {

        double logaritmo_base10 = 0; //COLOCANDO AS VARIAVEIS
        float x = 0; //COLOCANDO AS VARIAVEIS

        menu_simples(); //COLOCANDO MENU

        printf("\nDigite o valor: "); //SAIDA DE DADOS
        scanf("%f", &x); //ENTRADA DE DADOS

        printf("\n"); //ESSE \N FOI COLOCADO PARA ESTÉTICA, NÃO DAVA PARA POR NO PRINTF POIS FICAVA ESTRANHO

        logaritmo_base10 = log10(x); //VARIAVEL LOGARITMO ARMAZENARA VALOR DE LOGARITMO DE X

        printf("Valor de Logaritmo de %0.f = %.15f", x, logaritmo_base10); //SAIDA DE DADOS

        } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

    system("cls | clear"); //LIMPAR TELA

}//TERMINO DO EXERCÍCIO DE LOGARITMO


















void raiz_quadrada (){ //INICIO DO EXERCÍCIO DE RAIZ QUADRADA

    do{

      float raiz; //COLOCANDO AS VARIAVEIS

      menu_simples(); //COLOCANDO MENU

      printf("Digite a √: "); //SAIDA DE DADOS
      scanf("%f", &raiz); //ENTRADA DE DADOS

      printf("\n"); //ESSE \N FOI COLOCADO PARA ESTÉTICA, NÃO DAVA PARA POR NO PRINTF POIS FICAVA ESTRANHO

      printf("\n[*] O valor da raiz quadrada é %0.f\n",pow(raiz,(0.5/1))); //SAIDA DE DADOS COM O RESULTADO FINAL

    } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

    system("cls | clear"); //LIMPAR TELA

} //FINAL DO EXERCÍCIO DE RAIZ QUADRADA












void media (){  //INICIO DO EXERCÍCIO DE MEDIA

    do {

        float medias=0, media=0, n=0, vet[500], desvio, soma, variancia; //COLOCANDO VARIAVEIS
        int i=0; //COLOCANDO VARIAVEIS

        menu_simples(); //COLOCANDO MENU

        printf("\nDigite a quantidade de elementos: "); //SAIDA DE DADOS
        scanf("%f",&n); //ENTRADA DE DADOS

        printf("\n"); //ESSE \N FOI COLOCADO PARA ESTÉTICA, NÃO DAVA PARA POR NO PRINTF POIS FICAVA ESTRANHO

                for(i=1; i <= n; i++){

                    printf("Digite o elemento %d do conjunto: ", i); //SAIDA DE DADOS
                    scanf("%f", &vet[i]); //ENTRADA DE DADOS

                    medias = medias + vet[i]; //CALCULO DA MEDIA
                    media = medias / n; //CALCULO DA MEDIA

                }

            printf("\n[*] Sua Media é = %0.1f", media); //IMPRIMINDO A MEDIA

        } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

     system("cls | clear"); //LIMPAR TELA

} //TERMINO DO EXERCÍCIO DE MEDIA













void variancia (){  //INICIO DO EXERCÍCIO DE VARIANCIA

    do {

        float medias=0, media=0, n=0, vet[500], desvio, soma, variancia; //COLOCANDO VARIAVEIS
        int i=0; //COLOCANDO VARIAVEIS

        menu_simples(); //COLOCANDO MENU

        printf("\nDigite a quantidade de elementos: "); //SAIDA DE DADOS
        scanf("%f",&n); //ENTRADA DE DADOS

        printf("\n"); //ESSE \N FOI COLOCADO PARA ESTÉTICA, NÃO DAVA PARA POR NO PRINTF POIS FICAVA ESTRANHO

                for(i=1; i <= n; i++){

                    printf("Digite o elemento %d do conjunto: ", i); //SAIDA DE DADOS
                    scanf("%f", &vet[i]); //ENTRADA DE DADOS

                    medias = medias + vet[i]; //CALCULO DA MEDIA
                    media = medias / n; //CALCULO DA MEDIA

                }

                for(i=1; i <=n ; i++){

                   soma = (soma + (vet[i] - media) * (vet[i] - media)); //CALCULO DA SOMA

                }

            variancia = soma / n; //CALCULO DE VARIANCIA

            printf("\n[*] Sua Variancia é = %0.2f", variancia); //IMPRIMINDO A VARIANCIA

        } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

     system("cls | clear"); //LIMPAR TELA

} //TERMINO DO EXERCÍCIO DE VARIANCIA













void desvio_padrao (){  //INICIO DO EXERCÍCIO DE DESVIO PADRÃO

    do {

        float medias=0, media=0, n=0, vet[500], desvio, soma, variancia; //COLOCANDO VARIAVEIS
        int i=0; //COLOCANDO VARIAVEIS

        menu_simples(); //COLOCANDO MENU

        printf("\nDigite a quantidade de elementos: "); //SAIDA DE DADOS
        scanf("%f",&n); //ENTRADA DE DADOS

        printf("\n"); //ESSE \N FOI COLOCADO PARA ESTÉTICA, NÃO DAVA PARA POR NO PRINTF POIS FICAVA ESTRANHO

                for(i=1; i <= n; i++){

                    printf("Digite o elemento %d do conjunto: ", i); //SAIDA DE DADOS
                    scanf("%f", &vet[i]); //ENTRADA DE DADOS

                    medias = medias + vet[i]; //CALCULO DA MEDIA
                    media = medias / n; //CALCULO DA MEDIA

                }

                for(i=1; i <=n ; i++){

                   soma = (soma + (vet[i] - media) * (vet[i] - media)); //CALCULO DA SOMA

                }

            variancia = soma / n; //CALCULO DE VARIANCIA

            desvio = sqrt(variancia); //CALCULO DE DESVIO PADRÃO

            printf("\n[*] Seu Desvio Padrão é =  %0.6f", desvio); //IMPRIMINDO DESVIO

        } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

     system("cls | clear"); //LIMPAR TELA

} //TERMINO DO EXERCÍCIO DE DESVIO PADRÃO

















int maior_menor() { //INICIO DO EXERCÍCIO DE MAIOR MENOR

do {

    int i = 0; //COLOCANDO VARIAVEIS
    float maior = 0, num = 0, menor = 0; //COLOCANDO VARIAVEIS
    char c; //COLOCANDO VARIAVEIS

    menu_simples(); //COLOCANDO MENU

    printf("\nDigite um valor ou 'p' para parar e verificar: "); //SAIDA DE DADOS
    scanf("%f",&menor); //ENTRADA DE DADOS
          
    for(i = 0; c!='p'; i++){
            
        printf("Digite um valor ou 'p' para parar e verificar: "); //SAIDA DE DADOS
        scanf("%f",&num); //ENTRADA DE DADOS 

        c = getchar(); //FUNÇÃO
          
          if(num > maior){

              maior = num;

          }
          
          if(num < menor){

            menor = num;

        }

    }

    printf("\n"); //ESSE \N FOI COLOCADO PARA ESTÉTICA, NÃO DAVA PARA POR NO PRINTF POIS FICAVA ESTRANHO

    printf("[*] O maior número é %f\n", maior); //SAIDA DE DADOS
    printf("[*] O menor número é %f\n", menor); //SAIDA DE DADOS

   } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

    system("cls | clear"); //LIMPAR TELA

} //FINAL DO EXERCÍCIO DE MAIOR MENOR













int soma_vetores (){ //INICIO DO EXERCÍCIO DE SOMA DE VETORES

    do {

    int vet1[1000], vet2[1000], vet3[1000], ct, i; //ct=variavel acrescentada

    menu_simples(); //COLOCANDO MENU

    printf("\nDigite a quantidade de vetores: "); // SAIDA DE DADOS
    scanf("%d", &ct); //ENTRADA DE DADOS

        for (i=0; i < ct; i++){

            printf("Digite o Valor do Vetor 1: ");
            scanf("%d", &vet1[i]);  //ARMAZENAMENTO DE VETOR 1 NA POSICAO I
        }
        
        for (i=0; i<ct; i++){

            printf("Digite o Valor do Vetor 2: ");  //SAIDA DE DADOS
            scanf("%d", &vet2[i]);  // ARMAZENAMENTO DE VETOR 2 NA POSICAO I
        }   

        for(i=0; i<ct; i++){

            vet3[i] = vet1[i] + vet2[i];    //SOMA DOS VETORES 1 E 2 NA POSICAO I
        }

            printf("\n[*] Resultado: "); //SAIDA DE DADOS

        for(i=0; i < ct; i++){

            printf("%d ", vet3[i]); //SAIDA DE DADOS

            if(i < ct-1){

                printf("e "); //SAIDA DE DADOS
            }

        } 

    }while(continuar_sair() == 1);
    
    system("cls | clear");  

} //FINAL DO EXERCÍCIO DE SOMA DE VETORES


















int divisao_vetores (){ //INICIO DO EXERCÍCIO DE DIVISÃO DE VETORES

    do {

    int vet1[1000], vet2[1000], vet3[1000], ct, i; //COLOCANDO AS VARIAVEIS

    menu_simples(); //COLOCANDO MENU

    printf("\nDigite a quantidade de vetores: "); // SAIDA DE DADOS
    scanf("%d", &ct); //ENTRADA DE DADOS

        for (i=0; i < ct; i++){

            printf("Digite o Valor do Vetor 1: ");
            scanf("%d", &vet1[i]);  //ARMAZENAMENTO DE VETOR 1 NA POSICAO I
        }
        
        for (i=0; i<ct; i++){

            printf("Digite o Valor do Vetor 2: ");  //SAIDA DE DADOS
            scanf("%d", &vet2[i]);  // ARMAZENAMENTO DE VETOR 2 NA POSICAO I
        }   

        for(i=0; i<ct; i++){

            vet3[i] = vet1[i] / vet2[i];    //DIVISÃO DOS VETORES 1 E 2 NA POSICAO I
        }

            printf("\n[*] Resultado: "); //SAIDA DE DADOS

        for(i=0; i < ct; i++){

            printf("%d ", vet3[i]); //SAIDA DE DADOS

            if(i < ct-1){

                printf("e "); //SAIDA DE DADOS
            }

        } 

    }while(continuar_sair() == 1);
    
    system("cls | clear");  

} //FINAL DO EXERCÍCIO DE DIVISÃO DE VETORES


















int multiplicacao_vetores (){ //INICIO DO EXERCÍCIO DE MULTIPLICAÇÃO DE VETORES

    do {

    int vet1[1000], vet2[1000], vet3[1000], ct, i; //COLOCANDO AS VARIAVEIS

    menu_simples(); //COLOCANDO MENU

    printf("\nDigite a quantidade de vetores: "); // SAIDA DE DADOS
    scanf("%d", &ct); //ENTRADA DE DADOS

        for (i=0; i < ct; i++){

            printf("Digite o Valor do Vetor 1: ");
            scanf("%d", &vet1[i]);  //ARMAZENAMENTO DE VETOR 1 NA POSICAO I
        }
        
        for (i=0; i<ct; i++){

            printf("Digite o Valor do Vetor 2: ");  //SAIDA DE DADOS
            scanf("%d", &vet2[i]);  // ARMAZENAMENTO DE VETOR 2 NA POSICAO I
        }   

        for(i=0; i<ct; i++){

            vet3[i] = vet1[i] * vet2[i];    //MULTIPLICAÇÃO DOS VETORES 1 E 2 NA POSICAO I
        }

            printf("\n[*] Resultado: "); //SAIDA DE DADOS

        for(i=0; i < ct; i++){

            printf("%d ", vet3[i]); //SAIDA DE DADOS

            if(i < ct-1){

                printf("e "); //SAIDA DE DADOS
            }

        } 

    }while(continuar_sair() == 1);
    
    system("cls | clear");  

} //FINAL DO EXERCÍCIO DE MULTIPLICAÇÃO DE VETORES
















int subtracao_vetores (){ //INICIO DO EXERCÍCIO DE SUBTRAÇÃO DE VETORES

    do {

    int vet1[1000], vet2[1000], vet3[1000], ct, i; //COLOCANDO AS VARIAVEIS

    menu_simples(); //COLOCANDO MENU

    printf("\nDigite a quantidade de vetores: "); // SAIDA DE DADOS
    scanf("%d", &ct); //ENTRADA DE DADOS

        for (i=0; i < ct; i++){

            printf("Digite o Valor do Vetor 1: ");
            scanf("%d", &vet1[i]);  //ARMAZENAMENTO DE VETOR 1 NA POSICAO I
        }
        
        for (i=0; i<ct; i++){

            printf("Digite o Valor do Vetor 2: ");  //SAIDA DE DADOS
            scanf("%d", &vet2[i]);  // ARMAZENAMENTO DE VETOR 2 NA POSICAO I
        }   

        for(i=0; i<ct; i++){

            vet3[i] = vet1[i] - vet2[i];    //SUBTRAÇÃO DOS VETORES 1 E 2 NA POSICAO I
        }

            printf("\n[*] Resultado: "); //SAIDA DE DADOS

        for(i=0; i < ct; i++){

            printf("%d ", vet3[i]); //SAIDA DE DADOS

            if(i < ct-1){

                printf("e "); //SAIDA DE DADOS
            }

        } 

    }while(continuar_sair() == 1);
    
    system("cls | clear");  

} //FINAL DO EXERCÍCIO DE SUBTRAÇÃO DE VETORES













void radianos_graus(){ //INICIO DO EXERCÍCIO DE RADIANOS PARA GRAUS

  do {
      
      int Ops = 0; //COLOCANDO VARIAVEIS
      float G = 0, R = 0; //COLOCANDO VARIAVEIS

      menu_simples(); //COLOCANDO MENU

      printf("\n1- Conversão de Graus para Radianos\n"); //SAIDA DE DADOS
      printf("2- Conversão de Radianos para Graus\n\n"); //SAIDA DE DADOS

      printf("Digite a opção desejada (Número): "); //SAIDA DE DADOS
      scanf("%i",&Ops); //ENTRADA DE DADOS
      
      if(Ops >= 1 && Ops <= 2){
        
          switch (Ops){

            case 1:

                  printf("\nDigite o valor do Grau: "); //SAIDA DE DADOS
                  scanf("%f",&G); //ENTRADA DE DADOS

                  R = ((G/180)*3.14); //CALCULO
                
                  printf("\n[*] Valor em Radianos: %f", R); //SAIDA DE DADOS

                break;

            case 2:

                  printf("\nDigite o valor em Radianos: "); //SAIDA DE DADOS
                  scanf("%f",&R); //ENTRADA DE DADOS

                  G = ((R * 180)/3.14); //CALCULO

                  printf("\n[*] Valor em Graus: %f", G); //SAIDA DE DADOS

                break;
                
            default:

                printf("Comando inválido"); //SAIDA DE DADOS
                
          }
          
      }

      } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

      system("cls | clear"); //LIMPAR TELA

} //FINAL DO EXERCÍCIO DE RADIANOS PARA GRAUS



















void numeros_aleatorios (){ //INICIO DO EXERCÍCIO DE NUMEROS ALEATORIOS

    do {

        int i, n; //COLOCANDO AS VARIAVEIS

        menu_simples(); //COLOCANDO MENU

        printf("Digite a quantidade de numeros que será gerados: "); //SAIDA DE DADOS
        scanf("%d", &n); //ENTRADA DE DADOS

        printf("\n"); //ESSE \N FOI COLOCADO PARA ESTÉTICA, NÃO DAVA PARA POR NO PRINTF POIS FICAVA ESTRANHO

           for (i = 0; i < n; i++){

                printf("%d ", rand() % 10); //GERANDO N NUMEROS

            }


    } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

    system("cls | clear"); //LIMPAR TELA

} //FINAL DO EXERCÍCIO DE NUMEROS ALEATORIOS
















void celsius_fahrenheit_kelvin(){ //INICIO DO EXERCÍCIO DE CELCIUS FAHRENHEIT KELVIN

  do {
      
      int Ops = 0; //COLOCANDO VARIAVEIS
      float C = 0, F = 0, K = 0; //COLOCANDO VARIAVEIS

      menu_simples(); //COLOCANDO MENU

      printf("\n1- Celsius\n"); //SAIDA DE DADOS
      printf("2- Fahrenheit\n"); //SAIDA DE DADOS
      printf("3- Kelvin\n"); //SAIDA DE DADOS
      printf("\nDigite a temperatura inicial desejada (Número): "); //SAIDA DE DADOS
      scanf("%i",&Ops); //ENTRADA DE DADOS
      
      if (Ops >= 1 && Ops <= 3) {
           
          switch (Ops){

            case 1:

                  printf("\nDigite a temperatura em Celsius: ");  //SAIDA DE DADOS
                  scanf("%f",&C); //ENTRADA DE DADOS

                  F = ((C*1.8)+32); //CALCULO
                  K = (C+273); //CALCULO

                  printf("\n[*] A temperatura em Fahrenheit é de: %2.1f \n",F); //SAIDA DE DADOS
                  printf("[*] A temperatura em Kelvin é de: %2.1f",K); //SAIDA DE DADOS

                break;

            case 2:

                    printf("\nDigite a temperatura em Fahrenheit: "); //SAIDA DE DADOS
                    scanf("%f",&F); //ENTRADA DE DADOS

                    C = ((F - 32)/1.8); //CALCULO
                    K = (((F-32)/1.8)+273); //CALCULO

                    printf("\n[*] A temperatura em Celsius é de: %2.1f \n",C); //SAIDA DE DADOS
                    printf("[*] A temperatura em Kelvin é de: %2.1f",K); //SAIDA DE DADOS
                    
                break;

            case 3:

                  printf("\nDigite a temperatura em Kelvin: "); //SAIDA DE DADOS
                  scanf("%f",&K); //ENTRADA DE DADOS

                  F = (((K - 273)*1.8)+32); //CALCULO
                  C = (K - 273); //CALCULO

                  printf ("\n[*] A temperatura em Fahrenheit é de: %2.1f \n",F); //SAIDA DE DADOS
                  printf ("[*] A temperatura em Celsius é de: %2.1f",C); //SAIDA DE DADOS
                  
                break;
                  
            default:
                
                printf("Comando inválido"); //SAIDA DE DADOS

          }

      }

   } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

    system("cls | clear"); //LIMPAR TELA

} //FINAL DO EXERCÍCIO DE CELCIUS FAHRENHEIT KELVIN
















void medidas_computacionais (){ //INICIO DO EXERCÍCIO DE CONVERSÃO DE MEDIDAS COMPUTACIONAIS

    do {

        int opcao, m=1024;
        float qtd; //COLOCANDO AS VARIAVEIS

        menu_simples(); //COLOCANDO MENU

        printf("Digite sua unidade de media conforme as opções abaixo:\n\n"); //SAIDA DE DADOS

        printf("1. KByte\n"); //SAIDA DE DADOS
        printf("2. MByte\n"); //SAIDA DE DADOS
        printf("3. GByte\n"); //SAIDA DE DADOS
        printf("4. TByte\n"); //SAIDA DE DADOS
        printf("5. PByte\n"); //SAIDA DE DADOS
        printf("6. EByte\n"); //SAIDA DE DADOS
        printf("7. ZByte\n"); //SAIDA DE DADOS
        printf("8. YByte\n\n"); //SAIDA DE DADOS

        printf("[*] Escolha uma opção: "); //SAIDA DE DADOS
        scanf("%d", &opcao); //ENTRADA DE DADOS

        printf("\nDigite a quantidade: ");
        scanf("%f", &qtd);


        switch (opcao) {

            case 01: //VALOR EM KB

                    printf("\n\n");
                    printf("KByte: %0.18f | ", qtd);
                    printf("MByte: %0.20f | ", qtd/m);
                    printf("GByte: %0.30f | ", (qtd/m)/m);
                    printf("TByte: %0.40f | ", ((qtd/m)/m)/m);
                    printf("\n\n");
                    printf("PByte: %0.20f | ", (((qtd/m)/m)/m)/m);
                    printf("EByte: %0.20f | ", ((((qtd/m)/m)/m)/m)/m);
                    printf("ZByte: %0.30f | ", (((((qtd/m)/m)/m)/m)/m)/m);
                    printf("YByte: %0.40f | ", ((((((qtd/m)/m)/m)/m)/m)/m)/m);

                break;

            case 02: //VALOR EM MB

                    printf("\n\n");
                    printf("KByte: %0.15f | ", qtd*m);
                    printf("MByte: %0.18f | ", qtd);
                    printf("GByte: %0.30f | ", qtd/m);
                    printf("TByte: %0.40f | ", (qtd/m)/m);
                    printf("\n\n");
                    printf("PByte: %0.20f | ", ((qtd/m)/m)/m);
                    printf("EByte: %0.20f | ", (((qtd/m)/m)/m)/m);
                    printf("ZByte: %0.30f | ", ((((qtd/m)/m)/m)/m)/m);
                    printf("YByte: %0.40f | ", (((((qtd/m)/m)/m)/m)/m)/m);

                break;

            case 03: //VALOR EM GB

                    printf("\n\n");
                    printf("KByte: %0.17f | ", qtd*m);
                    printf("MByte: %0.12f | ", (qtd*m)*m);
                    printf("GByte: %0.28f | ", qtd);
                    printf("TByte: %0.40f | ", qtd/m);
                    printf("\n\n");
                    printf("PByte: %0.22f | ", (qtd/m)/m);
                    printf("EByte: %0.20f | ", ((qtd/m)/m)/m);
                    printf("ZByte: %0.30f | ", (((qtd/m)/m)/m)/m);
                    printf("YByte: %0.40f | ", ((((qtd/m)/m)/m)/m)/m);
                    
                break;

            case 04: //VALOR EM TB

                    printf("\n\n");
                    printf("KByte: %0.15f | ", qtd*m);
                    printf("MByte: %0.12f | ", (qtd*m)*m);
                    printf("GByte: %0.19f | ", ((qtd*m)*m)*m);
                    printf("TByte: %0.38f | ", qtd);
                    printf("\n\n");
                    printf("PByte: %0.20f | ", qtd/m);
                    printf("EByte: %0.20f | ", (qtd/m)/m);
                    printf("ZByte: %0.30f | ", ((qtd/m)/m)/m);
                    printf("YByte: %0.40f | ", (((qtd/m)/m)/m)/m);
                    
                break;

            case 05: //VALOR EM PB

                    printf("\n\n");
                    printf("KByte: %0.17f | ", qtd*m);
                    printf("MByte: %0.12f | ", (qtd*m)*m);
                    printf("GByte: %0.19f | ", ((qtd*m)*m)*m);
                    printf("TByte: %0.26f | ", (((qtd*m)*m)*m)*m);
                    printf("\n\n");
                    printf("PByte: %0.20f | ", qtd);
                    printf("EByte: %0.20f | ", qtd/m);
                    printf("ZByte: %0.30f | ", (qtd/m)/m);
                    printf("YByte: %0.40f | ", ((qtd/m)/m)/m);
                    
                break;

            case 06: //VALOR EM EB

                    printf("\n\n");
                    printf("KByte: %0.22f | ", qtd*m);
                    printf("MByte: %0.12f | ", (qtd*m)*m);
                    printf("GByte: %0.17f | ", ((qtd*m)*m)*m);
                    printf("TByte: %0.24f | ", (((qtd*m)*m)*m)*m);
                    printf("\n\n");
                    printf("PByte: %0.10f | ", ((((qtd*m)*m)*m)*m)*m);
                    printf("EByte: %0.18f | ", qtd);
                    printf("ZByte: %0.28f | ", qtd/m);
                    printf("YByte: %0.38f | ", (qtd/m)/m);
                    
                break;

            case 07: //VALOR EM ZB

                    printf("\n\n");
                    printf("KByte: %0.18f | ", qtd*m);
                    printf("MByte: %0.25f | ", (qtd*m)*m);
                    printf("GByte: %0.14f | ", ((qtd*m)*m)*m);
                    printf("TByte: %0.19f | ", (((qtd*m)*m)*m)*m);
                    printf("\n\n");
                    printf("PByte: %0.6f | ", ((((qtd*m)*m)*m)*m)*m);
                    printf("PByte: %0.13f | ", (((((qtd*m)*m)*m)*m)*m)*m);
                    printf("ZByte: %0.23f | ", qtd);
                    printf("YByte: %0.33f | ", qtd/m);
                    
                break;

            case 010: //VALOR EM YB

                    printf("\n\n");
                    printf("KByte: %0.18f | ", qtd*m);
                    printf("MByte: %0.20f | ", (qtd*m)*m);
                    printf("GByte: %0.30f | ", ((qtd*m)*m)*m);
                    printf("TByte: %0.12f | ", (((qtd*m)*m)*m)*m);
                    printf("\n\n");
                    printf("PByte: %0f | ", ((((qtd*m)*m)*m)*m)*m);
                    printf("PByte: %0.10f | ", (((((qtd*m)*m)*m)*m)*m)*m);
                    printf("ZByte: %0.15f | ", ((((((qtd*m)*m)*m)*m)*m)*m)*m);
                    printf("YByte: %0.25f | ", qtd);
                    
                break;

        }



    } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

    system("cls | clear"); //LIMPAR TELA

} //FINAL DO EXERCÍCIO DE CONVERSÃO DE MEDIDAS COMPUTACIONAIS












void juros_simples (){ //INICIO DO EXERCÍCIO DE JUROS SIMPLES

    do {

        float i, iporcento, juros, c, t; //COLOCANDO AS VARIAVEIS


        menu_simples(); //COLOCANDO MENU

        printf("Digite o capital: "); //SAIDA DE DADOS
        scanf("%f", &c); //ENTRADA DE DADOS

        printf("Digite a taxa de juros [em porcentagem ao ano]: "); //SAIDA DE DADOS
        scanf("%f", &i); //ENTRADA DE DADOS 

        printf("Digite o tempo [em anos]: "); //SAIDA DE DADOS
        scanf("%f", &t); //ENTRADA DE DADOS

        iporcento = (i/100); //TRANSFORMANDO PORCENTAGEM EM DECIMAL

        juros = (c * iporcento * t); //CALCULO

        printf("[*] O valor do juros simples é %0.2f", juros); //SAIDA DE DADOS


    } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

    system("cls | clear"); //LIMPAR TELA

} //FINAL DO EXERCÍCIO DE jUROS SIMPLES

















void porcentagem (){ //INICIO DO EXERCÍCIO DE PORCENTAGEM

    do {

        float valor, porcentagem; //COLOCANDO AS VARIAVEIS

        menu_simples(); //COLOCANDO MENU

            printf("Digite o valor a em porcentagem: "); //SAIDA DE DADOS
            scanf("%f", &valor); //ENTRADA DE DADOS

			porcentagem = valor/100;//CALCULO

            printf("\n[*] O valor em decimal é %0.1f\n", porcentagem);  //SAIDA DE DADOS COM O RESULTADO FINAL

    } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

    system("cls | clear"); //LIMPAR TELA

} //FINAL DO EXERCÍCIO DE PORCENTAGEM





















void area_comprimento (){ //INICIO DO EXERCÍCIO DE AREA E COMPRIMENTO

    do {

        float comprimento, raio, perimetro, area, pi=3.14; //COLOCANDO AS VARIAVEIS

        menu_simples(); //COLOCANDO MENU

        printf("[+] Calculando a area do circulo\n\n"); //SAIDA DE DADOS

        printf("Digite o Raio: "); //SAIDA DE DADOS
        scanf("%f", &raio); //ENTRADA DE DADOS

        area = (pi * (raio * raio)); //CALCULO

        printf("\nA area do circulo é: %0.2f", area); //SAIDA DE DADOS


        printf("\n\n[+] Calculando o perimetro do circulo\n\n"); //SAIDA DE DADOS

        printf("Digite o Raio: "); //SAIDA DE DADOS
        scanf("%f" ,&raio); //ENTRADA DE DADOS

        perimetro = ((2 * pi) * raio); //CALCULO

        printf("\nO perimetro do circulo é: %0.2f", perimetro); //SAIDA DE DADOS

        } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

        system("cls | clear"); //LIMPAR TELA

} //FINAL DO EXERCÍCIO DE AREA E COMPRIMENTO




















void arredondamento (){ //INICIO DO EXERCÍCIO DE ARREDONDAMENTO

    do {

        menu_simples(); //COLOCANDO MENU

        float valor=0; //COLOCANDO AS VARIAVEIS

            printf("Digite o valor a ser arredondado: "); //SAIDA DE DADOS
            scanf("%f", &valor); //ENTRADA DE DADOS

            printf("\n[*] O valor arredondado é %0.f\n", valor);  //SAIDA DE DADOS COM O RESULTADO FINAL

    } while(continuar_sair() == 1); // COLOCANDO O MENU FINAL ( VOLTAR AO EXERCICIO, SAIR, VOLTAR AO MENU)

    system("cls | clear"); //LIMPAR TELA

} //FINAL DO EXERCÍCIO DE ARREDONDAMENTO












int main() //INICIANDO O PROGRAMA
{

	int opcao; //COLOCANDO AS VARIAVEIS

	setlocale(LC_ALL,"Portuguese"); //COLOCANDO O IDIOMA
	system("cls || clear"); //LIMPAR TELA

    do{

    //INICIO DO MENU

    printf("\n\n\n");
    printf("                                          █████╗ ██╗      ██████╗  ██████╗ ██████╗ ██╗████████╗███╗   ███╗ ██████╗ ███████╗\n");
    printf("                                         ██╔══██╗██║     ██╔════╝ ██╔═══██╗██╔══██╗██║╚══██╔══╝████╗ ████║██╔═══██╗██╔════╝\n");
    printf("                                         ███████║██║     ██║  ███╗██║   ██║██████╔╝██║   ██║   ██╔████╔██║██║   ██║███████╗\n");
    printf("                                         ██╔══██║██║     ██║   ██║██║   ██║██╔══██╗██║   ██║   ██║╚██╔╝██║██║   ██║╚════██║\n");
    printf("                                         ██║  ██║███████╗╚██████╔╝╚██████╔╝██║  ██║██║   ██║   ██║ ╚═╝ ██║╚██████╔╝███████║\n");
    printf("                                         ╚═╝  ╚═╝╚══════╝ ╚═════╝  ╚═════╝ ╚═╝  ╚═╝╚═╝   ╚═╝   ╚═╝     ╚═╝ ╚═════╝ ╚══════╝\n\n\n");
    printf("                                                                                                                         [-] Programador: Thiago Ribeiro\n\n");


		printf("  01. Adição de N números 		 			16. Soma de matrizes\n");
		printf("  02. Subtração de N números	 				17. Divisão de matrizes\n");
		printf("  03. Divisão de N numeros		 			18. Multiplicação de matrizes\n");
		printf("  04. Multiplicação de N numeros 				19. Subtração de matrizes\n");
		printf("  05. Seno		 					20. Conversão de radianos para graus e graus para radianos \n");
		printf("  06. Cosseno	 						21. Gerar números aleatórios\n");
		printf("  07. Tangente	 						22. Conversão entre Celsius, fahrenheit e kelvin\n");
		printf("  08. Potenciação						23. Conversão entre KByte, GByte, TByte, PByte, EByte, ZByte e YByte\n");
		printf("  09. Logaritimo 	 					24. Cálculo de juros simples\n");
		printf("  10. Raiz quadrada						25. Porcentagem\n");
		printf("  11. Media							26. Área, raio e perímetro de um circulo\n");
		printf("  12. Variância							27. Área e perímetro de uma figura de N lados (até N menor ou igual á 6)\n");
		printf("  13. Desvio Padrão						28. Uma função que o grupo irá implementar que envolva laços e matrizes diferente das anteriores\n");
		printf("  14. Maior e menor número de um Conjunto			29. Arredondar números\n");
		printf("  15. Moda\n\n");

        printf("  00. Para sair programa\n\n");

        printf("  [*] Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao)
        {

            case 01:
            	   adicao_n(); //CHAMANDO A FUNÇÃO

            	break;

            case 02:
            		subtracao_n(); //CHAMANDO A FUNÇÃO

            	 break;

            case 03:
            		divisao_n(); //CHAMANDO A FUNÇÃO

                break;

            case 04:
            		multiplicacao_n(); //CHAMANDO A FUNÇÃO

                break;

            case 05:
            		seno(); //CHAMANDO A FUNÇÃO

                break;

            case 06:
            		cosseno(); //CHAMANDO A FUNÇÃO

                break;

            case 07:
            		tangente(); //CHAMANDO A FUNÇÃO

                break;

            case 010:
                     potenciacao(); //CHAMANDO A FUNÇÃO

                break;

             case 011:
            		  logaritmos(); //CHAMANDO A FUNÇÃO

                break;

            case 10:
                    raiz_quadrada(); //CHAMANDO A FUNÇÃO

                break;

            case 11:
            		media(); //CHAMANDO A FUNÇÃO

                break;

            case 12:
            		variancia();  //CHAMANDO A FUNÇÃO

                break;

            case 13:
            		desvio_padrao(); //CHAMANDO A FUNÇÃO

                break;

            case 14:
            		maior_menor();  //CHAMANDO A FUNÇÃO

                break;

            case 15:
            		//moda();  //CHAMANDO A FUNÇÃO

                break;

            case 16:
            		soma_vetores();  //CHAMANDO A FUNÇÃO

                break;

             case 17:
            		 divisao_vetores();  //CHAMANDO A FUNÇÃO

                break;

            case 18:
            		multiplicacao_vetores();  //CHAMANDO A FUNÇÃO

                break;

            case 19:
            		subtracao_vetores();  //CHAMANDO A FUNÇÃO

                break;

            case 20:
            		radianos_graus();  //CHAMANDO A FUNÇÃO

                break;

            case 21:
            		numeros_aleatorios();  //CHAMANDO A FUNÇÃO

                break;

            case 22:
            		celsius_fahrenheit_kelvin(); //CHAMANDO A FUNÇÃO

                break;

            case 23:
            		medidas_computacionais();  //CHAMANDO A FUNÇÃO

                break;

            case 24:
            		juros_simples();  //CHAMANDO A FUNÇÃO

                break;

            case 25:
		            porcentagem(); //CHAMANDO A FUNÇÃO

                break;

            case 26:
		            area_comprimento(); //CHAMANDO A FUNÇÃO

                break;

            case 27:
            		//area_perimetron(); //CHAMANDO A FUNÇÃO

                break;

            case 28:
            		menu_simples(); //CHAMANDO A FUNÇÃO

                break;

            case 29:
            		arredondamento(); //CHAMANDO A FUNÇÃO

                break;

            case 0:
        			exit(1); //SAINDO DO PROGRAMA
        		break;

            default:
                system("cls || clear"); //LIMPAR TELA
        }

    } while(opcao != 0);

        //TERMINO DO MENU

	return 0;
}
