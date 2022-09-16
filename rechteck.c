#include <stdio.h>

int main(){

	int min = 5;
	int max = 10;
	int i  //periodendauer geteilt durch zwei;

	for( i=0; i < 6; i++){
		if( i%2 == 0){
			printf("%dV\n %dV\n %dV\n", min, min, min); }
		else{
			printf("%dV\n %dV\n %dV\n", max, max, max); }
	}
	return 0;
}
