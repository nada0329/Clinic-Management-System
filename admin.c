#include "func_head.h"

extern patient arr[5];

void check_admin_pass(void)
{
   s16 i,pass;
    printf("enter pass:\n");
    for(i=0;i<3;i++)
    {
        scanf("%hd",&pass);
        if(pass==1234)
            break;
        else
            if(i==2)
            exit(0);
        printf("try again:\n");
    }
    printf("hello\n");
}

////////////////////////////////////////////////////////////////

void choose_for_admin(void)
{
    s8 b;
    printf("press 2 to Edit patient record\npress 3 to Reserve a slot with the doctor\npress 4 to Cancel reservation\n ");
    scanf(" %c",&b);
    switch(b)
    {
    
    case '2':
        {
            Edit_patient_record();
        break;
        }
    case '3':
        {
            Reserve_a_slot_with_the_doctor();
        break;
        }
    case '4':
        {
            Cancel_reservation();
        break;
        }
    default: printf("wrong choise\n");
    }

}

////////////////////////////////////////////////////////////////

void Edit_patient_record(void)
{
    s16 dd;
    s8 x=0,j,i;
    printf("enter patient id:\n");
    scanf("%hd",&dd);
    for(i=0;i<=4;i++)
    {
        if(dd==arr[i].id)
        {
            j=i;
            break;
        }
    }
    if(arr[j].flag==1)
    {

       for(i=0;i<=4;i++)
       {
        if(dd==arr[i].id)
            {
               x=1;
               printf("allow to edit basic inf\n");
               printf("enter the name: ") ;
               scanf("%s",arr[i].name);
               printf("enter the age: ") ;
               scanf("%hd",&arr[i].age);
               printf("enter the gender m for male and f for female: ") ;
               scanf(" %c",&arr[i].gender);
               break;
            }
       }
    }
    else
    {
        printf("id is canceled\n");
       return;
    }
    if(x==0)
    printf("invalid id\n");
}

/////////////////////////////////////////////////////////////////////////

void Cancel_reservation(void)
{
    s8 i;
	s16 d;
    printf("enter the id: ");
    scanf("%hd",&d);
    for(i=0;i<5;i++)
    {
        if(d==arr[i].id)
           {
               arr[i].flag=0;
               break;
           }
    }

}
/////////////////////////////////////////////////////////////////////



void Reserve_a_slot_with_the_doctor(void)
{
    s8 i,x=0; 
	s16 j,de;
    printf("avaliable slots is: \n");
    for(i=0;i<5;i++)
    {
        if(arr[i].flag==0)
            printf("slot %c is avaliable\n",i+49);
    }
    printf("enter the num of wanted slot:\n");
    scanf("%hd",&j);
    if(arr[j-1].flag==0)
    {
        printf("enter the id:\n");
        scanf("%hd",&de);
        for(i=0;i<5;i++)
       {
         if(arr[i].id==de)
           {
               printf("id exists\n");
               x=1;
               break;
           }
       }
       if(x==0)
       {
           arr[j-1].id= de;
           printf("enter the name:\n");
           scanf("%s",arr[j-1].name);
           printf("enter the age:\n");
           scanf("%hd",&arr[j-1].age);
           printf("enter the gender m for male and f for female::\n");
           scanf(" %c",&arr[j-1].gender);
           arr[j-1].flag = 1;
       }


    }
    else
        printf("not allowed its already taken\n");
}

///////////////////////////////////////////////////////
