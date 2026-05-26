#include <stdio.h>

// Escreva um algoritmo que solicite dois valores reais e apresente: 
// 1) A soma entre eles............................ok
// 2) A subtração entre eles...............................ok
// 3) A multiplicação entre eles............................ok
// 4) A divisao do primeiro pelo o segundo...........................ok
// 5) A exponenciação (primeiro valor, expoente)...........................ok
// 6) calcular exponenciacao com recursividade............................ok
// 7) Calcular o fatorial do primeiro valor e termial o segundo valor..................ok
// 8) Pesquisar sobre parâemtros com valor default na assinatuda das funções...........................ok

//OBS: Utilizar a chamada de funcoes e usar estrutura de repetição no item 6...................................ok

float Somar(float Num1, float Num2) {
	float Resultado;
	Resultado = Num1+Num2;
	return(Resultado); 
}
float Divisao (float num1, float num2) {
	float ResultadoDiv;
	ResultadoDiv = num1 / num2;
	return(ResultadoDiv);
}
float Exponenciar(int vlr1, int vlr2) {
	float ResultadoExp=1;
	if (vlr2 == 0)   //Estamos atendendo a regra matematica(todo num elevado a 0 = 1)
	return(1);
	else if (vlr2 == 1) // codicao de parada da funcao recursiva
	return(vlr1);
	else 
	 for (int i=1; i<=vlr2; i++) 
		ResultadoExp = ResultadoExp*vlr1;
	return(ResultadoExp); 
}
int Fatorar(int vlr1) {
    int ResultadoFat = 1;
    int i;
    for (i=1; i<=vlr1; i++) {
        ResultadoFat = ResultadoFat*i;
    }
    return (ResultadoFat);
}
int Termial(int vlr2) {
    int ResultadoTer = 0;
    int i;
    for (i = 1; i <= vlr2; i++) {
        ResultadoTer = ResultadoTer+i;
    }
    return (ResultadoTer);
}

//assinatura da função pq foi implementada apos ser chamada 
float Subtrair(float Num1, float Num2);
float Multiplicar(float vlr1, float vlr2); 


int main(){
	float vlr1, vlr2;
	//solicitando ao usuario dois valores reais 
	printf("Informe o primeiro valor: ");
	scanf("%f", &vlr1);
	printf("Informe o segundo valor: ");
	scanf("%f", &vlr2);
	//Apresentação dos resultados das operacoes 
	printf("\n Soma: %0.1f", Somar(vlr1, vlr2));
	printf("\n A Divisao: %0.1f", Divisao(vlr1, vlr2));
	printf("\n Subtracao: %0.1f", Subtrair(vlr1, vlr2));
	printf("\n Multiplicacao: %0.1f", Multiplicar(vlr1, vlr2));
	printf("\n Exponencial: %0.1f", Exponenciar(vlr1, vlr2));
	printf("\n Fatorial: %i", Fatorar(vlr1));	
	printf("\n Termial: %i", Termial(vlr2));
}

float Multiplicar(float A, float B) {
	return A*B ; 
}

float Subtrair(float A, float B) { 
	return A-B; 
}




