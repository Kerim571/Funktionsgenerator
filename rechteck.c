#include <stdio.h>

int main(){

	int min;
	int max;
	int i;  

	printf("Bitte geben Sie den geringsten Spannungswert ein : ");
	scanf("%d",&min);
	
	printf("Bitte geben Sie den höchsten Spannungswert ein : ");
	scanf("%d",&max);
	printf("Bei einer Periodendauer von 6 Einheiten kriegen Sie folgende Spannungswerte:\n ");
	for( i=0; i < 6; i++){
		if( i%2 == 0){
			printf("%dV\n %dV\n %dV\n", min, min, min); }
		else{
			printf("%dV\n %dV\n %dV\n", max, max, max); }
	}
	return 0;
}
