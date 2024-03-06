#include<iostream>
using namespace std;
int main(){
	
	int vectores [20];
  
    for (int j = 0; j < 20 ; j++) {
        cout << "digite un numero:  ";
        cin >> vectores[j];
    }

    for (int j = 0; j < 20; ++j) {
        if (vectores[j] % 2 == 0) {
            vectores[j] += 1;
            
        } else {
            vectores[j] -= 2;
        }

        if (vectores[j] < 0) {
            vectores[j] = 0;
        }
    }

  cout<<"Nueva mejora"<<endl;
    for (int j = 0; j < 20;j++) {
        cout << vectores[j] << " ";
    }
	return 0;
}
