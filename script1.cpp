#include <iostream> 
#include<vector>
#include<cmath>

using namespace std;

double modulev(vector<double> v) {
	double m = 0;
	for(int i = 0; i < v.size(); i++){
		m = m + v[i]*v[i];
	}
	return sqrt(m);
}

double cosab(vector<double> v1, vector<double> v2){
	double s = 0;
	for(int i=0;i<v1.size();i++) {
		s = s + v1[i]*v2[i];
	}
	double angle = s/(modulev(v1)*modulev(v2));
	return angle;
}

void range() {
	int n0;
	int n1;
	cout << "Numero inicial: ";
	cin >> n0;
	cout << "Numero final: ";
	cin >> n1;
	cout << "\n================================\n" << endl;
	if(n1>n0) {
		for(int i=n0; i<=n1; i++) {
			if(i%2!=0) {
				cout << i << endl;
			}
		}
		cout << "" << endl;
	} 
	else {
		cout << "Numeros no validos" << endl;
	}	
}



void tablamult() {
	int n;
	cout << "Escribe el numero: ";
	cin >> n;
	
	for(int i=1; i<11; i++) {
		cout << n << "x" << i << " = "<< n*i << endl;
	}
}

void collatz() {
	int nsteps = 100;
	int  n;
	int step = 0;
	cout << "Conjetura de Collatz" << endl;
	cout << "Escribe numero: ";
	cin >> n;
	cout << "n = " << n << endl;
	while(n>1 && step<=nsteps) {
		if(n%2==0) {
			n = n/2;
		} else {
			n = n*3+1;
		}
		cout << "n = " << n << endl;
		step++;
	}	
	
	cout << "# steps: " << step << endl;
}




int main() {
	
	//range();
	//tablamult();
	collatz();
	

	
	
	return 0;
}
