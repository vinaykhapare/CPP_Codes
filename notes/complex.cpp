#include<bits/stdc++.h>
using namespace std;
class Person{
    private:
        string name;
        int age;
    public:
        Person(){
            name = "";
            age = 0;
        }
        void setName(string user){
            if(user.length()==0){
                throw runtime_error("Name is empty");
            }else{
                name = user;
                cout<<name;
            }
        }
        string getname(){
            return name;
        }
};

int main(){
    try{
        Person p1;
        p1.setName("");
    }catch(exception& err){
        cerr<<err.what()<<endl;
    }
    return 0;
}



