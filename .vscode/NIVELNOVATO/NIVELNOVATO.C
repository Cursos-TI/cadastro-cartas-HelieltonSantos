#include <stdio.h>

int main(){
    
int carta1;                                             
char estado [50] = 'Amazonas';                             
char Codigo [50] = "A01";                               
char Cidade [50] = "Manaus";                               
int população = 20000000;                                 
float aréa = 1521.11;                                     
float pib = 699922.22;                                    
int pontosturisticos = 40;      

printf("Carta de Numero 1\n");                          
printf("estado: %s\n" , estado);
printf("codigo: %s\n" , Codigo);
printf("cidade: %s\n" , Cidade);
printf("população: %d\n" , população);
printf("aréa: %f\n" , aréa);
printf("pib: %f\n" , pib); 
printf("pontosturisticos: %d\n" , pontosturisticos);

printf("Carta de Número 1\n");

printf("Digite seu estado:\n");
scanf("%s", &estado);

printf("Digite o codigo da carta: - a01\n");
scanf("%s", &Codigo);

printf("Digite sua Cidade:\n");
scanf ("%s", &Cidade);

printf("Sua população é:\n");
scanf("%d", &população);

printf("Sua Aréa é:\n");
scanf("%f", &pib);

printf("Digite Seus Pontos Turisticos:\n");
scanf("%d", &pontosturisticos);


}
