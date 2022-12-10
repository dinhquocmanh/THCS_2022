#include<stdio.h>
int check(int n)
{
	int x[100];
	x[0] = 1;
	x[1] = 2;
	int i;
	for (i = 2 ; i < 100 ; i++){
		x[i] = x[i-1] + x[i-2];
	}
	for ( i = 0 ; i < 100 ; i++){
		if (n == x[i])
		{
			return 1;
		}
	}
	return 0;
}
int main(){
	int t;scanf("%d",&t);
	while(t--)
	{
   		int n;
    	scanf("%d",&n);
    	if(check(n)){
    		printf("YES");
		}else printf("NO");
	}


    return 0;
}

