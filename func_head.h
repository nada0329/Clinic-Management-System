#ifndef headerfile
#define headerfile

#include <stdio.h>
#include <stdlib.h>

typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int u32;
typedef signed char s8;
typedef signed short int s16;
typedef signed long int s32;
typedef float f32;
typedef double f64;

typedef struct
{
    s16 id;
    s16 age;
    s8 gender;
    s8 name[10];
    s8 flag;
}patient;

void check_admin_pass(void);
void choose_for_admin(void);
void choose_for_user(void);
void View_patient_record(void);
void View_today_reservations(void);
void Edit_patient_record(void);
void Cancel_reservation(void);
void Reserve_a_slot_with_the_doctor(void);

#endif