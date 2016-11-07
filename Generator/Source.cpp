#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(int argc, char* argv[]) {
	srand(time(NULL));

	const int MAX_VAL = 65535;
	int count;
	if (argc == 1)
		count = 20;
	else
		count = atoi(argv[1]);

	for (int i = 0; i < count; i++)
		cout << i+1 << " " << rand() % MAX_VAL << " " << rand() % MAX_VAL << endl;

}