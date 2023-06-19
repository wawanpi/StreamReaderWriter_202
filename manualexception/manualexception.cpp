#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "selamat belajar diprodi TI umy" << endl;
		throw 0.5; //melemparkan sebuah integer maka
		cout << "pernyataan tidak akan dieksekusi" << endl;
	}
} 