 #include <stdio.h>
#include <string.h>
typedef struct{
char city[50];
char state[50];
int pincode;
}adress;

typedef struct{
char name[20];
int roolnum;
float mark;
adress addr;
}student;

int main(){
     student s1;

s1.roolnum=1;
strcpy(s1.name,"bharath");
s1.mark=98.9;

strcpy(s1.addr.city,"thiruvarur");
strcpy(s1.addr.state,"tamilnadu");
s1.addr.pincode=610001;

printf("roolnum:%d\n",s1.roolnum);
printf("name:%s\n",s1.name);
printf("mark:%.2f\n",s1.mark);
printf("city:%s\n",s1.addr.city);
printf("state:%s\n",s1.addr.state);
printf("pincode:%d\n",s1.addr.pincode);

return 0;
}
