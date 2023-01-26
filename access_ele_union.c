
#include <stdio.h>
#include <string.h>
 
union student 
{
      char name[20];
      char subject[20];
      float percentage;
};
 
int main() 
{
    union student record1;
    union student record2;

    printf("student record 1 ->\n");
    strcpy(record1.name, "LOKESH KHATIK");
    printf(" Name       : %s \n", record1.name);
 
    strcpy(record1.subject, "SCIENCE");
    printf(" Subject    : %s \n", record1.subject);
 
    record1.percentage = 87.40;
    printf(" Percentage : %.2f \n\n", record1.percentage);
 
    printf("student record2 ->\n");
    strcpy(record2.name, "SHUBHAM PRAJAPAT");
    printf(" Name       : %s \n", record2.name);
 
    strcpy(record2.subject, "SCIENCE");
    printf(" Subject    : %s \n", record2.subject);
 
    record2.percentage = 87.80;
    printf(" Percentage : %.2f \n", record2.percentage);
    return 0;
}