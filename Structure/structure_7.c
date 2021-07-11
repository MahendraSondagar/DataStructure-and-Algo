

/****************************************************
 DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
                   Version 2, December 2020
 
Copyright (C) 2021 Mahendra Sondagar <mahendrasondagar08@gmail.com>

Everyone is permitted to copy and distribute verbatim or modified
copies of this license document, and changing it is allowed as long
as the name is changed.
 
           DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
  TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

 0. You just DO WHAT THE FUCK YOU WANT TO.
 
 Coded: Sun, 11th July 2021 / 18.48 PM 
 ****************************************************/
 
#include <stdio.h>
#include <stdlib.h>


typedef struct 
{
        int rollno;
        int marks;
}Exam_Info_t;

typedef struct 
{
    char *name ;
    int age;
    float height;

    Exam_Info_t Exam_Info;

}Student_Info_t;

void Print_StudentInfo(Student_Info_t Student)
{
    printf("Name   : %s\r\n", Student.name);
    printf("Age    : %d\r\n", Student.age);
    printf("height : %f\r\n", Student.height);
    // printf("rollno : %d\r\n", Student.Exam_Info.rollno);
    // printf("Marks  : %d\r\n", Student.Exam_Info.marks);
}

int main(void)
{

    static  Student_Info_t Student=
    {

        .name = "Mahendra",
        .age= 29,
        .height= 5.4,


         .Exam_Info =
        {
        //     .rollno = 54,
        //     .marks  = 100,
        };
    };
    printf("Nested structure Example \r\n");

return 0;
}
