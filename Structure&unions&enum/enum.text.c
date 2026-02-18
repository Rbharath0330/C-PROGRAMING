#include <stdio.h>
typedef struct{

int event;

enum{
hundermtr,
fourhundermtr
  }games;

}name;

int main(){
name n1;
n1.event=100;
n1.games=hundermtr;

printf("event=%d\n",n1.event);
if(n1.games==hundermtr)
   printf("games=hundermtr\n");
else
   printf("no events");
return 0;
}
