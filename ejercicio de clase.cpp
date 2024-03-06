#include<iostream>
using namespace std;
int main(){
	
	int a,n,g,mayor,par,impar;
	
	cout << "digite el primer valor: " << endl;
    cin >> a;
    cout << "digite el segundo valor: " << endl;
    cin >> n;
    cout << "digite el tercer valor: " << endl;
    cin >> g;

    if (a>n & a>g) {
        cout << "El primer valor es mayor: " << a<< endl;
        if (a% 2 == 0) {
            cout << "El valor mayor es par " << endl;
        } else {
            cout << "El valor mayor es impar " << endl;
        }
    } else {
        if (n > g) {
            cout << "El valor mayor es: " << n << endl;
            if (n % 2 == 0) {
                cout << "El valor mayor es par " << endl;
            } else {
                cout << "El valor mayor es impar " << endl;
            }
        } else {
            cout << "El valor mayor es: " << g << endl;
            if (g % 2 == 0) {
                cout << "El valor mayor es par " << endl;
            } else {
                cout << "El valor es impar " << endl;
            }
        }
    }					
	
	return 0;
}
	
	
	
	
	
	

	
	
	
	


