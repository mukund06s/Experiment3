#include <iostream>
using namespace std;
int main(){
char x,a,b;
cout<<"Enter character :  ",cin>>x;
a = int(x);
cout<<"\n"<<int(x);
if (a<=65 && a>=65){
    cout<<"Upper case";
    b = x+32;
    cout<<"\n"<<int(b);
    cout<<"   "<<b;
}
else{
    cout<<"Lower case";
    b = x-32;
    cout<<"\n"<<int(b);
    cout<<"   "<<b;

}



}
