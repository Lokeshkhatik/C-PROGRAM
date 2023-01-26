#include<stdio.h>
 struct student {
    char *stdname;
    int stdage;
    int stdrollno;
};

int main(){
    struct student s1;
    s1.stdname = "LOKESH KHATIK";
    s1.stdage = 18;
    s1.stdrollno = 64;
    printf("student name =  %s \n",s1.stdname);
    printf("student age =  %d \n",s1.stdage);
    printf("student Roll No. =  %d \n",s1.stdrollno);

    return 0;
    
}