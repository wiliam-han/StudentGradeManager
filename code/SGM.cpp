class StudentInfo{
public:
    StudentInfo(){}
    StudentInfo(char* name,char major[]){
        this->studentName=name;
        this->major=new char[10];
        for(int i=0;i<10;++i){
            this->major[i]=major[i];
        }
    }
    ~StudentInfo(){
        delete this->major;
        delete this->studentName;
    }
private:
    char* studentName=nullptr;
    char* major;
};
class Grades:public StudentInfo{
public:
    Grades(){}
    Grades(double g0,double g1,double g2,double g3,double g4,double g5){
        double sum=g0+g1+g2+g3+g4+g5;
        this->examgrade[0]=g0;
        this->examgrade[1]=g1;
        this->examgrade[2]=g2;
        this->examgrade[3]=g3;
        this->examgrade[4]=g4;
        this->examgrade[5]=g5;
        this->evengrade=sum/6;
    }
    double geteven(){
        return this->evengrade;
    }
private:
    double examgrade[6];
    double evengrade;
};
