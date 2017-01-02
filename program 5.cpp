#include<iostream>
using namespace std;
int main(){
	int blank[5],T,A=1;
	cin>>T;
    for(int i=1;i<=T;i++){
    	cin>>blank[1];
    	cin>>blank[2];
    	cin>>blank[3];
    	cin>>blank[4];
    	if(blank[4]-blank[3]==blank[2]-blank[1]){
    		blank[5]=blank[4]+(blank[2]-blank[1]);
    		cout<<blank[1]<<' '<<blank[2]<<' '<<blank[3]<<' '<<blank[4]<<' '<<blank[5]<<' '<<endl;
    		
		}
		else if(blank[4]/blank[3]==blank[2]/blank[1]){
			blank[5]==blank[4]*(blank[2]/blank[1]);
			cout<<blank[1]<<' '<<blank[2]<<' '<<blank[3]<<' '<<blank[4]<<' '<<blank[5]<<endl;
		
		}
	}
}
