#include"file.h"



student* make_tree_of_students(int x )
{
    student* temp = (student*)malloc(sizeof(student));
    temp->id = x ;
    char n[15]="Mohammed";
    strcpy(temp->name,n);
    temp->level = &level1;
    temp->grade[0] = 50;
    temp->grade[1] = 50;
    temp->left = NULL ;
    temp->right = NULL ;
    return temp ;
}

void insert_student(student* n,int x)
{
    if (n->id >= x )
    {
        if(n->left == NULL)
        {
            student* temp = (student*)malloc(sizeof(student));
            temp->id = x ;
            temp->left = NULL ;
            temp->right = NULL ;
            printf("Enter student Name \n");
            scanf("%s",temp->name);
            int x ;
            printf("Enter student Level 1 for level 1 \n 2 for level 2 \n 3 for level 3 \n");
            scanf("%d",&x);
            switch(x)
            {
            case 1:
                temp->level = &level1;
                break ;

            case 2:
                temp->level = &level2;
                break ;

            case 3:
                temp->level = &level3;
                break ;

            default:
                printf("wrong level");
                break ;
            }
            for (int i = 0 ; i<2 ; i++)
            {
                printf("Enter %s grade \n",temp->level->subjects[i]);
                scanf("%d",&temp->grade[i]);
            }
            n->left = temp ;
            return ;
            }
            else
            {
                insert_student(n->left,x);
            }
        }
        else if (n->id < x )
        {
            if(n->right == NULL)
            {
                student* temp = (student*)malloc(sizeof(student));
                temp->id = x ;
                temp->left = NULL ;
                temp->right = NULL ;
                printf("Enter student Name \n");
                scanf("%s",temp->name);
                int x ;
                        printf("Enter student Level 1 for level 1 \n 2 for level 2 \n 3 for level 3 \n");
            scanf("%d",&x);
            switch(x)
            {
            case 1:
                temp->level = &level1;
                break ;

            case 2:
                temp->level = &level2;
                break ;

            case 3:
                temp->level = &level3;
                break ;

            default:
                printf("wrong level");
                break ;
            }
            for (int i = 0 ; i<2 ; i++)
            {
                printf("Enter %s grade \n",temp->level->subjects[i]);
                scanf("%d",&temp->grade[i]);
            }
                n->right = temp ;
                return 0 ;
            }
            else
            {
                insert_student(n->right,x);
            }
        }
    }

    void display_student(int x, student* n)
    {
        if (n == NULL)
        {
            printf("\nwrong ID\n");
            return ;
        }
        else if (n->id == x)
        {
            printf("\nname : %s",n->name);
            for(int i =0 ; i <2 ; i++)
            {
                printf("\nfirst subject : %s the grade : %d",n->level->subjects[i],n->grade[i]);
            }

            return ;
        }
        else if (n->id > x)
        {
            display_student(x,n->left);
        }
        else if (n->id < x)
        {
            display_student(x,n->right);
        }
    }


    teacher* make_tree_of_teachers(int ID )
    {
        teacher* temp = (teacher*)malloc(sizeof(teacher));
        temp->id = ID;
        char n[15]="Yousif";
        strcpy(temp->name,n);
        char s1[20]="English";
        strcpy(temp->subj,s1);
        temp->salary = 13000;
        temp->left= NULL;
        temp->right = NULL ;
        return temp ;
    }

    void insert_teacher(teacher* n,int x)
    {
        if (n->id >= x )
        {
            if(n->left == NULL)
            {
                teacher* temp = (teacher*)malloc(sizeof(teacher));
                temp->id = x ;
                temp->left = NULL ;
                temp->right = NULL ;
                printf("Enter teacher Name \n");
                scanf("%s",temp->name);
                printf("Enter subject \n");
                scanf("%s",temp->subj);
                printf("Enter salary \n");
                scanf("%d",&temp->salary);
                n->left = temp ;
                return 0 ;
            }
            else
            {
                insert_teacher(n->left,x);
            }
        }
        else if (n->id < x )
        {
            if(n->right == NULL)
            {
                teacher* temp = (teacher*)malloc(sizeof(teacher));
                temp->id = x ;
                temp->left = NULL ;
                temp->right = NULL ;
                printf("Enter teacher Name \n");
                scanf("%s",temp->name);
                printf("Enter subject \n");
                scanf("%s",temp->subj);
                printf("Enter salary \n");
                scanf("%d",&temp->salary);
                n->right = temp ;
                return 0 ;
            }
            else
            {
                insert_teacher(n->right,x);
            }
        }
    }


    void display_teacher(int x, teacher* n)
    {
        if (n == NULL)
        {
            printf("\nwrong ID\n");
            return ;
        }
        else if (n->id == x)
        {
            printf("\nname : %s",n->name);
            printf("\nyour subject : %s",n->subj);
            printf("\nyour salary : %d",n->salary);

            return ;
        }
        else if (n->id > x)
        {
            display_teacher(x,n->left);
        }
        else if (n->id < x)
        {
            display_teacher(x,n->right);
        }
    }
