#include "student.h"

int main(){

    char name1[]="liuzixi";
    student stu1(202030461428,100,name1);
    student stu2=stu1;
    stu1.PrintInfo();
    stu2.PrintInfo();
    return 0;
}