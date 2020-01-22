#include <iostream>
#include <ctime>
#include <ctime>
#include <cstdlib>
#include <clocale>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
using namespace std;
int sum(int n) {
	int s = 0;
	while(n > 0) {
		s += n % 10;
		n /= 10;
	}
	return s;
}
int kol(int n) {
	int k = 0;
	while(n > 0){
		k++;
		n /= 10;
	}
	return k;
}
int digital_root(int n)
{
    while(kol(n) != 1) {
    	n = sum(n);
	}
	return n;
}
int main() {
	
	int n;
	cin >> n;
	cout << digital_root(n);
	cout << 12344444555666;
	cout << "new line";
	return 0;
}
