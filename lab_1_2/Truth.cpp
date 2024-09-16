#include"Logic.h"

void Truth_6::calcDisjunction() {
	string c;
	c.resize(this->N);
	for (size_t i = 0; i < this->N; i++) {
		if (this->a.at(i) == '1' || this->b.at(i) == '1')
			c[i] = '1';
		else
			c[i] = '0';
	}
	this->setX(c);
	cout << "OR:  " << this->x << endl;
}

void Truth_6::calcConjunction() {
	string c;
	c.resize(this->N);
	for (size_t i = 0; i < this->N; i++) {
		if (this->a.at(i) == '1' && this->b.at(i) == '1')
			c[i] = '1';
		else
			c[i] = '0';
	}
	this->setY(c);
	cout << "AND: " << this->y << endl;
}

void Truth_6::calcExcConjunction() {
	string c;
	c.resize(this->N);
	for (size_t i = 0; i < this->N; i++) {
		if (this->a.at(i) == '1' || this->b.at(i) == '1') {
			c[i] = '1';
			if (this->a.at(i) == '1' && this->b.at(i) == '1')
				c[i] = '0';
		}
		else
			c [i] = '0';
	}
	this->setZ(c);
	cout << "XOR: " << this->z << endl;
}

bool Truth_6::isValid(string input) {
	for (size_t i = 0; i < input.length(); i++)
		if (input.at(i) != '1' && input.at(i) != '0')
			return false;
	return true;
}

bool Truth_6::isEqualLength(string a, string b) {
	return a.length() == b.length();
}

void Truth_6::Input() {
	string a, b;
	do {
		cout << "������ ������ ����� a: ";
		getline(cin, a);
		if (!isValid(a)) {
			cout << "�������� ������� ����� a ������� ���������� ���� � 1 �� 0, ��������� �� ���." << endl;
			continue;
		}
		cout << "������ ������ ����� b: ";
		getline(cin, b);
		if (!isValid(b)) {
			cout << "�������� ������� ����� b ������� ���������� ���� � 1 �� 0, ��������� �� ���." << endl;
			continue;
		}
		if (!isEqualLength(a, b)) {
			cout << "������� ���� ������ ����� ������� ���� ��������." << endl;
			continue;
		}
		cout << "����� ����� ������ �����." << endl;
		this->a = a;
		this->b = b;
		this->N = a.length();
		cout << "N = " << this->N << endl;
		break;
	} while (true);
}

Truth_6::Truth_6() {
	Input();
}

Truth_6::Truth_6(string a, string b) {
	if (isValid(a) && isValid(b) && isEqualLength(a, b)) {
		this->a = a;
		this->b = b;
		this->N = a.length();
	}
}