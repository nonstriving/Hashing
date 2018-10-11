#include <stdlib.h>
#include <stdio.h>
#include <math.h>

long double convert(char cpf[12]){
	long double key;
	int i;
	char c;
	for(i=0;i<9;i++){
		c=cpf[i];
		key=key+(c-'0')*powl(10,10-i);
	}
	for(i=10;i<12;i++){
		c=cpf[i];
		key=key+(c-'0')*powl(10,11-i);
	}
	return key;
}

//int hash(int cpf)

int main(){
	char cpf[12] = "123456789-00";
	long double key;
	key=convert(cpf);
	printf("%Lf",key);
	return 0;
}