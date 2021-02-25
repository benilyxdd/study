#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

const int mxN = 102;
double e=2.72;
int size;
double ar[mxN], h0;
double h[mxN], o[mxN];

double sigmoid(double x){
    double temp = (double)1/(1+pow(e, -x));
	return temp;
}

double tanh(double x){
   	double temp = (double)2*(sigmoid(2*x))-1;
	return temp;
}

double ComputeH(double x, int ht) {
	double temp = (double)x/2-2*ht;
	return tanh(temp);
}

double ComputeO(double x, int ht) {
	double temp = (double)x/10+ht*1.5;
	return sigmoid(temp);
}

void PrintSeqs() {
	for (int i = 0; i < size; i++) {
		cout << fixed << setprecision(10) << h[i] << ' ';
	}
	cout << '\n';
	for (int i = 0; i < size; i++) {
		cout << fixed << setprecision(10) << o[i] << ' ';
	}
}

int main() {
	cin >> size >> h0;
	for (int i = 0; i < size; i++)
		cin >> ar[i];
	
	

}
