#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i = 0;
	char pole[10];
	int pocet = 0;
	char c;
	
	printf("Zadaj znaky a ja ich vypisem odzadu\n");
	
		while( pocet < 10){
		
        //  c = getchar();
	   

		pole[i] = getchar();
//	scanf("%c", &pole[i]);
		pocet++;
		i++;
}
	for(i=9;i>=0;i--)
	printf("%c", pole[i]);
	//putchar(pole[i]);
	
	
	
	return 0;
}
