#include<iostream>
using namespace std;
class employee{
    public:
    int eId;
    string eName;
   
};
int main()
{   employee sai;
    sai. eId = 5;
    sai. eName = "sai";
    cout<<"employee eId"<< sai.eId <<endl;
    cout<<"employee name"<< sai.eName <<endl;
}