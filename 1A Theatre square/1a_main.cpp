#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main() {
 unsigned long long n, m, a;
 cin>>n>>m>>a;
 unsigned long long row = n/a;
 if (n % a != 0) {
 	row++;
 }
 unsigned long long column = m/a;
 if (m % a != 0) {
 	column++;
 }
 cout << row*column;
 return 0; 
}

