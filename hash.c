#include <stdlib.h>
#include <stdio.h>
#include <math.h>

long convert(char cpf[12]){
	long key;
	int i;
	char c;
	for(i=0;i<9;i++){
		c=cpf[i];
		key=key+(c-'0')*(10**(10-i));
	}
	for(i=10;i<12;i++){
		c=cpf[i];
		key=key+(c-'0')*(10**(11-i))
	}
	return key;
}

//int hash(int cpf)

int main(){
	return 0;
}