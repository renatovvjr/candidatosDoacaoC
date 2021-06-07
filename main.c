#include <stdio.h>
int main(void) {
  //O programa receberá informações da quantidade de doadores candidatos à doação de sangue. O programa deverá ler a idade e informar a seguinte condição: 
  //- Se menor de 16 ou acima de 69 anos, não poderá doar;
  //- Se tiver entre 16 e 17 anos, somente poderá doar se estiver acompanhado dos pais ou responsáveis (neste caso criar uma condição: "Está acompanhado de pais ou responsável: 1-sim ou 2-não);
  //- Se  tiver entre 18 e 69 anos, poderá doar.
  //Ao final o programa deverá mostrar quantos candidatos poderão doar sangue. 
  int idade=0, doadorMenorIdoso=0, doadorAdolescente=0,doadorAdulto=0, simNao=0, podeDoar, naoPodeDoar, adolescente=0;
  for(int i=0; i<10; i++){
    printf("Informe a idade do candidato à doação: ");
    scanf("%d", &idade);
     if(idade<16 || idade >69){
        doadorMenorIdoso++;
      }else
       if(idade>=16 && idade <= 17){
      printf("Está acompanhado de pais ou responsável? Digite [1 - SIM] ou [2 - NÃO]");
      scanf("%d", &simNao);
        if(simNao==1){
          doadorAdolescente++;
        }else{
          adolescente++;
        }
      }else{
       doadorAdulto++;
      }
  }
  naoPodeDoar=doadorMenorIdoso+adolescente;
  podeDoar=doadorAdolescente+doadorAdulto;

  printf("%d candidatos não atenderam aos critérios para doação de sangue.", naoPodeDoar);  
  printf("\n%d candidatos atenderam aos critérios para doação de sangue e poderão doar.",podeDoar);

  return 0;
}
  
