#include <iostream>
#include <string>
#include <math.h>
#include <ctime>

using namespace std;

bool is_prime(int n) {
	int divisor = 2;
	int sqrt_n = sqrt(n);
	while (divisor <= sqrt_n) {
		if (n % divisor == 0) {
			return false;
		}
		divisor += 1;
	}
	return true;
}

int main(int argc, char *argv[]) {

	// RUN SCRIPT BY: g++ primes.cpp -o primes; ./primes

	int upper_limit = 1000000;
	double duration;

	clock_t startTime = clock();

	int count = 0;
	for (int i = 2; i <= upper_limit; i++) {
		if (is_prime(i)) {
			count++;
		}
	}

	clock_t endTime = clock();

	duration = ( endTime - startTime ) / (double) CLOCKS_PER_SEC;
	cout<<"# of primes: " << count << "\n";
	cout<<"Duration: " << duration << " seconds \n";
	return 0;
}
