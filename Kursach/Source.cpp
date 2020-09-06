#include <iostream>
#include <string>
using namespace std;
class Programm {

public:
	void Start_Program() {
		int N;
		cin >> N;
		Human* arr = new Human[N];
		for (int i = 0; i < N; i++) {
			void set();
			arr[i].set();
		}
	}
	void DelArr() {
		delete[] arr;
		arr = nullptr;
	}
};
class Human {
private:
	string name1, name2, name3;
	int rozhd1, rozhd2, rozhd3;
	int postup;
	string kafedra;
	string groupe;
	int zachetka;
	char pol;

public:
	void set() {
		
	}
};
int main() {
	
	return 0;
}