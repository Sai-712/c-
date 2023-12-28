#include<iostream>
using namespace std;
int main(){
    typedef double wages;//wages is synonym for double
    typedef float percent;//percentage is a synonym for float
wages w1 = 1000;
wages w2 = 1500;
percent p1 = 10.5;
percent p2 = 15.5;

cout << "the wages earned by worker-1 = $" <<w1 <<endl;
cout << "the wages earned by worker-2 = $" <<w2 <<endl;
cout << " worker-1 will get a rised by "<<p1 <<"%"<<endl;
cout << " worker-2 will get a rised by "<<p2 <<"%"<<endl;
return 0;
}