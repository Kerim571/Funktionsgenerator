#include <stdio.h>

int main(){

	int min;
	int max;
	int i;
      	int j;
	int h;
	int g;
	float frequenz;	

	printf("Bitte geben Sie den geringsten Spannungswert ein : ");
	scanf("%d",&min);
	
	printf("Bitte geben Sie den höchsten Spannungswert ein : ");
	scanf("%d",&max);
	
	printf("Bitte geben Sie die Periodendauer ein : ");
	scanf("%d",&j);

	printf("Bitte geben Sie ein, wie oft eine Periode ausgegeben werden soll :");
	scanf("%d",&g);
	
	frequenz=1/j;

	printf("Bei einer Periodendauer von %dEinheiten und einer Frequenz von %fHz kriegen Sie folgende Spannungswerte: \n ", j, frequenz);

	for( h=0; h< g; h++){
		    
		for( i=0; i < (j/2); i++){
			printf("%dV \n", min);
		}
		for( i=0; i< (j/2); i++){
			printf("%dV \n", max);
		}
	}
	return 0;
}
