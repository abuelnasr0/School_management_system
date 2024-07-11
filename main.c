
#include"file.h"

char n[6][15]={"maths","science","Arabic","English","German","French"};


int main()
{

strcpy(level1.subjects[0],n[0]);
strcpy(level1.subjects[1],n[1]);
strcpy(level2.subjects[0],n[2]);
strcpy(level2.subjects[1],n[3]);
strcpy(level3.subjects[0],n[4]);
strcpy(level3.subjects[1],n[5]);
/*///////////////////////////////////////////////////////*/
student* s1 = make_tree_of_students(1000);
teacher* t1 = make_tree_of_teachers(2000);
/*
insert_student(s1,1001);
display_student(1001 , s1);

puts("");



*/


puts("");

int pos;
non:printf("please enter ur position\'1\' for student \n\'2\' for teacher\n\'3\' for admin  \n anything to get out: ");
scanf("%d",&pos);
int id ;
int correct_pass = 1234;
int pass;
int i ;
int x ;
  switch (pos){
  case 1:
    printf("please enter your id:");
    scanf("%d",&id);
    display_student(id , s1);
    goto non ;
    break;

  case 2:
    printf("please enter ur id:");
    scanf("%d",&id);
    display_teacher(id , t1);
    goto non ;
    break;

  case 3:
      printf("enter your password please :\n");
      scanf("%d",&pass);
      if(pass != correct_pass) {
        for(int i =0 ; i< 3 ; i++){
        printf("enter your password again please :\n");
        scanf("%d",&pass);
        if (pass == correct_pass){break;}
        }}
      if(pass != correct_pass) {printf("sorry you are 7aramy");}
      if(pass == correct_pass) {
        mom : printf("Enter 1 to add students \nEnter 2 to add teachers \nEnter 3 to display students \nEnter 4 to display teachers \n");
        scanf("%d",&x);
        switch(x){
        case 1 :
            printf("Enter the ID of new student : ");
            scanf("%d",&id);
            insert_student(s1,id);
            break;
        case 2 :
            printf("Enter the ID of new teacher : ");
            scanf("%d",&id);
            insert_teacher(t1,id);
            break;
        case 3 :
            printf("Enter the ID of the student : ");
            scanf("%d",&id);
            display_student(id , s1);
            break;
        case 4 :
            printf("Enter the ID of the teacher : ");
            scanf("%d",&id);
            display_teacher(id , t1);
            break ;
        default :
            goto mom ;
        }
        int z ;
        printf("Enter 1 to continue editing , anything to get out \n ");
        scanf("%d",&z);
        switch (z){
        case 1 :
            goto mom ;
            break ;
        default :
            goto non ;
            break;
        }
      }
      break;
    default :
        break ;
  }}

