#include<stdio.h>

enum trafficsignal{
red,
yellow,
green,
};
int main(){
   enum trafficsignal signal;
   signal=green;

   switch (signal) {
     case red:
         printf("signal:red -stop\n");
           break;
     case yellow:
          printf("signal:yellow-get ready\n");

           break;
     case green:
           printf("singnal:green-go\n");
           break;
      defalut:
            printf("invalid signal\n");


}

return 0;

}

