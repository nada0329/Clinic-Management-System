#include "func_head.h"

extern patient arr[5];
void choose_for_user(void)
{
    s8 z;
    printf("press 1 to View patient record\npress 2 to  View todays reservations\n ");
    scanf(" %c",&z);
    switch(z)
    {
    case '1':
        {
            View_patient_record();
         break;
        }
    case '2':
        {
            View_today_reservations();
        break;
        }
    default: printf("wrong choise\n");
    }
}

///////////////////////////////////////////////////////////////

void View_patient_record(void)
{
    s8 j=10,i=0;
    s16 d;
    printf("enter patient id: ");
    scanf("%hd",&d);
    for(i=0;i<=4;i++)
    {
        if(d==arr[i].id)
        {
            j=i;
            break;
        }
    }
    if(arr[j].flag==1)
    {
        for(i=0;i<=4;i++)
      {
        if(d==arr[i].id)
         {
            printf("name : %s\n",arr[i].name);
            printf("age : %hd\n",arr[i].age);
            (arr[i].gender=='m') ?(printf("gender : male\n")) :(printf("gender : female\n"));
            break;
         }
       }
    }
    else
    {
        printf("id is canceled\n");
       return;
    }
    if(5==i)
        printf("wrong id \n");
}
///////////////////////////////////////////////////////////////////////////////////

void View_today_reservations(void)
{
    s8 i;
   for(i=0;i<5;i++)
   {
       if(arr[i].flag==1)
       {
           printf("slot %c is reserved for id %hd\n",i+49,arr[i].id);
       }
       else if(arr[i].flag==0)
       {
            printf("slot %c is not reserved \n",i+49);
       }
   }

}

////////////////////////////////////////////////////////////