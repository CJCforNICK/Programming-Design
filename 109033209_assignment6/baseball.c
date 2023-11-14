#include<stdio.h>
#include<string.h> 

int main(){

	char bat[8];
	int base[7]; 
	int n,i,j,k,m,s=0;
	for(i=0;i<7;i++){
		base[i]=0;
	}
	scanf("%d",&n);
	int score[n];
	for(j=0;j<n;j++){
		while(base[5]!=3){
				scanf("%s",&bat);
				if(strcmp(bat, "OUT")==0){
        			base[5]++;
    			}else if(strcmp(bat, "HIT")==0){
    				base[4]=base[3];
					base[3]=base[2];
					base[2]=base[1];
					base[1]=1;
					if(base[4]==1){
						base[6]++;
						base[4]=0;
					}
					}else{
						base[6]++;
						for(k=1;k<4;k++){
							if(base[k]==1){
								base[6]++;
								base[k]=0;
							}
						}
					}
			}
			score[s]=base[6];
        	for(m=0;m<7;m++){
        		base[m]=0;
			}
			s++;
    		}
	for(i=0;i<n;i++){
		printf("%d\n",score[i]);
	}	
	return 0;
}

