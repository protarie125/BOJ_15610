#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double x;
	cin >> x;

	cout << fixed << setprecision(9) << 4 * sqrt(x);

	return 0;
}