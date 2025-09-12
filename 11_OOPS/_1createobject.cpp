#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    // Atributes
    int id;
    int age;
    string name;
    int nos;  //number of subject
    float * gpa;

    // constructor || if you not definig constructor then c++(compiler) define itself

    Student()
    {
        cout<< "Student default ctor called : " << endl;
    }
    
    //parametrize ctor
    Student(int id,int age,string name,int nos,float gpa)
    {
        cout<< "Student parametrize ctor called : " << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new float(gpa);
    }

    //copy ctor
    Student(const Student &srcobj)  // srcobj => A
    {
        cout<< "Student parametrize ctor called : " << endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    }

    
    // Behaviour Method Function
    void study()
    {
        cout << this->name << " Studing " << endl;
    }
    void sleep()
    {
        cout << this->name << " Sleeping " << endl;
    }
    void bunk()
    {
        cout << this->name << " Bunking " << endl;
    }

    // distructor || if you not definig distructor then c++(compiler) define itself

    ~Student()
    {
        cout<< "Student default dtor called : " << endl;
        delete this->gpa;
    }


};

int main(){
    // Student A;
    // A.id = 1;
    // A.age = 15;
    // A.name = "Rahul";
    // A.nos = 5 ;
    // A.sleep();

    // Student B;
    // B.id = 2;
    // B.age = 18;
    // B.name = "Priyanka";
    // B.nos = 6 ;
    // B.study();

    Student A(1,15,"Akhand",5,9.0);  //stack
    // Student B(2,16,"Rohit",6);
    // Student C(3,17,"Surya",7);
    
    // A.bunk();
    // B.sleep();


    //Copy ctor
    // Student C = A;    
    Student C(A);    
    
    // cout <<"A name = > " << A.name <<" C Nanme =>"<< endl;

    //Dynamic Alocation or Student pointer
    Student *D = new Student(1,14,"Babban",7,9.8);
    cout << D->name << endl;
    cout << D->age << endl;
    D->study();
    delete D;  // use to call dtor in case of pointer
    return 0;
}