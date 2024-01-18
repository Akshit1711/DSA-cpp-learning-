#include<iostream>
#include<string>
using namespace std;

class states{                    // create a class
    public:                     // access mode


    // function dectertion with perameter values , name , city , states  
    //  default value of perameter if user does not have permission then default value assign 
     void city(string x="not_name", string y="not_city", string z="not_state"){
        cout<< "Member Name  : "<< x <<endl;
        cout<< "City Name : "<< y <<endl;
        cout<< "States Name : "<< z <<endl;
    }
};
    int main (){
        states s1;                                      // create a object of class
        s1.city("Akshit","Surat", "Gujarat");          //call a function using a object of class
        cout<<endl;                                   // next line 
        s1.city("krish");                            // if not assign a perameter and call a function using a object of class then default value of perameter assign 
    }
