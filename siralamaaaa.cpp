#include<iostream>

using namespace std;

int main(){
	int enBuyuk;
	int n;
	
	cout<<"Kac tane sayi gireceksiniz: ";
	cin>>n;
	cout<<endl;
	
	for(int i=1; i<=n;i++){
		int sayi;
		cout<< i <<". sayiyi giriniz:";
		cin>>sayi;
		cout<<endl;
		
		if(sayi> enBuyuk){
			enBuyuk=sayi;
		}
	}
	
	cout<<"Girdiginiz en buyuk sayi: "<< enBuyuk<<endl;
	
	return 0;
	
}
