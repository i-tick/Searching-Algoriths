#include<iostream>
#include<unordered_map>
using namespace std;
class Student{
    public:
    string fname,lname;
    int roll;
     Student(string f,string l,int no)
     {
         fname=f;
         lname=l;
         roll=no;
     }
     bool operator==(const Student &s)const{
         return roll==s.roll?true:false;
     }
};
//own hash function
class HashFn{
  public:
  size_t operator()(const Student &s)const{
      return s.fname.length()+s.lname.length();
  }
};
int main()
{
    unordered_map<Student,int,HashFn> s_m;
    Student s1("Rittik","Biswal",18);
    Student s2("Rahul","Gupta",17);
    Student s3("Raunak","Agarwal",15);
    Student s4("Rittik","Biswal",20);
    s_m[s1]=100;
    s_m[s2]=200;
    
    for(auto s:s_m)
    {
        cout<<s.first.fname<<s.second<<endl;
    }
    return 0;
}
