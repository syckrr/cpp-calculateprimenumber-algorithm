#include <stdio.h>
#define __STDC_FORMAT_MACROS 1
#include <inttypes.h>
#include <stdlib.h>
//you should use-test this program with cmd or add system("PAUSE");
int cift(int a) 
        {
            int org=a;
            int b=2;
            int count=1;
            while(b<=a)
            {
                if (a % b != 0)
                {                 
                    b++; //tekrarla döngü                   
                }
                else //a%b==0
                {
                    if (a != b)
                    {
                        a--;
                        b = 2;
                    }
                    else
                    {
                        printf("\n %d. number --> %d ",count,a);
                        a--;
                        count++;
                        b = 2;
                    }
                }           
               } 
               printf("\n There is %d prime numbers that smaller than %d! \n Finished!",count-1,org+1);          
            return 1;
        }
int main()
{
    int a;
    printf("Enter a number : ");    
    scanf("%d",&a);
 cift(a);
 return 1;   
}
