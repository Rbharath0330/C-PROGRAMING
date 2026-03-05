 #include <stdio.h>
void rotate(int arr[],int n,int k)
{
int start=n;
int end=k;
while(start<end){
int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
start++;
end--;
}
}

int main(){
int arr[]={1,2,3,4,5};
int n=5;
int k=2;
rotate(arr,0,n-1);
rotate(arr,0,k-1);
rotate(arr,k,n-1);
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}

return 0;
}
