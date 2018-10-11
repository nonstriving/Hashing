#include <stdlib.h>
#include <stdio.h>
#include <math.h>

long convert(char cpf[12]){
	int n;
	int i;
	for(i=0;i<9;i++){
		n=n+(c-'0')*(10**(10-i));
	}
	for(i=10;i<12;i++){
		n=n+(c-'0')*(10**(11-i))
	}
	return n;
}

//int hash(int cpf)

int main(){
	return 0;
}