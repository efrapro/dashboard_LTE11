#include "iostream"
#include "string.h"
using namespace std;

int main(){
	
	char nombre1[15];
	
	cout<<"ingrese el nombre"<<endl;
	cin.getline(nombre1, 15, '/n');
	
	cout<<"El nombre es: "<<nombre1;
	
	
	
	return 0;
}
