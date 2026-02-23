#include<stdio.h>
int findmax(int *ptr, int size){
int max=*ptr;
for(int i=1;i<size;i++){
if(*(ptr+i)>max){
max=*(ptr+i);
}
}
return max;

}


int main(){
int arr[]={12,3,44,67,77};
int max=findmax(arr,5);
printf("maximum value=:%d",max);
return 0;
}



