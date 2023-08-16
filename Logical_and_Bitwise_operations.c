#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<string.h>

typedef struct {
    int Serial;
    char Name[15];
    char Id[8];
    int Arabic;
    int English;
    int Math;
    int Total
}Student;

int main()
{
    Student class [50];
    int noOfStudents,studentsIndex;
    printf("Enter No. Of the student in the class:");
    scanf("%d",&noOfStudents);
    for(studentsIndex=1;studentsIndex<=noOfStudents;studentsIndex++)
    {
        printf("Add new student data ...\n");
        printf("#%d\n",class[studentsIndex].Serial=studentsIndex);
        printf("Name:");
        scanf("%s",&class[studentsIndex].Name);
        printf("ID:");
        scanf("%s",&class[studentsIndex].Id);
        printf("Arabic:");
        scanf("%d",&class[studentsIndex].Arabic);
        printf("English:");
        scanf("%d",&class[studentsIndex].English);
        printf("Math:");
        scanf("%d",&class[studentsIndex].Math);
        class[studentsIndex].Total=class[studentsIndex].Arabic+class[studentsIndex].English+class[studentsIndex].Math;
        printf("The Student Full Data is:\n");
        printf("#   Student Name        ID      Arabic  English     Math    Total\n");
        printf("%d\t%s\t\t%s\t\t%d\t%d\t%d\t%d\n",class[studentsIndex].Serial,class[studentsIndex].Name,class[studentsIndex].Id,class[studentsIndex].Arabic,class[studentsIndex].English,class[studentsIndex].Math,class[studentsIndex].Total);

    }

}