#include "student.h"
#include <ostream>
#include <string.h>
#include <iostream>
#include <sys/types.h>
student::student(){
    id=0;
    cppscore=0;
    pname= new char[20];
    strcpy(pname, "NULL");
}
student::student(long int num,int score,char *name){
    id=num;
    cppscore=score;
    pname= new char[20];
    strcpy(pname, name);
}
student::student(student &stu){
    this->id=stu.id;
    this->cppscore=stu.cppscore;
    this->pname=new char[20];
    strcpy(pname, stu.pname);
}
student::~student(){
    delete[] pname;
    std::cout<<"~student() success!"<<std::endl;
}
void student::PrintInfo(){
    std::cout<<"ID of the student is:"<<id<<std::endl;
    std::cout<<"cppscore of the student is:"<<cppscore<<std::endl;
    std::cout<<"name of the student is:"<<pname<<std::endl;
}