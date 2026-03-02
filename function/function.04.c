#include <stdio.h>
int check(int num){

if(num%2==0){
return 1;
}
else{
return 0;
}

}

int main(){
int a=2,b;
b=check(a);
if(b){
printf("its a even number:1");
}
else{
printf("its odd number:0");
}

return 0;
}
