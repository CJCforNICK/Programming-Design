#include<stdio.h>
#include <string.h>
int main(){
	
	char s[] = "hello, ";
    char t[30]; //30�������� 
    scanf("%s",t);
    strcat(s, t);
    printf("%s",s);
    

return 0;
}

