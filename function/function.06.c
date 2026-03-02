 #include <stdio.h>
void swap(int a,int b){
int temp=a;
    a=b;
    b=temp;

printf("\nfunction swaping");
printf("\na=%d b=%d",a,b);
}

int main(){
int x=10,y=20;

printf("\nbefore swaping");
printf("\n%d %d",x ,y);

swap(x,y);

printf("\nafter swaping");
printf("\n%d %d",x,y);

return 0;
}
