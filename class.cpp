#include<iostream>
#include<string>
using namespace std;
class cars{
    public:
    int number_plate;
    string name ;
    string car_com;
    int car_seller_price;

};
int main (){
    cars deteils1, deteils2;

    deteils1.number_plate=1423;
    deteils2.number_plate=2354;

    deteils1.name="akshit";
    deteils2.name="krish";

    deteils1.car_com="bmw";
    deteils2.car_com="qudi";

    deteils1.car_seller_price=200003;
    deteils2.car_seller_price=422343;

    
    cout<<"name "<<deteils1.name<<"                       "<<"name "<<deteils2.name<<endl;
    cout<<"car company name : "<<deteils1.number_plate<<"           "<<"car company name : "<<deteils2.number_plate<<endl;
    cout<<"car company name : "<<deteils1.car_com<<"            "<<"car company name : "<<deteils2.car_com<<endl;
    cout<<"car seller price :"<<deteils1.car_seller_price<<"          "<<"car seller price :"<<deteils2.car_seller_price<<endl;

    
}