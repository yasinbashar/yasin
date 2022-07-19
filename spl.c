#include<stdio.h>
#include<math.h>
struct batsman
{
      char name[50];
       int score[5];
};
int main()
{
    struct batsman batsman1,batsman2;
    scanf("%s",batsman1.name);
    int i;
    double s = 0,x=0;
    for(i=0;i<5;i++)
        {
        scanf("%d",&batsman1.score[i]);
        s=s+batsman1.score[i];
        }
    s=s/5;
    for(i=0;i<5;i++)
    {
        x =x + (s-batsman1.score[i])*(s-batsman1.score[i]);
    }
     x= sqrt(x/5);
    scanf("%s",batsman2.name);
    s= 0;
    double x2=0;
    for(i=0;i<5;i++){
        scanf("%d",&batsman2.score[i]);
        s=s+batsman2.score[i];
    }
    s=s/5;
    for(i=0;i<5;i++){
        x2 =x2 +(s-batsman2.score[i])*(s-batsman2.score[i]);
    }
    x2 = sqrt(x2/5);
    if(x>x2){
        printf("Best player is %s",batsman2.name,x2,x);
    }
    else if(x<x2){
        printf("best player is %s",batsman1.name,x,x2);
    }
    else{
        printf("Both are best");
    }

    return 0;
}
