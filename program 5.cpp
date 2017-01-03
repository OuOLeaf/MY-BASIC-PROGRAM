#include<iostream>
using namespace std;
int main(){
	int blank[5],T;
	cin>>T;
    for(int i=1;i<=T;i++){//while(T--)也可以，比較好看不是嗎
    	cin>>blank[1];
    	cin>>blank[2];
    	cin>>blank[3];
    	cin>>blank[4];
    	if(blank[4]-blank[3]==blank[2]-blank[1]){
		blank[5]=blank[4]+(blank[2]-blank[1]);//blank[5]不在定義的範圍內，反而blank[0]在陣列中卻沒有用到，簡而言之，假設你的電腦是一張紙（記憶體），沒有預先留地方給blank[5]，在寫這張紙blank[5]的時候可能會壞掉	
		cout<<blank[1]<<' '<<blank[2]<<' '<<blank[3]<<' '<<blank[4]<<' '<<blank[5]<<' '<<endl;	
	}
	else if(blank[4]/blank[3]==blank[2]/blank[1]){
		cout<<blank[1]<<' '<<blank[2]<<' '<<blank[3]<<' '<<blank[4]<<' '<<blank[4]*(blank[2]/blank[1])<<endl;

	}
    }
}
