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

private:
    float * gpa;
    string gf;


    // constructor || if you not definig constructor then c++(compiler) define itself
 public:

    void setgpa(float a){
        *this->gpa = a;
    }
    float getgpa(){
        return *this->gpa;
    }

    Student()
    {
        cout<< "Student default ctor called : " << endl;
    }
    
    //parametrize ctor
    Student(int id,int age,string name,int nos,float gpa,string gf)
    {
        cout<< "Student parametrize ctor called : " << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new float(gpa);
        this->gf = gf;
    }

    //copy ctor
    Student(const Student &srcobj)  // srcobj => A
    {
        cout<< "Student B parametrize ctor called : " << endl;
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

private:
    void gfChatting()
    {
        cout << this->name << "Chatting with gf : " << endl;
    }

};

int main(){

    Student A(1,23,"Rahul",5,8.9,"Roli");
    
    cout<< A.name <<endl;
    // cout << A.gf << endl;   //not accesssable

    Student B(A);
    A.sleep();
    cout << A.getgpa() << endl;
    A.setgpa(4.5);
    cout << A.getgpa() << endl;



    return 0;
}