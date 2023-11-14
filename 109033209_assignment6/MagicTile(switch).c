#include<stdio.h>
#include<string.h>

int main(){
	
	int n,m,i,j,s,count=0; 
	scanf("%d %d",&n,&m);
	s=n*m;
	printf("%d\n",s);
	char map[n][m+1];
	for(i=0;i<n;i++){
		for(j=0;j<m+1;j++){
			scanf("%c",&map[i][j]);
		}
	}
	i=0;
	j=0;
	while(1){
		if(count>s){
			printf("loop");
			break;
		}else if(strcmp(map[i][j],".")==0){
			printf("%d %d",i,j);
			break;
		}else{
			switch(map[i][j]){
				case '^':
					printf("up");
					i=i-1;
					break;
				case 'v':
					printf("down");
					i=i+1;
					break;
				case '<':
					printf("left");
					j=j-1;
					break;
				case '>':
					printf("right");
					j=j+1;
					break;
			}
			count++;
		}
	}

return 0;
}

