#include <iostream>
using namespace std;
int main(){
float sales,a,total;
cout<<"Enter sales amount :  ",cin>>sales;
if (sales>5000){
    a = (sales/100)*12;
    total = sales-a;
    cout<<"Extra 12% discount:  "<<a;
    cout<<"\nTotal money you have to pay:  "<<total;
}
else{
    a = (sales/100)*7;
    total = sales-a;
    cout<<"7% discount:  "<<a;
    cout<<"\nTotal money you have to pay:  "<<total;
}
}
