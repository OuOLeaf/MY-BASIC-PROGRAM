#include<iostream>
using namespace std;
int main(){
	int A;
	while(cin>>A){
	
		if(A%400==0){
			cout<<"閏年"<<endl;
		}
		else if(A%100==0){
		cout<<"平年"<<endl;
		} 
		else if(A%4==0){
			cout<<"閏年"<<endl;

		}
		else{
			cout<<"平年"<<endl;
		}}
		return 0;
	}
    
			

