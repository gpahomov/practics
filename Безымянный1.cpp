#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char title1[6], title2[9], title3[10];   
	char* performance1, performance2, performance3;                  
	int kolvo1, kolvo2, kolvo3;          
	int price1, price2, price3;                
	printf("1. Enter: product name, product performance, product kolvo, product pr >"); 
	scanf("%s %s %d %d",title1, performance1, &kolvo1, &price1);                         
	printf("2. Enter: product name,product performance,product kolvo,product pr >");
	scanf("%s %s %d %d",title2, &performance2, &kolvo2, &price2);
	printf("3. Enter: product name,product performance,product kolvo,product pr >");
	scanf("%s %s %d %d",title3, &performance3, &kolvo3, &price3);
	printf("|-----------------------------------------------------|\n");
	printf("|Office pack                                          |\n");
	printf("|-----------------------------------------------------|\n");
	printf("|Title      | Performance| Product kolvo| Price       |\n");
	printf("|-----------------------------------------------------|\n");
	printf("|%s     |%s   |%d             |%d          |\n", title1, performance1, kolvo1, price1);
	printf("|%s     |%s   |%d             |%d          |\n", title2, performance2, kolvo2, price2); 
	printf("|%s     |%s   |%d             |%d          |\n", title3, performance3, kolvo3, price3); 
 	printf("|-----------------------------------------------------|\n");
	printf("|Note:StarOffice product for free on the Internet     |\n");
	printf("|-----------------------------------------------------|\n");
	return 0;
}
