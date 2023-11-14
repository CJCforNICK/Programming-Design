#include<stdio.h>

int Min(int array[],int a){
 	int i,min;
 	for(i=4;i<a-3;i++)
 	{
  		if(array[i]<min)
  		{
   			min=array[i];
  		}
 	}
 	return min;
 }

int main(){
	int i,min=11,k;
	int place[10];
	for(i=0;i<10;i++)
	{	place[i]=i+1; //initial number array
    	printf("%d ",place[i]);
	}
 	k=Min(place,10);
 	printf("%d",k);
 	
return 0;
}

