#include <stdio.h>

void printarray(int*ptr,int size){
int i;
for(i=0;i<size;i++){

printf("%d",*(ptr+i));

}

}
int main(){
int arr[5]={1,2,3,4,5};
int size=5;
printarray(arr,size);


return 0;
}
