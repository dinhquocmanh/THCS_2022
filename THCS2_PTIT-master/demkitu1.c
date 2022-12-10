#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char x[50];
    int chu = 0 , kitu = 0 , so = 0 , i;
    gets(x);
    int len = strlen(x);
    for ( i = 0 ; i < len ; i++)
    {
    	if (isalpha(x[i]) != 0)
    		chu++;
    	else if ( isdigit(x[i]) != 0)
    		so++;
    	else kitu++;
	}
	printf ("%d %d %d", chu, so, kitu);

    return 0;
}


