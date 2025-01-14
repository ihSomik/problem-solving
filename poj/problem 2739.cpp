#include <iostream>
#include <vector>
using namespace std;

const int n = 10001;
vector<bool> isPrime(n + 1, true);
vector<int> primeNumbers;
vector<int> count(n + 1);

void sieveOfEratosthenes() {
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i <= n; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j <= n; j += i) isPrime[j] = false;
    }
  }
}

void primeNumbersArray() {
  for (int i = 2; i <= n; i++)
    if (isPrime[i]) primeNumbers.push_back(i);
}

void countRepresentation() {
  int size = primeNumbers.size();
  for (int i = 0; i < size; i++) {
    int sum = 0;
    for (int j = i; j < size && sum < n; j++) {
      sum += primeNumbers[j];
      if (sum < n) count[sum]++;
    }
  }
}

int main() {
  sieveOfEratosthenes();
  primeNumbersArray();
  countRepresentation();

  int N;
  while (cin >> N && N != 0) cout << count[N] << endl;
}