#include<iostream>
using namespace std;
#include <sstream>
int splitString(string str)
{
	int d;
	string alpha, num, special;
	for (int i=0; i<str.length(); i++)
	{
		if (isdigit(str[i]))
			num.push_back(str[i]);
		else if((str[i] >= 'A' && str[i] <= 'Z') ||
				(str[i] >= 'a' && str[i] <= 'z'))
			alpha.push_back(str[i]);
		else
			special.push_back(str[i]);
			
	}
if(special.length()){
	return 0;
	
}
	else{
	stringstream ss;  
  ss << num;  
  ss >> d;  
return d;
}
}
int main (){
	string a,b,c;
	int e,f,g;
	
	
	cout<<"enter value a";
	cin>>a;
	
	cout<<"enter value of b";
	cin>>b;
	
	cout<<"enter value of c";
	cin>>c;
	
	cout<<a<<"+"<<b<<"="<<c<<endl;
	e =	splitString(a);
	f =	splitString(b);
	g =	splitString(c);
	
	if(e==0){
	 e=g-f;	
	}
	else if(f==0){
		f=g-e;
	}
	else if( g == 0){
		g=e+f;
	}
	
	
	
	
		
cout<<e<<"+"<<f<<"="<<g<<endl;


}
