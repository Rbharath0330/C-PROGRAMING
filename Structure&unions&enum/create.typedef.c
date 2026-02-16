#include <stdio.h>
typedef struct
{
int rollno;
char name[20];
float mark;
}student;

int main()
{
student s3;

   s3.rollno=007;
   s3.mark=87.8;

    printf("Enter a name");
    scanf("%s",s3.name);

printf("student 3 rollno=%d\n mark%f\n name=%s\n",s3.rollno,s3.mark,s3.name);

return 0;
}
