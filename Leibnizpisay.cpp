#include <iostream>
#include <iomanip>

using namespace std;


double leibnizpi(int n) {
	double* terimpi = new double[n];
	double pi = 0.0;

	for (int i = 0; i < n; i++) {
		terimpi[i] = (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1); //ilkteki gibi değil de pow da bir alternatif.
	}

	for (int i = 0; i < n; i++) {
		pi += terimpi[i];
	}

	delete[] terimpi;

	return 4 * pi;
}

int main() {
	int n;

	cout << "Enter the value of n: ";
	cin >> n;

	double pi = leibnizpi(n);

	cout << "Number of pi: " << setprecision(30) << pi << endl;

	return 0;
}