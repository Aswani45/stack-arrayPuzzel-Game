#include<stdio.h>
#include<stdlib.h>
#define max1 5
#define max2 4
#define max3 5
int top1=-1,top2=-1,top3=-1,count1=0,count2=0,count3=0;
char s1[max1],s2[max2],s3[max3],item1[4],item2[5],item3[4],item4[4],item5[5];

void row1()
{
    printf("\nenter the item\n");
    scanf("%s",&item1);
    if(strcmp(item1,"few")==0)
    {
    s1[++top1]=item1[0];count1++;
    s2[++top2]=item1[1];count2++;
    s3[++top3]=item1[2];count3++;
    }
      else
      {
        printf("\n incorrect input\n");
        row1();
      }
}

void column1()
{int i;
    printf("\n enter the item\n");
    scanf("%s",&item2);
    if(strcmp(item2,"fawn")==0)
    {
        for(i=1;i<4;i++)
        {
            s1[++top1]=item2[i];
            count1++;
        }
    }
    else{
        printf("\ninvalid ans.\n");
        column1();
    }
}


void row2()
{
    printf("\n enter the item\n");
    scanf("%s",&item3);
    if(strcmp(item3,"are")==0)
    {
        s2[++top2]=item3[1];count2++;
        s3[++top3]=item3[2];count3++;
    }
    else
    {
        printf("\n incorrect ans.\n");
        void row2();
    }
}

void row3()
{
    printf("\nenter the item\n");
    scanf("%s",item4);
    if(strcmp(item4,"war")==0)
    {
        s2[++top2]=item4[1];count2++;
        s3[++top3]=item4[2];count3++;
    }
    else
    {
        printf("\nincorrect  ans.\n");
        void row3();
    }
}

void column3()
{
    printf("\nenter the item\n");
    scanf("%s",&item5);
    if(strcmp(item5,"were")==0)
      {
          s3[++top3]=item5[3];
      }
      else
      {
        printf("\n incorrect ans.\n");
        void column3();
      }
}


void main()
{
       printf("welcome\n");
    printf("|_|\t|_|\t|_|\n|_|\t|_|\t|_|\n|_|\t|_|\t|_|\t\n|_|\t\t|_|\n");
    printf("  \trow 1. 3 word letter represents less quantity\n \tcolumn 1. light yellow is also known as\n \trow 2. a helping verb\n\t  row 3. a recent movie releasd on 2nd october\n column 3. another helping verb\n");

    printf(" now you are going to fill row 1\n");
    row1();
    printf("|%c|\t|%c|\t|%c|\n|%c|\t|%c|\t|%c|\n|%c|\t|%c|\t|%c|\t\n|%c|\t\t|%c|",s1[0],s2[0],s3[0],s1[1],s2[1],s3[1],s1[2],s2[2],s3[2],s1[3],s3[3]);


    printf("\nnow you are going to fill 1st column\n");
    column1();
    printf("|%c|\t|%c|\t|%c|\n|%c|\t|%c|\t|%c|\n|%c|\t|%c|\t|%c|\t\n|%c|\t\t|%c|",s1[0],s2[0],s3[0],s1[1],s2[1],s3[1],s1[2],s2[2],s3[2],s1[3],s3[3]);


    printf("\nnow you are going to fill 2nd row\n");
    row2();
    printf("|%c|\t|%c|\t|%c|\n|%c|\t|%c|\t|%c|\n|%c|\t|%c|\t|%c|\t\n|%c|\t\t|%c|",s1[0],s2[0],s3[0],s1[1],s2[1],s3[1],s1[2],s2[2],s3[2],s1[3],s3[3]);


    printf("\nnow you are going to fill 3rd row\n");
    row3();
    printf("|%c|\t|%c|\t|%c|\n|%c|\t|%c|\t|%c|\n|%c|\t|%c|\t|%c|\t\n|%c|\t\t|%c|",s1[0],s2[0],s3[0],s1[1],s2[1],s3[1],s1[2],s2[2],s3[2],s1[3]);


    printf("\nnow you are going to fill 3rd column\n");
    column3();
    printf("|%c|\t|%c|\t|%c|\n|%c|\t|%c|\t|%c|\n|%c|\t|%c|\t|%c|\t\n|%c|\t\t|%c|\n\n\n",s1[0],s2[0],s3[0],s1[1],s2[1],s3[1],s1[2],s2[2],s3[2],s1[3],s3[3]);
}
