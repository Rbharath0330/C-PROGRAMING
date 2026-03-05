#include <stdio.h>
void reverse(int *arr,int n)
{
int *start=arr;
int *end=arr+n-1;
  while(start<end)
{
   int temp=*start;
       *start=*end;
       *end=temp;
start++;
end--;
}
}
int main(){
int arr[]={70,60,50,40,30,20,10};
int n=sizeof(arr)/sizeof(arr[0]);
reverse(arr,n);
printf("/reverse arry");
for(int i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}
return 0;
}
