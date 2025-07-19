#include <iostream>



using namespace std;

void pipi(string str){

 static int i=0;

 if(str.length()==0){

  return;

 }

 if(str[i]=='p' && str[i+1]=='i'){

  cout<<"3.14";

  pipi(str.substr(2));

 }

 else{

  cout<<str[0];

  pipi(str.substr(1));

 }

}

int main(){

 string str = "klssfrsbsbspipipip";

 pipi(str);

 return 0;

}
