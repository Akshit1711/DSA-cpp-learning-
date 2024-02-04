#include<iostream>
#include<string>
using namespace std;








int main(){






//*************  linear search using arrary
//*************  first find elements was matched then break the loop and return




//     int linear[10]={91,75,48,54,55,12,41,36,75,48};
//     int find_num;

//     cout<<"enter number :"<<endl;

//     cin >> find_num;


// for (int i = 0; i < 10; i++)
// {  
//    if (linear[i] ==find_num )
//    {
//     cout<< "element was found"<<"array index : "<< i << endl;
//     break;
//    }
// }












//how many same element in array index



    int linear[100]={91,75,48,54,55,12,41,36,75,48,3,432,5543,23,51,74,85,95,84,41,12,42,51,45,78,12,45,78,96,85,54,12,12,32,52,41,51,21,12,12,19,99};
    int find_num;

    cout<<"enter number :"<<endl;

    cin >> find_num;

    int j =0;

    cout<< "element was found array index :  ";
for (int i = 0; i < 100; i++)
{  
   if (linear[i] ==find_num )
   {
    cout<< i <<",";
    j++;
   }
   

}
cout <<endl;
cout << "totel number of same element in array :" << j << endl;

}
  
  