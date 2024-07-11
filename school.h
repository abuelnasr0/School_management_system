#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct student_{
    int id ;
    char name[20] ;
    struct level* level ;
 //   char level1[][] = {"",""}
    int grade[2];
    struct student_* left ;
    struct student_* right ;
} student ;



typedef struct teacher_{
    int id ;
    int salary ;
    char name[20] ;
    char subj[30] ;
    struct teacher_* left ;
    struct teacher_* right ;
} teacher ;

struct level {
    char subjects[2][16];
} ;
struct level level1;
struct level level2;
struct level level3;


// student functions
student* make_tree_of_students(int ID );
void insert_student(student* n ,int x );
void display_student(int x , student*);

//teachers functions
teacher* make_tree_of_teachers(int ID );
void insert_teacher(teacher* n,int x );
void display_teacher(int x , teacher* n);
