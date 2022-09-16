#include <stdio.h>

int main(){

	int min;
	int max;
	int i;
      	int j;
	float frequenz;	

	printf("Bitte geben Sie den geringsten Spannungswert ein : ");
	scanf("%d",&min);
	
	printf("Bitte geben Sie den höchsten Spannungswert ein : ");
	scanf("%d",&max);
	
	printf("Bitte geben Sie die Periodendauer ein : ");
	scanf("%d",&j);
	
	frequenz=1/j;

	printf("Bei einer Periodendauer von %dSekunden und einer Frequenz von %fHz kriegen Sie folgende Spannungswerte:\n ", j, frequenz);

	for( i=0; i < 6; i++){
		if( i%2 == 0){
			printf("%dV\n %dV\n %dV\n", min, min, min); }
		else{
			printf("%dV\n %dV\n %dV\n", max, max, max); }
	}
	return 0;
}
