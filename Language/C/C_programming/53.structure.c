#include<stdio.h>

int main()
{
    typedef struct list
    {
        int rno;
        char name[20];
        char gender;
        int age;
        char grade;
        float avg_m;
    }process;

    process student[100];

    int n;
    puts("Enter the No of students:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Enter student %d R_No: ",i+1);
        scanf("%d",&student[i].rno);
        fflush(stdin);
        printf("Enter student %d Name:",i+1);
        scanf("%s",student[i].name);
        fflush(stdin);
        printf("Enter student %d gender:",i+1);
        scanf("%c",&student[i].gender);
        printf("Enter student %d age:",i+1);
        scanf("%i",&student[i].age);
        fflush(stdin);
        printf("Enter student %d grade:",i+1);
        scanf("%c",&student[i].grade);
        printf("Enter student %d avg_m:",i+1);
        scanf("%f",&student[i].avg_m);
    }


    puts("\n---- Entered Details----");
    for(int i=0;i<n;i++)
    {
        printf("\nR_NO:%d",student[i].rno);
        printf("\nName:%s",student[i].name);
        printf("\nGender:%c",student[i].gender);
        printf("\nAge:%i",student[i].age);
        printf("\nGrade:%c",student[i].grade);
        printf("\nAverage Mark:%.2f",student[i].avg_m);
        printf("\n\n");
    }
    return 0;
}
