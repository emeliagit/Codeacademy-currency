#include <iostream>
using namespace std;

int main() {
	/* assigning values for Colombian Pesos (ps), Brazilian Reais (br), and Peruvian Soles (ps), as well as USD.
	*/
	double pesos, reais, soles, dollars, cptusd, brtusd, pstusd;
	string opening = "Hello, there!\n You seem to have collected a fair bit of currency on your travels.\n Please insert the amount of Colombian Pesos you've collected.\n";
	string br_req = "Wonderful! Now, please do insert the amount of Brazilian Reais you've collected.\n";
	string ps_req = "Great! Now,n please insert the amount of Prevuian Soles you've collected.\n";
	string orusd = " or, in USD, ";

	cout << opening;
	cin >> pesos;
	cout << br_req;
	cin >> reais;
	cout << ps_req;
	cin >> soles;

	cptusd = pesos * 0.00021087902;
	brtusd = reais * 0.18902951;
	pstusd = soles * 0.25132484;
	dollars = cptusd + brtusd + pstusd;
		cout << "Awesome! Altogether, you've collected " << pesos << " Colombian Pesos," << orusd << cptusd << " , " << reais << " Brazilian Reals," << orusd << brtusd << " and " << soles << " Peruvian Sol," << orusd << pstusd << endl;
		cout << "Altogether, you've acquired $" << dollars << " USD.";


	return 0;
}