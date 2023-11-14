#include<stdio.h>
int N;// amount of gfs
int factorial[11];// array for factorial amounts
int place[10]; //

int Factorial(){
    factorial[0]=1;
    int i;
    for(i=1;i<11;i++){
        factorial[i]=i*factorial[i-1];
    }
}

void print(){
    int i=0;
    for(i=0;i<=N-1;i++)
        printf("%d ",place[i]);
    printf("\n");
}

void find(){
	int i=0,j=0;
    for(i=N-2;i>=0;i--){
        if(place[i]<place[i+1])
            break;
    }
    int breakpoint=i;
    int temp_low=i+1; //breakpoint right 
    for(i=breakpoint+1;i<N;i++){
        if(place[i]>place[breakpoint]&&place[i]<place[temp_low])
            temp_low=i;
    }
    int temp;  //swap
    temp=place[breakpoint];
    place[breakpoint]=place[temp_low];
    place[temp_low]=temp;
    //reverse
    for(j=breakpoint+1,i=N-1;i>j;i--,j++){
        temp=place[i];
        place[i]=place[j];
        place[j]=temp;
    }
}

int main(){
    Factorial();
    scanf("%d",&N);
    int i;
    for(i=0;i<N;i++){
        place[i]=i+1;
        printf("%d ",place[i]);
    }
    printf("\n");
    for(i=1;i<factorial[N];i++){
        find();
        print();
    }
}

