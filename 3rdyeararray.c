#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char s1[]={"     "},s2[]={"    "},s3[]={"     "},item1[4],item2[5],item3[4],item4[4],item5[5];
void row1 ()
{
    int ret;
    printf("\nenter the word\n");
    scanf("%s",&item1);
    ret=strcmp(item1,"few");
    if(ret==0)
    {
        s1[0]=item1[0];
        s2[0]=item1[1];
        s3[0]=item1[2];
    }
    else
    {
        printf("\nincorrect ans. ,fill it again\n");

    }
}
void column1()
{   int ret;
    printf("enter the word\n");
    scanf("%s",&item2);
    ret=strcmp(item2,"fawn");
    if(ret==0)
    {
        s1[0]=item2[0];
        s1[1]=item2[1];
        s1[2]=item2[2];
        s1[3]=item2[3];
    }
    else
    {
        printf("\nincorrect ans. , fill it again \n");
    }
}

void row2()
{
    int ret;
    printf("enter the word\n");
    scanf("%s",&item3);
    ret=strcmp(item3,"are");
    if(ret==0)
    {
     s1[1]=item3[0];
     s2[1]=item3[1];
     s3[1]=item3[2];
    }
    else
    {
      printf("incorrect ans., fill it again");

    }
}

void row3()
{
    int ret;
    printf("enter the word\n");
    scanf("%s",&item4);
    ret=strcmp(item4,"war");
    if(ret==0)
    {
     s1[2]=item4[0];
     s2[2]=item4[1];
     s3[2]=item4[2];
    }
    else
    {
     printf("\nincorrect ans., fill it again\n");
    }
}

void column3()

{
    int ret;
    printf("enter the word\n");
    scanf("%s",&item5);

    if(strcmp(item5,"were")==0)
    {
      strcpy(s3,item5);
    }
    else
    {
     printf("\n incorrect ans., fill it again\n");

    }
}

void display()
{
    printf("|%c_|\t|%c_|\t|%c_|\n|%c_|\t|%c_|\t|%c_|\n|%c_|\t|%c_|\t|%c_|\t\n|%c_|\t\t|%c_|",s1[0],s2[0],s3[0],s1[1],s2[1],s3[1],s1[2],s2[2],s3[2],s1[3],s3[3]);
}

void main()
{   int ch;
    printf("welcome\n");
    printf("|_|\t|_|\t|_|\n|_|\t|_|\t|_|\n|_|\t|_|\t|_|\t\n|_|\t\t|_|\n");
do{
   printf("  case 1==\trow 1. 3 word letter represents less quantity\n case 2==\tcolumn 1. light yellow is also known as\n case 3==\trow 2. a helping verb\n case 4==\trow 3. A recent movie released on 2nd october\n case 5==\tcolumn 3. another helping verb having 4 character \n \n case 6==\texit");
   printf("\n;enter the choice\n");
   scanf("%d",&ch);
   switch(ch)
   {

    case 1:
    printf(" now you are going to fill row 1\n");
    row1();
    printf("|%c|\t|%c|\t|%c|\n|%c|\t|%c|\t|%c|\n|%c|\t|%c|\t|%c|\t\n|%c|\t\t|%c|\n\n\n",s1[0],s2[0],s3[0],s1[1],s2[1],s3[1],s1[2],s2[2],s3[2],s1[3],s3[3]);
        break;
    case 2:
    printf("\nnow you are going to fill 1st column\n");
    column1();
    printf("|%c|\t|%c|\t|%c|\n|%c|\t|%c|\t|%c|\n|%c|\t|%c|\t|%c|\t\n|%c|\t\t|%c|\n\n\n",s1[0],s2[0],s3[0],s1[1],s2[1],s3[1],s1[2],s2[2],s3[2],s1[3],s3[3]);
        break;
    case 3:
    printf("\nnow you are going to fill 2nd row\n");
    row2();
    printf("|%c|\t|%c|\t|%c|\n|%c|\t|%c|\t|%c|\n|%c|\t|%c|\t|%c|\t\n|%c|\t\t|%c|\n\n\n",s1[0],s2[0],s3[0],s1[1],s2[1],s3[1],s1[2],s2[2],s3[2],s1[3],s3[3]);
        break;
    case 4:
    printf("\nnow you are going to fill 3rd row\n");
    row3();
    printf("|%c|\t|%c|\t|%c|\n|%c|\t|%c|\t|%c|\n|%c|\t|%c|\t|%c|\t\n|%c|\t\t|%c|\n\n\n",s1[0],s2[0],s3[0],s1[1],s2[1],s3[1],s1[2],s2[2],s3[2],s1[3],s3[3]);
        break;
    case 5:
    printf("\nnow you are going to fill 3rd column\n");
    column3();
    printf("|%c|\t|%c|\t|%c|\n|%c|\t|%c|\t|%c|\n|%c|\t|%c|\t|%c|\t\n|%c|\t\t|%c|\n\n\n",s1[0],s2[0],s3[0],s1[1],s2[1],s3[1],s1[2],s2[2],s3[2],s1[3],s3[3]);
        break;
    case 6:
        exit(0);
    default:
        printf("\ninvalid choice\n");
        break;
    }
 }while(ch!=6);

}
