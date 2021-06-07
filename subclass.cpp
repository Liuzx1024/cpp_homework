#include <iostream>
#include <istream>
#include <iterator>
#include <ostream>
#include <cstring>

class Student{
protected:
	char *pname;
	int age;
	int ID;
	int cppscore;
public:
	explicit Student(int id=0,int cscore=0,int a=0);
	~Student(){
		delete pname;
		std::cout<<"~Student successfully!"<<std::endl;

	}
	void display();
};

Student::Student(int id, int cscore, int a) {
    age=a;
    cppscore=cscore;
    ID=id;
    pname = new char[20];
    std::strcpy(pname,"Notaniceaxe");
    std::cout<<"generate Student successfully!"<<std::endl;

}

void Student::display() {
    std::cout<<"The name of student is"<<pname<<std::endl;
    std::cout<<"The age of student is"<<age<<std::endl;
    std::cout<<"The ID of student is"<<ID<<std::endl;
    std::cout<<"The cppscore of student is"<<cppscore<<std::endl;
}

class ThreegoodStudent:public Student
{
friend std::istream&  operator>>(std::istream& in,ThreegoodStudent& tgs);	
friend std::ostream&  operator<<(std::ostream& out,ThreegoodStudent& tgs);	
private:
	char grade;
public:
	explicit ThreegoodStudent(int id=0,int cscore=0,int a =0,char grade ='A');
	~ThreegoodStudent();

};

ThreegoodStudent::ThreegoodStudent(int id,int cscore,int a,char grade):Student(id,cscore,a)
{
	this->grade=grade;
	std::cout<<"generate ThreegoodStudent successfully!"<<std::endl;

}

ThreegoodStudent::~ThreegoodStudent()
{
	std::cout<<"~ThreegoodStudent successfully!"<<std::endl;
}

std::istream& operator>>(std::istream& in,ThreegoodStudent& tgs){
	std::cin>>tgs.ID>>tgs.cppscore>>tgs.age>>tgs.grade;
	return in;
}

std::ostream& operator<<(std::ostream& out,ThreegoodStudent& tgs){
	std::cout<<"The name of student is "<<tgs.pname<<std::endl;
	std::cout<<"The age of student is "<<tgs.age<<std::endl;
	std::cout<<"The ID of student is "<<tgs.ID<<std::endl;
	std::cout<<"The cppscore of student is "<<tgs.cppscore<<std::endl;
	std::cout<<"The Grade of student is "<<tgs.grade<<std::endl;
	return out;
}

int main(){
	ThreegoodStudent a;
	std::cout<<"Please input the ID cppscore age and grade of the three good student:"<<std::endl;
	std::cin>>a;
	std::cout<<a<<std::endl;
	return 0;
}
