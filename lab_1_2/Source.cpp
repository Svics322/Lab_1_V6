#include<Windows.h>
#include"Logic.h"

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Truth_6 truth = Truth_6();
	truth.calcDisjunction();
	truth.calcConjunction();
	truth.calcExcConjunction();
}

