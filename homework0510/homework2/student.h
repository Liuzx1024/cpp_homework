#ifndef __STUDENT_H
#define __STUDENT_H

class student{
    private:
        long int id;
        int cppscore;
        char *pname;
    public:
        student();
        student(long int num,int score,char *name);
        student(student &stu);
        ~student();
        void PrintInfo();
};

#endif