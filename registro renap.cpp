#include<iostream>
using namespace std;
int main (){
	
	
	string nombre[2];
	int i;
	int fechanacimiento[2];
	string vecindad[2];
	int dia[2];
	int mes[2];
	int anio[2];
	 
	cout<<"DATOS PERSONALES"<<endl;

	for(int i=0;i<2;i++){
		cout<<"Ingrese su Nombre"<<endl;
		cin>>nombre[i];
		cout<<"Ingrese su Vecindad"<<endl;
		cin>>vecindad[i];
		cout<<"Ingrese su fecha de Nacimiento"<<endl;
		cin>>dia[i]>>mes[i]>>anio[i];
		fechanacimiento[i]=anio[i]*10000+mes[i]*100+dia[i];
		
	}
	cout<<"__________________________________________________________";
	cout<<endl;
	
	for(int i=0;i<2;i++){
		int edad = 2024 - anio[i];
		if(mes[i]>2 || (mes[i] ==2 && dia[i] >= 30)){
			edad--;
		}
		cout<<"Nombre"<<i+1<<endl<<nombre[i]<<endl;
		cout<<"vecindad"<<i+1<<endl<<vecindad[i]<<endl;
		cout<<"Fecha de Nacimiento"<<i+1<<endl<<dia[i]<<"/"<<mes[i]<<"/"<<anio[i]<<endl;
		if(edad >=18){
			cout<<"Es Mayor de Edad"<<endl;
		}else if(edad<18){
			cout<<"Es menor de Edad"<<endl;
		}
			
		}	
		
		cout<<"_______________________________________________________";
		cout<<endl;
		cout<<"BUSQUEDA DE DATOS"<<endl;
		
		
		string nombrebuscado;
	
		
		
		cout<<"Ingrese el Nombre de la Persona que desea Buscar:"<<endl;
		cin>>nombrebuscado;
		for(int i=0;i<2;i++){
			
				
			if(nombre[i]==nombrebuscado){
				
				cout<<"nombre:"<<nombre[i]<<endl;
				cout<<"vecindad:"<<vecindad[i]<<endl;
			    cout<<"Fecha de Nacimiento"<<endl<<dia[i]<<"/"<<mes[i]<<"/"<<anio[i]<<endl;
				cout << "Edad"  << endl;
					int  edad = 2024 - anio[i];
		if(mes[i]>2 || (mes[i] ==2 && dia[i] >= 30)){
			edad--;
            if (edad >= 18) {
                cout << "Es mayor de edad." << endl;
            } else if(edad<18){
                cout << "Es menor de edad." << endl;
            }

            
    }
	
		}
	}
		return 0;
			}
			
		

		
	
	
	
	
	


