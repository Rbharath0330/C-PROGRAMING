#include <stdio.h>
int main(){
int a=20;
int b=18;
int c=15;
if((a>=b && b>=c)){
   printf("%d is the largest number",a);
}
else if((b>=a && b>=c)){
   printf("%d is the largest number",b);
}
else
   printf("%d is the largest number",c);
return 0;
}
