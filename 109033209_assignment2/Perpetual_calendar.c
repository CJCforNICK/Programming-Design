#include<stdio.h>
#include<math.h>

int main(){
int yr,mth,x;   //x is the weekday of first day of the chosen month  
                //x= (1+2mth+3(mth+1)/5+yr+yr/4-yr/100+yr/400+1)%7
int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int i=0;
int d=0; //used for the amount of days
int c=0;

printf("Please choose a month in 1901~2099\n");
scanf("%d %d", &yr,&mth);
if (yr<=2099 && 1901<=yr && 1<=mth && mth<=12)
 {  
 	c=yr/100;
 	switch(mth)
	{ 
		case 1:
		printf("\n------------------------------------------\n");
		printf("              %d   January             ",yr);
		printf("\n------------------------------------------\n");
		printf("SUN   MON   TUE   WED   THU   FRI   SAT\n");
		break;
		
		case 2:
		printf("\n------------------------------------------\n");
		printf("              %d   February             ",yr);
		printf("\n------------------------------------------\n");
		printf("SUN   MON   TUE   WED   THU   FRI   SAT\n");
		break;
		
		case 3:
		printf("\n------------------------------------------\n");
		printf("              %d   March             ",yr);
		printf("\n------------------------------------------\n");
		printf("SUN   MON   TUE   WED   THU   FRI   SAT\n");
		break;
		
		case 4:
		printf("\n------------------------------------------\n");
		printf("              %d   April             ",yr);
		printf("\n------------------------------------------\n");
		printf("SUN   MON   TUE   WED   THU   FRI   SAT\n");
		break;
		
		case 5:
		printf("\n------------------------------------------\n");
		printf("              %d   May             ",yr);
		printf("\n------------------------------------------\n");
		printf("SUN   MON   TUE   WED   THU   FRI   SAT\n");
		break;
		
		case 6:
		printf("\n------------------------------------------\n");
		printf("              %d   June             ",yr);
		printf("\n------------------------------------------\n");
		printf("SUN   MON   TUE   WED   THU   FRI   SAT\n");
		break;
		
		case 7:
		printf("\n------------------------------------------\n");
		printf("              %d   July             ",yr);
		printf("\n------------------------------------------\n");
		printf("SUN   MON   TUE   WED   THU   FRI   SAT\n");
		break;
		
		case 8:
		printf("\n------------------------------------------\n");
		printf("              %d   August             ",yr);
		printf("\n------------------------------------------\n");
		printf("SUN   MON   TUE   WED   THU   FRI   SAT\n");
		break;
		
		case 9:
		printf("\n------------------------------------------\n");
		printf("              %d   September             ",yr);
		printf("\n------------------------------------------\n");
		printf("SUN   MON   TUE   WED   THU   FRI   SAT\n");
		break;
		
		case 10:
		printf("\n------------------------------------------\n");
		printf("              %d   October             ",yr);
		printf("\n------------------------------------------\n");
		printf("SUN   MON   TUE   WED   THU   FRI   SAT\n");
		break;
		
		case 11:
		printf("\n------------------------------------------\n");
		printf("              %d   November             ",yr);
		printf("\n------------------------------------------\n");
		printf("SUN   MON   TUE   WED   THU   FRI   SAT\n");
		break;
		
		case 12:
		printf("\n------------------------------------------\n");
		printf("              %d   December             ",yr);
		printf("\n------------------------------------------\n");
		printf("SUN   MON   TUE   WED   THU   FRI   SAT");
		break;
	}
	if ((yr%400==0) || ((yr%4==0) && (yr%100!=0))) //leap year
		{days[1] = days[1]+1;
		
		};
	
	x=(yr + (yr/4)+ (c/4 )- (2*c) + (26*(mth+1)/10) )% 7;
	//( 2*mth + 3*(mth + 1)/5 + yr + yr/4 - yr/100 + yr/400 + 3) % 7;
	
	for(i=1;i<=x;i++)
	{ printf("      ");
	}
	
	for(d=1;d<=days[mth-1];d++)
	{ if(d<10)
		{printf(" %d    ",d);
		}else
		printf("%d    ",d);
	  if((d+x)%7==0 && d<=days[mth-1])
	   printf("\n");
	};
 }else
  { printf("Infomation unavailable");
 
  }
  
  printf("\n------------------------------------------\n");
return 0;
}

