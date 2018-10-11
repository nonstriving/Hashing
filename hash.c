#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//#include <math.h>

long convert(char cpf[13]){
	long key;
	char cpf2[12];
	cpf2[11]='\0';
	strncpy(cpf2,cpf,9);
	strcat(cpf2,&cpf[10]);
	printf("%s\n",cpf2);
	key = strtol(cpf2, NULL, 10);
	return key;
}

//int hash(int cpf)

int main(){
	char cpf[13] = "123456789-12";
	cpf[12]='\0';
	long key;
	key=convert(cpf);
	printf("%ld",key);
	return 0;
}