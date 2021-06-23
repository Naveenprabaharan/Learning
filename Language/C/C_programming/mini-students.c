#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student
{
    int rno;
    char name[20];
    struct subject
    {
        int scode;
        char sname[20];
        int mark;
    }sub[3];
    int total;
    float per;
}student;

void create()
{
    int n;
    puts("how many students details you wanna enter:");
    scanf("%d",&n);

    student *s;
    s=(student*)calloc(n,sizeof(student));

    FILE *fp;
    fp=fopen("student.txt","w");

    for(int i=0;i<n;i++)
    {
        s[i].total=0;
        s[i].per=0;
        puts("Enter student Roll No:");
        scanf("%d",&s[i]);
        fflush(stdin);
        puts("Enter student Name:");
        scanf("%[^\n]s",s[i].name);

        for(int j=0;j<3;j++)
        {
            puts("Enter subject code:");
            scanf("%d",&s[i].sub[j].scode);
            fflush(stdin);
            puts("Enter subject Name:");
            scanf("%s",s[i].sub[j].sname);
            puts("Enter subject MARK:");
            scanf("%d",&s[i].sub[j].mark);
            s[i].total +=s[i].sub[j].mark;

        }
        s[i].per=s[i].total/3.0;
        fwrite(&s[i],sizeof(student),1,fp);
    }
    fclose(fp);
}

void display()
{
    student s1;
    FILE *fp;
    fp=fopen("student.txt","r");

    while(fread(&s1,sizeof(student),1,fp))
    {
        printf("\n%-5d%-20s",s1.rno,s1.name);
        for(int j=0;j<3;j++)
        {
            printf("%4d",s1.sub[j].scode);
            printf("%8s",s1.sub[j].sname);
            printf("%4d",s1.sub[j].mark);
        }
        printf("%5d%7.2f",s1.total,s1.per);
    }

    fclose(fp);
}

void append()
{
    int n;
    puts("how many students details you wanna enter:");
    scanf("%d",&n);

    student *s;
    s=(student*)calloc(n,sizeof(student));

    FILE *fp;
    fp=fopen("student.txt","a");

    for(int i=0;i<n;i++)
    {
        s[i].total=0;
        s[i].per=0;
        puts("Enter student Roll No:");
        scanf("%d",&s[i]);
        fflush(stdin);
        puts("Enter student Name:");
        scanf("%[^\n]s",s[i].name);

        for(int j=0;j<3;j++)
        {
            puts("Enter subject code:");
            scanf("%d",&s[i].sub[j].scode);
            fflush(stdin);
            puts("Enter subject Name:");
            scanf("%s",s[i].sub[j].sname);
            puts("Enter subject MARK:");
            scanf("%d",&s[i].sub[j].mark);
            s[i].total +=s[i].sub[j].mark;

        }
        s[i].per=s[i].total/3.0;
        fwrite(&s[i],sizeof(student),1,fp);
    }
    fclose(fp);
}

void norecs()
{
    student s1;
    FILE *fp;
    fp=fopen("student.txt","r");
    fseek(fp,0,SEEK_END);
    int n=ftell(fp)/sizeof(student);
    printf("Document has %d records!",n);
    fclose(fp);
}


void search()
{
    student s1;
    FILE *fp;
    fp=fopen("student.txt","r");
    int rno,flag=0;
    puts("enter Roll number to search:");
    scanf("%d",&rno);

    while(fread(&s1,sizeof(student),1,fp))
    {
        if(rno==s1.rno)
        {
        printf("\n%-5d%-20s",s1.rno,s1.name);
        for(int j=0;j<3;j++)
        {
            printf("%4d",s1.sub[j].scode);
            printf("%8s",s1.sub[j].sname);
            printf("%4d",s1.sub[j].mark);
        }
        printf("%5d%7.2f",s1.total,s1.per);
        flag=1;
        }
    }
    if(flag !=1)
    {
        puts("record not found!");
    }
    fclose(fp);
}

void update()
{
    student s1;
    FILE *fp,*fp1;
    fp=fopen("student.txt","r");
    fp1=fopen("temp.txt","w");
    int rno,flag=0;
    puts("enter Roll number to update:");
    scanf("%d",&rno);

    while(fread(&s1,sizeof(student),1,fp))
    {
        if(rno==s1.rno)
        {
            flag=1;
            s1.total=0;
            s1.per=0;
            fflush(stdin);
            puts("Enter student New Name:");
            scanf("%[^\n]s",s1.name);

            for(int j=0;j<3;j++)
            {
                puts("Enter subject New code:");
                scanf("%d",&s1.sub[j].scode);
                fflush(stdin);
                puts("Enter subject New Name:");
                scanf("%s",s1.sub[j].sname);
                puts("Enter subject New MARK:");
                scanf("%d",&s1.sub[j].mark);
                s1.total +=s1.sub[j].mark;

            }
            s1.per=s1.total/3.0;
        }
        fwrite(&s1,sizeof(student),1,fp1);
    }
    fclose(fp);
    fclose(fp1);


    if(flag == 1)
    {

        fp=fopen("student.txt","w");
        fp1=fopen("temp.txt","r");
        while(fread(&s1,sizeof(student),1,fp1))
        {
            fwrite(&s1,sizeof(student),1,fp);
        }

        fclose(fp);
        fclose(fp1);

    }
    else
    {
        puts("record Not found!");
    }

}

void delet()
{
    student s1;
    FILE *fp,*fp1;
    fp=fopen("student.txt","r");
    fp1=fopen("temp.txt","w");
    int rno,flag=0;
    puts("enter Roll number to update:");
    scanf("%d",&rno);

    while(fread(&s1,sizeof(student),1,fp))
    {
        if(rno==s1.rno)
        {
            flag=1;
        }
        else
        {
            fwrite(&s1,sizeof(student),1,fp1);
        }

    }
    fclose(fp);
    fclose(fp1);


    if(flag == 1)
    {

        fp=fopen("student.txt","w");
        fp1=fopen("temp.txt","r");
        while(fread(&s1,sizeof(student),1,fp1))
        {
            fwrite(&s1,sizeof(student),1,fp);
        }

        fclose(fp);
        fclose(fp1);

    }
    else
    {
        puts("record Not found!");
    }

}

void short_onscreen()
{
    student *s,s1;
    FILE *fp;

    fp=fopen("student.txt","r");

    fseek(fp,0,SEEK_END);
    int n=ftell(fp)/sizeof(student);

    s=(student*)calloc(n,sizeof(student));
    rewind(fp);
    for(int i=0;i<n;i++)
    {
        fread(&s[i],sizeof(student),1,fp);
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i].total >s[j].total)
            {
                s1=s[i];
                s[i]=s[j];
                s[j]=s1;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("\n%-5d%-20s",s[i].rno,s[i].name);
        for(int j=0;j<3;j++)
        {
            printf("%4d",s[i].sub[j].scode);
            printf("%8s",s[i].sub[j].sname);
            printf("%4d",s[i].sub[j].mark);
        }
        printf("%5d%7.2f",s[i].total,s[i].per);
    }



    fclose(fp);
}

void short_onfile()
{
    student *s,s1;
    FILE *fp;

    fp=fopen("student.txt","r");

    fseek(fp,0,SEEK_END);
    int n=ftell(fp)/sizeof(student);

    s=(student*)calloc(n,sizeof(student));
    rewind(fp);
    for(int i=0;i<n;i++)
    {
        fread(&s[i],sizeof(student),1,fp);
    }
    fclose(fp);

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i].total >s[j].total)
            {
                s1=s[i];
                s[i]=s[j];
                s[j]=s1;
            }
        }
    }

    fp=fopen("student.txt","w");
    for(int i=0;i<n;i++)
    {
        fwrite(&s[i],sizeof(student),1,fp);
    }


    for(int i=0;i<n;i++)
    {
        printf("\n%-5d%-20s",s[i].rno,s[i].name);
        for(int j=0;j<3;j++)
        {
            printf("%4d",s[i].sub[j].scode);
            printf("%8s",s[i].sub[j].sname);
            printf("%4d",s[i].sub[j].mark);
        }
        printf("%5d%7.2f",s[i].total,s[i].per);

    }

    fclose(fp);

}

void short_onscreenname()
{
    student *s,s1;
    FILE *fp;

    fp=fopen("student.txt","r");

    fseek(fp,0,SEEK_END);
    int n=ftell(fp)/sizeof(student);

    s=(student*)calloc(n,sizeof(student));
    rewind(fp);
    for(int i=0;i<n;i++)
    {
        fread(&s[i],sizeof(student),1,fp);
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(strcmp(s[i].name,s[j].name)>0)
            {
                s1=s[i];
                s[i]=s[j];
                s[j]=s1;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("\n%-5d%-20s",s[i].rno,s[i].name);
        for(int j=0;j<3;j++)
        {
            printf("%4d",s[i].sub[j].scode);
            printf("%8s",s[i].sub[j].sname);
            printf("%4d",s[i].sub[j].mark);
        }
        printf("%5d%7.2f",s[i].total,s[i].per);
    }



    fclose(fp);

}

int main()
{
    int ch;


    do
    {
        puts("\n1.CREATE");
        puts("2.DISPLAY");
        puts("3.APPEND");
        puts("4.NO OF RECORDS");
        puts("5.SEARCH");
        puts("6.UPDATE");
        puts("7.DELETE");
        puts("8.SHORT BY TOTAL-ONSCREEN");
        puts("9.SHORT BY TOTAL-ON FILE");
        puts("10.SHORT BY NAME-ON FILE");
        puts("0.EXIT");

        puts("Enter the Choice:");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            {
                create();
                break;
            }
        case 2:
            {
                display();
                break;
            }
        case 3:
            {
                append();
                break;
            }
        case 4:
            {
                norecs();
                break;
            }
        case 5:
            {
                search();
                break;
            }
        case 6:
            {
                update();
                break;
            }
        case 7:
            {
                delet();
                break;
            }
        case 8:
            {
                short_onscreen();
                break;
            }
        case 9:
            {
                short_onfile();
                break;
            }
        case 10:
            {
                short_onscreenname();
                break;
            }
        }

    }while(ch !=0);
    return 0;
}
