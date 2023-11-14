#include<stdio.h>
#include<string.h>
int main(){
	char a[10];
	int n;
	scanf("%d",&n);
	printf("%d\n",n);
	scanf("%s",&a);
	switch(a){
		case "RUN":
			printf("running");
			break;
		case "Walk":
			printf("wailing");
			break;
	}
	

return 0;
}





