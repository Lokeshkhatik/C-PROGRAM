#include<stdio.h>

struct student {
    char *name[50] ;
    int age ;
    int roll;
    
};

int main(){
    int n=2;
    struct student s[n];
    int i;
    for(i=1;i<=n;i++){
        printf("Enter the name of  student %d = ",i);
        scanf("%s",&s[i].name);
        printf("Enter the age of student %d = ",i);
        scanf("%d",&s[i].age);
        printf("Enter the roll no of student %d = ",i);
        scanf("%d",&s[i].roll);
        
    }
    printf("\n\ndetails of student  == >\n");
    for(i=1;i<=n;i++){
        printf(" the name of  student %d = %s \n",i,s[i].name);
        printf(" the age of student %d = %d \n",i,s[i].age);
        printf(" the roll no of student %d = %d\n",i,s[i].roll);
        
        
    }
    return 0;
}