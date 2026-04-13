#include <iostream>
using namespace std;
int main(){int number, d1, d2, d3, d4, sum, diff;
cout << "Enter a 4-digit number: "; cin >> number;
d1 = number % 10;
d2 = (number / 10) % 10;
d3 = (number / 100) % 10;
d4 = (number / 1000) % 10;
sum = d1 + d2 + d3 + d4;
diff=d1-d4;
cout << "Sum of digits: " << sum << endl;
cout << "Difference between first and last digit: " << diff << endl;
return 0;

}