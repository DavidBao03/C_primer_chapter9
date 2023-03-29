#include <iostream>
#include "sales.h"
using namespace std;
namespace SALES {
	void setSales(Sales& s, const double ar[], int n) {
		double sum = 0;
		double max = ar[0];
		double min = ar[0];
		for (int i = 0; i < n && i < QUARTERS; i++) {
			s.sales[i] = ar[i];
			sum += ar[i];
			max = max < ar[i] ? ar[i] : max;
			min = min > ar[i] ? ar[i] : min;
		}

		s.max = max;
		s.min = min;
		s.average = n == 0 ? 0 : sum / n;
	}
	void setSales(Sales& s) {
		double ar[QUARTERS];
		for (int i = 0; i < QUARTERS; i++) {
			cout << "Enter the num: " << endl;
			cin >> ar[i];
		}
		double sum = 0;
		double max = ar[0];
		double min = ar[0];
		for (int i = 0; i < QUARTERS; i++) {
			s.sales[i] = ar[i];
			sum += ar[i];
			max = max < ar[i] ? ar[i] : max;
			min = min > ar[i] ? ar[i] : min;
		}

		s.max = max;
		s.min = min;
		s.average = sum / QUARTERS;
	}

	void showSales(const Sales& s) {
		for (int i = 0; i < QUARTERS; i++) {
			cout << s.sales[i] << " ";
		}
		cout << s.average << " " << s.max << " " << s.min;
	}
}