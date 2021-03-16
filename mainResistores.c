//feito por:thiago rossi lazarin;
#include <stdio.h>
#include <locale.h>
 
typedef struct{
    float preto,marrom,vermelho,laranja,amarelo,verde,azul,violeta,cinza,branco,dourado,prateado;
} Cores;
 
int main(void){
    float op;
    setlocale(LC_ALL, "Portuguese");
    do{
        scanf("%d",&op);
        system("cls");
        printf("\t::::[TABELA DE CORES]::::");
        printf("\n\tPRETO : 0\tMARROM : 1\tVERMELHO : 2\n\tLARANJA : 3\tAMARELO : 4\tVERDE : 5\n\tAZUL : 6\tVIOLETA : 7\tCINZA : 8\n\tBRANCO : 9\tDOURADO : -\tPRATEADO : -");
         
        printf("\n\n\t::::[VALORES DOS MULTIPLICADORES]::::");
        printf("\n\tPRETO x1\tMARROM x10\tVERMELHO x100\n\tLARANJA x1K\tAMARELO x10K\tVERDE x100K\n\tAZUL x1M\tVIOLETA x10M\tCINZA x100M\n\tBRANCO x1Go\tDOURADO x0.1\tPRATEADO x0.01");
         
        printf("\n\n\t::::[VALORES DE TOLERANCIA]::::");
        printf("\n\tMARROM : 1%%\tVERMELHO : 2%%\tVERDE : 0.5%%\n\tAZUL : 0.25%%\tVIOLETA : 0.10%%\tCINZA : 0.05%%\n\tDOURADO : 5%%\tPRATEADO : 10%%");
         
        float valor1,valor2;
        float conc;
        float mult;
        float resultado;
        float juntos;
        float tol;
          
        Cores cores;
          
        cores.preto = 0 ;
        cores.marrom = 1;
        cores.vermelho = 2;
        cores.laranja = 3;
        cores.amarelo = 4;
        cores.verde = 5;
        cores.azul = 6;
        cores.violeta = 7;
        cores.cinza = 8;
        cores.branco = 9;
        cores.dourado = 10;
        cores.prateado = 11;
         
        printf("\n\nDigite o número da PRIMEIRA faixa de acordo com as cores: ");
        scanf("%f",&valor1);
          
        printf("Digite o número da SEGUNDA faixa de acordo com as cores: ");
        scanf("%f",&valor2);
         
        printf("Digite a MULTIPLICAÇÃO de acordo com as cores: ");
        scanf("%f",&mult);
         
        printf("Digite o valor de TOLERÂNCIA de acordo com as cores: ");
        scanf("%f",&tol);
         
        if(tol==1){
            scanf("1%%");
        }
        if(tol==2){
            scanf("2%%");
        }
        if(tol==5){
            scanf("0.5%%");
        }
        if(tol==6){
            scanf("0.25%%");
        }
        if(tol==7){
            scanf("0.10%%");
        }
        if(tol==8){
            scanf("0.05%%");
        }
        if(tol==10){
            scanf("5%%");
        }
        if(tol==11){
            scanf("10%%");
        }
         
        if(valor1 == 0 && valor2 == 1){ 
          
            conc = cores.preto * 10 + cores.marrom ;
 
        }
        if(valor1 == 1 && valor2 == 0){
             
            conc = cores.marrom * 10 + cores.preto;
      
        }
    //////////////////////////////////////////////////////////////////////////  
        if(valor1 == 2 && valor2 == 3){ 
            conc = cores.vermelho * 10 + cores.laranja;
        
        }
     
        if(valor1 == 3 && valor2 == 2){
            conc = cores.laranja * 10 + cores.vermelho;
      
        }
    /////////////////////////////////////////////////////////////////////////
        if(valor1 == 4 && valor2 == 5){
            conc = cores.amarelo * 10 + cores.verde ;
         
        }
         
        if(valor1 == 5 && valor2 == 4){
            conc = cores.verde *10 + cores.amarelo;
         
        }
    ///////////////////////////////////////////////////////////////////////    
        if(valor1 == 6 && valor2 == 7){
            conc = cores.azul * 10 + cores.violeta ;
     
        }
         
        if(valor1 == 7 && valor2 == 6){
            conc = cores.violeta * 10 + cores.azul;
         
        }
    /////////////////////////////////////////////////////////////////////////    
        if(valor1 == 8 && valor2 == 9){
            conc = cores.cinza * 10 + cores.branco ;
           
        }
        if(valor1 == 9 && valor2 == 8){
            conc = cores.branco * 10 + cores.cinza;
         
        }
    //////////////////////////////////////////////////////////////////////////
        if(valor1 == 9 && valor2 == 0){
            conc = cores.branco * 10 + cores.preto;
         
        }
        if(valor1 == 0 && valor2 == 9){
            conc = cores.preto * 10 + cores.branco;
             
        }
    ///////////////////////////////////////////////////////////////////////////
        if(valor1 == 9 && valor2 == 1){
            conc = cores.branco *10 + cores.marrom;
             
        }     
        if(valor1 == 1 && valor2 == 9){
            conc = cores.marrom *10 + cores.branco;
         
        }
    ///////////////////////////////////////////////////////////////////////////
        if(valor1 == 9 && valor2 == 2){
            conc = cores.branco *10 + cores.vermelho;
         
        }   
        if(valor1 == 2 && valor2 == 9){
            conc = cores.vermelho *10 + cores.branco;
             
        }
    ///////////////////////////////////////////////////////////////////////////
        if(valor1 == 9 && valor2 == 3){
            conc = cores.branco *10 + cores.laranja;
             
        }
        if(valor1 == 3 && valor2 == 9){
            conc = cores.laranja *10 + cores.branco;
             
        }
    ///////////////////////////////////////////////////////////////////////////
        if(valor1 == 9 && valor2 == 4){
            conc = cores.branco *10 + cores.amarelo;
         
        }
        if(valor1 == 4 && valor2 == 9){
            conc = cores.amarelo *10 + cores.branco;
         
        }
    /////////////////////////////////////////////////////////////////////////////
        if(valor1 == 9 && valor2 == 5){
            conc = cores.branco *10 + cores.verde;
         
        }   
        if(valor1 == 5 && valor2 == 9){
            conc = cores.verde *10 + cores.branco;
             
        }
    //////////////////////////////////////////////////////////////////////////////
        if(valor1 == 9 && valor2 == 6){
            conc = cores.branco *10 + cores.azul;
         
        }
        if(valor1 == 6 && valor2 == 9){
            conc = cores.azul *10 + cores.branco;
         
        }
    /////////////////////////////////////////////////////////////////////////////
        if(valor1 == 9 && valor2 == 7){
            conc = cores.branco *10 + cores.violeta;
         
        }
        if(valor1 == 7 && valor1 == 9){
            conc = cores.violeta *10 + cores.branco;
         
        }
    /////////////////////////////////////////////////////
        if(valor1 == 9 && valor2 == 9){
            conc = cores.branco *10 + cores.branco;
         
        }
    ///////////////////////////////////////////////////////////////
        if(valor1 == 8 && valor2 == 0){
            conc = cores.cinza *10 + cores.preto;
         
        }
        if(valor1 == 0 && valor2 == 8){
            conc = cores.preto *10 + cores.cinza;
         
        }
    ///////////////////////////////////////////////////////////////////////////////////
        if(valor1 == 8 && valor2 == 1){
            conc = cores.cinza *10 + cores.marrom;
         
        }   
        if(valor1 == 1 && valor2 == 8){
            conc = cores.marrom *10 + cores.cinza;
         
        }
    //////////////////////////////////////////////////////////////////////////////////
        if(valor1 == 8 && valor2 == 2){
            conc = cores.cinza *10 + cores.vermelho;
         
        }
        if(valor1 == 2 && valor2 == 8){
            conc = cores.vermelho *10 + cores.cinza;
         
        }   
    /////////////////////////////////////////////////////////////////////////////////
        if(valor1 == 8 && valor2 == 3){
            conc = cores.cinza *10 + cores.laranja;
         
        }   
        if(valor1 == 3 && valor2 == 8){
            conc = cores.laranja *10 + cores.cinza;
     
        }
    /////////////////////////////////////////////////////////////////////////////////
        if(valor1 == 8 && valor2 == 4){
            conc = cores.cinza *10 + cores.amarelo;
         
        }   
        if(valor1 == 4 && valor2 == 8){
            conc = cores.amarelo *10 + cores.cinza;
             
        }
    ////////////////////////////////////////////////////////////////////////////////    
        if(valor1 == 8 && valor2 == 5){
            conc = cores.cinza *10 + cores.verde;
         
        }
        if(valor1 == 5 && valor2 == 8){
            conc = cores.verde *10 + cores.cinza;
             
        }
    /////////////////////////////////////////////////////////////////////////////////
        if(valor1 == 8 && valor2 == 6){
            conc = cores.cinza *10 + cores.azul;
         
        }   
        if(valor1 == 6 && valor2 == 8){
            conc = cores.azul *10 + cores.cinza;
             
        }
    //////////////////////////////////////////////////////////////////////////////
        if(valor1 == 8  && valor2 == 7){
            conc = cores.cinza *10 + cores.violeta;
         
        }   
        if(valor1 == 7 && valor2 == 8){
            conc = cores.violeta *10 + cores.cinza;
             
        }
    ///////////////////////////////////////////////////////////////////////////
        if(valor1 == 8 && valor2 == 8){
            conc = cores.cinza *10 + cores.cinza;
         
        }
    ///////////////////////////////////////////////////////////////////////
        if(valor1 == 7 && valor2 == 0){
            conc = cores.violeta *10 + cores.preto;
         
        }
        if(valor1 == 0 && valor1 == 7){
            conc = cores.preto *10 + cores.violeta;
         
        }
    ////////////////////////////////////////////////////////////////////////////////
        if(valor1 == 7 && valor2 == 1){
            conc = cores.violeta *10 + cores.marrom;
        }   
        if(valor1 == 1 && valor2 == 7){
            conc = cores.marrom *10 + cores.violeta;
        }
    /////////////////////////////////////////////////////////////////////////////
        if(valor1 == 7 && valor2 == 2){
            conc = cores.violeta *10 + cores.vermelho;
        }   
        if(valor1 == 2 && valor2 == 7){
            conc = cores.vermelho *10 + cores.violeta;
        }
    /////////////////////////////////////////////////////////////////////////////
        if(valor1 == 7 && valor2 == 3){
            conc = cores.violeta *10 + cores.laranja;
        }
        if(valor1 == 3 && valor2 == 7){
            conc = cores.laranja *10 + cores.violeta;
        }
    ////////////////////////////////////////////////////////////////////////////
        if(valor1 == 7 && valor2 == 4){
            conc = cores.violeta *10 + cores.amarelo;
        }
        if(valor1 == 4 && valor1 == 7){
            conc = cores.amarelo *10 + cores.violeta;
        }   
    ///////////////////////////////////////////////////////////////////////////
        if(valor1 == 7 && valor2 == 5){
            conc = cores.violeta *10 + cores.verde;
        }   
        if(valor1 == 5 && valor2 == 7){
            conc = cores.verde *10 + cores.violeta;
        }
    /////////////////////////////////////////////////////////////////////////   
        if(valor1 == 7 && valor2 == 7){
            conc = cores.violeta *10 + cores.violeta;
        }
    /////////////////////////////////////////////////////////////////////////////////
        if(valor1 == 6 && valor2 == 0){
            conc = cores.azul *10 + cores.preto;
        }
        if(valor1 == 0 && valor2 == 6){
            conc = cores.preto *10 + cores.azul;
        }
    ////////////////////////////////////////////////////////////////////////////////////
        if(valor1 == 6 && valor2 == 1){
            conc = cores.azul *10 + cores.marrom;
        }
        if(valor1 == 1 && valor2 == 6){
            conc = cores.marrom *10 + cores.azul;
        }
    //////////////////////////////////////////////////////////////////////////////
        if(valor1 == 6 && valor2 == 2){
            conc = cores.azul *10 + cores.vermelho;
        }
        if(valor1 == 2 && valor2 == 6){
            conc = cores.vermelho *10 + cores.azul;
        }
    /////////////////////////////////////////////////////////////////////////////
        if(valor1 == 6 && valor2 == 3){
            conc = cores.azul *10 + cores.laranja;
        }
        if(valor1 == 3 && valor2 == 6){
            conc = cores.laranja *10 + cores.azul;
        }
    ///////////////////////////////////////////////////////////////////////////////
        if(valor1 == 6 && valor2 == 4){
            conc = cores.azul *10 + cores.amarelo;
        }
        if(valor1 == 4 && valor2 == 6){
            conc = cores.amarelo *10 + cores.azul;
        }
    ////////////////////////////////////////////////////////////////////////////////
        if(valor1 == 6 && valor2 == 5){
            conc = cores.azul *10 + cores.verde;
        }
        if(valor1 == 5 && valor2 == 6){
            conc = cores.verde *10 + cores.azul;
        }
    ///////////////////////////////////////////////////////////////////////////////
        if(valor1 == 6 && valor2 == 6){
            conc = cores.azul *10 + cores.azul;
        }
    ////////////////////////////////////////////////////////////////////////////
        if(valor1 == 5 && valor2 == 0){
            conc = cores.verde *10 + cores.preto;
        }   
        if(valor1 == 0 && valor2 == 5){
            conc = cores.preto *10 + cores.verde;
        }
    ///////////////////////////////////////////////////////////////////////////////
        if(valor1 == 5 && valor2 == 1){
            conc = cores.verde *10 + cores.marrom;
        }
        if(valor1 == 1 && valor2 == 5){
            conc = cores.marrom *10 + cores.verde;
        }
        /////////////////////////////////////////////////////////////////////////
        if(valor1 == 5 && valor2 == 2){
            conc = cores.verde *10 + cores.vermelho;
        }
        if(valor1 == 2 && valor2 == 5){
            conc = cores.vermelho *10 + cores.verde;
        }
    /////////////////////////////////////////////////////////////////////////////
        if(valor1 == 5 && valor2 == 3){
            conc = cores.verde *10 + cores.laranja;
        }
        if(valor1 == 3 && valor2 == 5){
            conc = cores.laranja *10 + cores.verde;
        }
    //////////////////////////////////////////////////////////////////////////////////////////////      
        if(valor1 == 5 && valor2 == 5){
            conc = cores.verde *10 + cores.verde;
        }
    ////////////////////////////////////////////////////////////////////////////////////
        if(valor1 == 4 && valor2 == 0){
            conc = cores.amarelo *10 + cores.preto;
        }
        if(valor1 == 0 && valor2 == 4){
            conc = cores.preto *10 + cores.amarelo;
        }
    /////////////////////////////////////////////////////////////////
        if(valor1 == 4 && valor2 == 1){
            conc = cores.amarelo *10 + cores.marrom;
        }
        if(valor1 == 1 && valor2 == 4){
            conc = cores.marrom *10 + cores.amarelo;
        }
    /////////////////////////////////////////////////////////////////
        if(valor1 == 4 && valor2 == 2){
            conc = cores.amarelo *10 + cores.vermelho;
        }
        if(valor1 == 2 && valor2 == 4){
            conc = cores.vermelho *10 + cores.amarelo;
        }               
    ///////////////////////////////////////////////////////////////
        if(valor1 == 4 && valor2 == 3){
            conc = cores.amarelo *10 + cores.laranja;
        }
        if(valor1 == 3 && valor2 == 4){
            conc = cores.laranja *10 + cores.amarelo;
        }
    //////////////////////////////////////////////////////////////////////
        if(valor1 == 4 && valor2 == 4){
            conc = cores.amarelo *10 + cores.amarelo;
        }   
    /////////////////////////////////////////////////////////////////////
        if(valor1 == 3 && valor2 == 0){
            conc = cores.laranja *10 + cores.preto;
        }
        if(valor1 == 0 && valor2 == 3){
            conc = cores.preto *10 + cores.laranja;
        }
    ///////////////////////////////////////////////////////
        if(valor1 == 3 && valor2 == 1){
            conc = cores.laranja *10 + cores.marrom;
        }
        if(valor1 == 1 && valor2 == 3){
            conc = cores.marrom *10 + cores.laranja;
        }
        if(valor1 == 3 && valor2 == 3){
            conc = cores.laranja * 10 + cores.laranja;
        }   
    /////////////////////////////////////////////////////////////////////////////////////////////
        if(valor1 == 2 && valor2 == 0){
            conc = cores.vermelho *10 + cores.preto;
        }
        if(valor1 == 0 && valor2 == 2){
            conc = cores.preto *10 + cores.vermelho;
        }
    ////////////////////////////////////////////////////////
        if(valor1 == 2 && valor2 == 1){
            conc = cores.vermelho *10 + cores.marrom;
        }
        if(valor1 == 1 && valor2 == 2){
            conc = cores.marrom *10 + cores.vermelho;
        }
    //////////////////////////////////////////////////////////
        if(valor1 == 2 && valor2 == 2){
            conc = cores.vermelho *10 + cores.vermelho;
        }
    ////////////////////////////////////////////////////////
        if(valor1 == 1 && valor2 == 1){
            conc = cores.marrom *10 + cores.marrom;
        }   
    ////////////////////////////////////////////////////////
        if(valor1 == 0 && valor2 == 0){
            conc = cores.preto *10 + cores.preto;
        }  
 
        juntos = valor1 * 10 + valor2;
        resultado = (juntos) * mult;
      
        printf("\nVALOR DO RESISTOR: %.1f Ohms %.2f%% de tolerância",resultado,tol);
         
        printf("\n\n\nDigite 1 se deseja continuar: ");
        scanf("%f",&op);
        system("cls");
    }while(op==1);
}
