
#include "func_head.h"

patient arr[5];

int main(void)
{

     s8 a;
   while(1)
   {

    printf("for admin mode press 0\nfor user mode press 1\n");
    scanf(" %c",&a);
    switch(a)
   {

    case '0':
       {
            check_admin_pass();
            choose_for_admin();

       break;
       }
    case '1':
        {
             choose_for_user();

        break;
        }
    default:
        printf("wrong choise!\n");

   }
   }
    return (0);
}

/////////////////////////////////////////////////////









