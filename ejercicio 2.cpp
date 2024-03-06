#include<iostream>
using namespace std;
int main(){
	
	float vector[5]={1,2,3,4,5};
	float promedio;
	float  suma;
	float promediofinal;
	for( int i=0;i<5;i++){
	suma=suma+vector[i];	
	}
	
	promedio=suma/5;
	promediofinal=promedio*0.25;
	cout<<"la suma es: "<<suma<<endl;
		cout<<"el promedio es: "<<promedio<<endl;
			cout<<"el promedio final de 25% es: "<<promediofinal<<endl;
	
	
	
	
	return 0;
}
