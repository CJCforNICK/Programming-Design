#include<stdio.h>

int main(){
	
	int m,n,s;
	scanf("%d%d",&m,&n); 
	s=(m*2+n)%3;
	switch(s)
	{
		case 0:
			printf("´¶³q");
			break; 
		case 1:
			printf("¦N");
			break; 
		case 2:
			printf("¤j¦N");
			break; 
	}

return 0;
}

