#include <iostream>
using namespace std;
int main(){
int years;
cout<<"Dd",cin>>years;
if (years%4==0){
    cout<<"leap:"<<years;

}
else if(years%100==0) {
    cout<<"not";
}

else if(years%400==0){
    cout<<"Leap: "<<years;
}
else {
    cout<<"Not";
}

return 0;

}
