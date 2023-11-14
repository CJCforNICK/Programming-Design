#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,circle = 0;
    int map[100][102],visited[100][102] = {0};
    int p,y,x,i,j;
    int flag;
    int ans[100][3] = {0};
    while(1){
        scanf("%d %d",&a,&b);
        if((a==0) && (b==0))
            break;
        else{
            scanf("%c",&c);
            circle++;
            for(i=0; i<a; i++){
                for(j=0; j<b+1; j++){
                    scanf("%c",&c);
                    if(c == '>')
                        map[i][j] = 1;
                    else if(c == 'v')
                        map[i][j] = 2;
                    else if(c == '<')
                        map[i][j] = 3;
                    else if(c == '^')
                        map[i][j] = 4;
                    else if(c == '.')
                        map[i][j] = 5;
                }
            }
            /*for(int i=0; i<a; i++){
                for(int j=0; j<b; j++){
                    printf("%d",map[i][j]);
                }
                printf("\n");
            }*/
            y=0;
            x=0;
            flag = 1;
            while(flag == 1){
                p = map[y][x];
                //printf("p = %d,map = %d\n",p,map[y][x]);
                if(visited[y][x]){
                    flag = 2;
                    break;
                }else{
                    switch(p){
                case 1:
                    if(x<b){
                        visited[y][x] = 1;
                        x++;
                    }else{
                        flag = 0;
                    }
                    break;
                case 2:
                    if(y<a){
                        visited[y][x] = 1;
                        y++;
                    }else{
                        flag = 0;
                    }
                    break;
                case 3:
                    if(x>0){
                        visited[y][x] = 1;
                        x--;
                    }else{
                        flag = 0;
                    }
                    break;
                case 4:
                    if(y>0){
                        visited[y][x] = 1;
                        y--;
                    }else{
                        flag = 0;
                    }
                    break;
                case 5:
                    flag = 0;
                    break;
                    }
                }
            }
            if(!flag){
                ans[circle][0] = 0;
                ans[circle][1] = x;
                ans[circle][2] = y;
            }else
                ans[circle][0] = 1;
            //printf("ans[%d][%d][%d][%d]\n",circle,ans[circle][0],ans[circle][1],ans[circle][2]);
        }
    }
    for(i=1; i<circle+1;i++){
        if(ans[i][0] == 1){
            printf("LOOP\n");
        }else{
            printf("%d %d\n",ans[i][1],ans[i][2]);
        }
    }
    return 0;
}
