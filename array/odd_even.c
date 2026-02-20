#include <stdio.h>
int main(){
int a[10]={1,2,3,4,5,6,7,8,9,10};
int i,even=0,odd=0;
for (i=0;i<10;i++){
if (a[i]%2==0){
even++;
}
else{
odd++;
}
}
printf("even:%d\n",even);
printf("odd:%d\n",odd);

return 0;
}
