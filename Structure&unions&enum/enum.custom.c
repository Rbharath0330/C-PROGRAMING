#include <stdio.h>
enum custom{
start=10,
stop=20,
puase=30,
};

int main(){
int a;
enum custom choise;
printf("enter a number");
scanf("%d",&a);
choise=(enum custom)a;
if(choise==star)
{
printf("%d",star);
}
return 0;
}
