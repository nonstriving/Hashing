#include <stdlib.h>
#include <stdio.h>
#include <math.h>

long convert(char cpf[12]){
	long cpf;
	cpf = strtol(cpf, cpf[8], 10);
	strcat(cpf,strtol(cpf[10],cpf[11],10));
}

//int hash(int cpf)

int main(){
	return 0;
}