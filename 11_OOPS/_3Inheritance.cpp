#include<iostream>
#include<string>
using namespace std;

class Vehicle{

protected:
    string name;
    string model;
    int nfoTyres;

    Vehicle(string _name , string _model ,int _noOfTyres)
    {
        cout << "i am inside vehicle ctor" << endl; 
        this->name = _name;
        this->model = _model;
        this->nfoTyres = _noOfTyres;
    }

    string getname(){
        return this->name;
    }

public:
    void start_Engine(){
        cout << "Engine is Starting "<<name<<" "<<model<< endl;
    }
    void stop_Engine(){
        cout << "Engine is Stop"<<name<<" "<<model<< endl;
    }

    ~Vehicle(){
        cout << "I am inside Vechicle dtor" << endl;
    }
};

class Car : public Vehicle{
    
    protected:
    int noOfDoors;
    string TransmissionType;

    public:
    Car(string _name , string _model ,int _noOfTyres,int _noOfDoors , string _TransmissionType):
    Vehicle(_name,_model,_noOfTyres)
    {
        cout << "i am inside Car ctor" << endl; 
        this->noOfDoors = _noOfDoors;
        this->TransmissionType = _TransmissionType;
    }

    void startAC(){
        cout << "Car AC is starting" << name <<" " <<model <<endl;
    }

    ~Car(){
        cout << "I am inside Car dtor" << endl;
    }

};

class MoterCycle : public Vehicle
{
protected:
    string HandleBarStyle;
    string suspensiontype;

public:
    MoterCycle(string _name , string _model ,int _noOfTyres,string HandleBarStyle,string suspensiontype):
    Vehicle(_name,_model,_noOfTyres)
    {
        cout << "i am inside MoterCycle ctor" << endl; 
        this-> HandleBarStyle = HandleBarStyle;
        this-> suspensiontype = suspensiontype;
    };

    void Wieelie(){
        cout << "Wieelie kar rahi hai" << name <<" " <<model <<endl;
    }

    ~MoterCycle(){
        cout << "I am inside MoterCycle dtor" << endl;
    }
};

int main(){

    Car A("Maruti 800","LXI",4,4,"Manual");
    A.start_Engine();
    A.startAC();
    A.stop_Engine();

    // MoterCycle M("BMW","01KQ",2,"U","Hard");
    // M.start_Engine();
    // M.Wieelie();
    // M.stop_Engine();

    return 0;
}