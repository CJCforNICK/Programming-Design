#include<stdio.h>
#include<string.h>

int main(){
	
	int H,W,i,j; 
	scanf("%d %d",&H,&W);
	const char way[6]={'^','v','<','>','.'};
	while(H!=0&&W!=0)
	{	
		char map[H][W+1];
		for(i=0;i<H;i++)
		{
			scanf("%s",&map[i]);
		}
		i=0;
		j=0;
		while(1)
		{
			while(map[i][j]!='.')
			{
				if(map[i][j]==way[0])
				{
					map[i][j]='1'; //visited
					i=i-1;
					break;		
				}
			
				if(map[i][j]==way[1])
				{
					map[i][j]='1';
					i=i+1;
					break;
				}		
				
				if(map[i][j]==way[2])
				{
					map[i][j]='1';
					j=j-1;
					break;
				}	
			
				if(map[i][j]==way[3])
				{
					map[i][j]='1';
					j=j+1;
					break;
				}
			
			} 
			if(map[i][j]==way[4] || map[i][j]=='1')
				break;
		}
		if(map[i][j]=='1')
		{
			printf("LOOP\n");
		}else
		{
			printf("%d %d\n",j,i);
		}
		scanf("%d %d",&H,&W);
	}
	

return 0;
}

