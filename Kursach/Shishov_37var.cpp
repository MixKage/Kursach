#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace std;
int N_N = 0;
string FileName;
struct Human {
	string name1{}, name2{}, name3{};
	int rozhd1 = 0, rozhd2 = 0, rozhd3 = 0;
	int postup = 0;
	string kafedra{};
	string groupe{};
	string zachetka{};
	char pol{};
	string Predmet[90]{};
	int ozenka[90]{};
	int KolSes = 0;
};
class File {
private:
	string txt = ".txt";
	string put;
	void ONE() {
		cout << "������� �������� ����� (������ ��������): ";
		cin >> FileName;
		cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
		FileName = FileName + txt;
		ofstream fout;
		fout.open(FileName);
		if (fout.is_open()) {
			cout << "(" << FileName << ") ������ �������!" << endl;
		}
		else {
			cout << "===========================================================" << endl;
			cout << "!!������! ���� (" << FileName << ") �� ����� ���� ������!!" << endl;
			cout << "!!������������� ���������!!" << endl;
			cout << "===========================================================" << endl;
			exit(0);
		}
		fout.close();
	}
	void TWO() {
		cout << "������� ���� ��� ����� (�����)" << endl;
		cout << "(������ C:\\Users\\user\\Documents\\): ";
		cin >> put;
		cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
		cout << "������� �������� �����: ";
		cin >> FileName;
		cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
		FileName = put + FileName + txt;
		ofstream fout;
		fout.open(FileName);
		if (fout.is_open()) {
			cout << "���� ������������ �� ����� ���� " << endl;
			cout << "(" << FileName << ") ������ �������!" << endl;
		}
		else {
			cout << "===========================================================" << endl;
			cout << "!!������! ���� (" << FileName << ") �� ����� ���� ������!!" << endl;
			cout << "!!������������� ���������!!" << endl;
			cout << "===========================================================" << endl;
			exit(0);
		}
		fout.close();
	}
	int ONE_R() {
		cout << "������� �������� ����� (�� �������� ��� .txt): ";
		cin >> FileName;
		cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
		FileName = FileName + txt;
		ifstream fin;
		fin.open(FileName);
		if (fin.is_open()) {
			system("cls");
			string str;
			while (!fin.eof()) {
				str = "";
				getline(fin, str);
				cout << str << endl;
			}
		}
		else {
			cout << "===========================================================" << endl;
			cout << "!!������! ���� (" << FileName << ") �� ����� ���� ������!!" << endl;
			cout << "!!��������� ���� � ������!!" << endl;
			cout << "===========================================================" << endl;
			return true;
		}
		fin.close();
		return false;
	}
	void TWO_R() {
		cout << "������� ���� ��� ����� (�����)" << endl;
		cout << "(������ C:\\Users\\user\\Documents\\): ";
		cin >> put;
		cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
		cout << "������� �������� �����: ";
		cin >> FileName;
		cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
		FileName = put + FileName + txt;
		ifstream fin;
		fin.open(FileName);
		if (fin.is_open()) {
			system("cls");
			string str;
			while (!fin.eof()) {
				str = "";
				getline(fin, str);
				cout << str << endl;
			}
		}
		else {
			cout << "===========================================================" << endl;
			cout << "!!������! ���� (" << FileName << ") �� ����� ���� ������!!" << endl;
			cout << "!!����� �������� ����! ������������� ���������!!" << endl;
			cout << "===========================================================" << endl;
			exit(0);
		}
		fin.close();
	}
	int ONE_E() {
		cout << "������� �������� ����� (�� �������� ��� .txt): ";
		cin >> FileName;
		cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
		FileName = FileName + txt;
		ifstream fin;
		fin.open(FileName);
		if (fin.is_open()) {
			fin.close();
			start();
		}
		else {
			cout << "===========================================================" << endl;
			cout << "!!������! ���� (" << FileName << ") �� ����� ���� ������!!" << endl;
			cout << "!!��������� ���� � ������!!" << endl;
			cout << "===========================================================" << endl;
			return true;
		}
		fin.close();
		return false;
	}
	void TWO_E() {
		cout << "������� ���� ��� ����� (�����)" << endl;
		cout << "(������ C:\\Users\\user\\Documents\\): ";
		cin >> put;
		cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
		cout << "������� �������� �����: ";
		cin >> FileName;
		cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
		FileName = put + FileName + txt;
		ifstream fin;
		fin.open(FileName);
		if (fin.is_open()) {
			fin.close();
			start();
		}
		else {
			cout << "===========================================================" << endl;
			cout << "!!������! ���� (" << FileName << ") �� ����� ���� ������!!" << endl;
			cout << "!!����� �������� ����! ������������� ���������!!" << endl;
			cout << "===========================================================" << endl;
			exit(0);
		}
		fin.close();
	}
public:
	void start() {
		ifstream fin;
		fin.open(FileName);
		if (fin.is_open()) {
			char ch;
			while (fin.get(ch)) {
				if (ch == '�') {
					N_N = N_N + 1;
				}
			}
			fin.close();
		}
		else {
			cout << "===========================================================" << endl;
			cout << "!!������! ���� (" << FileName << ") �� ����� ���� ������!!" << endl;
			cout << "!!������������� ���������!!" << endl;
			cout << "===========================================================" << endl;
			exit(0);
		}
	}
	void E(Human& arr, int i) {
		ifstream fin;
		fin.open(FileName);
		if (fin.is_open()) {
			string str;
			string str1;
			int PROV = 0;
			int l = 0;
			int ii = 0;
			int k = 0;
			int k1 = 0;
			char ch;
			int d1 = 0;
			while (!fin.eof()) {
				if ((i != 0) && (l == 0)) {
					while (!fin.eof()) {
						if (l < i) {
							fin >> str;
							if (str == "====================================================================") {
								l++;
							}
						}
						else { break; }
					}
				}
				str = "";
				fin >> str;
				if (str == "���:") {
					if (PROV != 0) {
						goto EXIT;
					}
					PROV++;
					fin >> str1;
					arr.name1 = str1;
				}
				if (str == "�������:") {
					fin >> str1;
					arr.name2 = str1;
				}
				if (str == "��������:") {
					fin >> str1;
					arr.name3 = str1;
				}
				if (str == "����") {
					fin >> str1;
					int c1 = 0;
					while (fin.get(ch)) {
						for (int ii = 48; ii < 58; ii++) {
							if (ch == ' ') {
								break;
							}
							if (ch == (char)ii) {
								if (c1 != 0) {
									d1 = d1 * 10;
								}
								d1 = d1 + ((int)ii - (int)'0');
								c1++;
								break;
							}
							else if (ch == (char)46) {
								arr.rozhd1 = d1;
								c1 = 0;
								d1 = 0;
								while (fin.get(ch)) {
									for (int iii = 48; iii < 58; iii++) {
										if (ch == (char)iii)
										{
											if (c1 != 0) {
												d1 = d1 * 10;
											}
											d1 = d1 + ((int)iii - (int)'0');
											c1++;
											break;
										}
										else if (ch == (char)46) {
											arr.rozhd2 = d1;
											c1 = 0;
											d1 = 0;
											while (fin.get(ch)) {
												if (ch == '\n') {
													arr.rozhd3 = d1;
													goto YEAR;
												}
												for (int i4 = 48; i4 < 58; i4++) {
													if (ch == (char)i4) {
														if (c1 != 0) {
															d1 = d1 * 10;
														}
														d1 = d1 + ((int)i4 - (int)'0');
														c1++;
														break;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			YEAR:
				if (str == "���") {
					d1 = 0;
					int c1 = 0;
					fin >> str;
					while (fin.get(ch)) {
						for (int i5 = 48; i5 < 58; i5++) {
							if (ch == ' ') {
								break;
							}
							if (ch == (char)i5) {
								if (c1 != 0) {
									d1 = d1 * 10;
								}
								d1 = d1 + ((int)i5 - (int)'0');
								c1++;
								break;
							}
							if (ch == '\n') {
								arr.postup = d1;
								goto YEAR;
							}
						}
					}
				}
				if (str == "���������-�������:") {
					fin >> str1;
					arr.kafedra = str1;
				}
				if (str == "������:") {
					fin >> str1;
					arr.groupe = str1;
				}
				if (str == "�����") {
					fin >> str1;
					fin >> str1;
					fin >> str1;
					arr.zachetka = str1;
				}
				if (str == "���:") {
					while (fin.get(ch)) {
						if ((ch == (char)77) || (ch == (char)109 || ch == (char)204) || (ch == (char)236))
						{
							ch = '�';
							arr.pol = ch;
							break;
						}
						if ((ch == (char)87) || (ch == (char)119) || (ch == (char)198) || (ch == (char)230))
						{
							ch = '�';
							arr.pol = ch;
							break;
						}
					}
				}
				if ((str == "���") || (str == "������")) {
					d1 = 0;
					int c1 = 0;
					k = 0;
					k1 = 0;
					int A = 0;
					while (fin.get(ch)) {
						for (int i = 48; i < 58; i++) {
							if (ch == ' ') {
								break;
							}
							if (ch == '(') {
								break;
							}
							if (ch == (char)i) {
								d1 = (d1 + ((int)i - (int)'0')) - 1;
								arr.KolSes = d1 + 1;
								goto Predmet;
							}
						}
					}
				Predmet:
					fin >> str;
					if (str == ")") {
						fin >> str;
					}
					if (str == "������") {
						while (fin.get(ch)) {
							str1 = "";
							if (ch == '(') {
								while (fin.get(ch)) {
									if (ch == ')') {
										A = (d1 * 10) + k;
										arr.Predmet[A] = str1;
										k++;
										goto Mark;
									}
									str1 = str1 + ch;
								}
							}
						}
					Mark:int M = 0;
						while (fin.get(ch)) {
							for (int i = 48; i < 58; i++) {
								if (ch == '\n') {
									goto Predmet;
								}
								if ((ch == ' ') || (ch == ':')) {
									break;
								}
								if (ch == (char)i) {
									M = (int)i - (int)'0';
									A = (d1 * 10) + k1;
									arr.ozenka[A] = M;
									k1++;
									break;
								}
							}
						}
					}
				}
				if (str == "====================================================================") {
					if (i == ii) {
					EXIT:
						break;
					}
					ii++;
				}
			}
		}
		else {
			cout << "======================" << endl;
			cout << "!!���� �� ������!!" << endl;
			cout << "======================" << endl;

		}
		fin.close();
	}
	void EditerFile() {
		cout << "1- ��������������� �������������� ������� �����\n2- � ������ ��������� ��������������� �����" << endl;
		int vubor; Repeat: cout << "::"; cin >> vubor;
		cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
		switch (vubor)
		{
		case(1): {
			if (ONE_E()) { TWO_E(); };
			break;
		}
		case(2): {TWO_E(); break; }
		default: {
			cout << "=================" << endl;
			cout << "!!������� (1-2)!!" << endl;
			cout << "=================" << endl;
			goto Repeat;
		}
			   break;
		}
	}
	void AddFile(Human& arr, int i);
	void ReadFile() {
		cout << "1- ��������������� �������������� ������� �����\n2- � ������ ��������� ��������������� �����" << endl;
		int vubor; Repeat: cout << "::"; cin >> vubor;
		cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
		switch (vubor)
		{
		case(1): {
			if (ONE_R()) { TWO_R(); };
			break;
		}
		case(2): {TWO_R(); break; }
		default: {
			cout << "=================" << endl;
			cout << "!!������� (1-2)!!" << endl;
			cout << "=================" << endl;
			goto Repeat;
		}
			   break;
		}
	}
	void CreaterFile() {
		cout << "::��������� �������� �� �������� ������������ ���������� � ����::" << endl;
		cout << "�������� ����� ����������:" << endl;
		cout << "1- ���� �� ���������\n2- ����������� ����" << endl;
		int vubor; Repeat:cout << "::"; cin >> vubor;
		cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
		switch (vubor)
		{
		case(1): {
			ONE();
			break;
		}
		case(2): {
			TWO();
			break;
		}
		default: {
			cout << "=================" << endl;
			cout << "!!������� (1-2)!!" << endl;
			cout << "=================" << endl;
			goto Repeat;
		}
		}
	}
	void DeleteFile1() {
		ofstream fout;
		fout.open(FileName);
		fout.close();
	}
};

class Helper2 {
private:
	string* zachetki = new string[N_N];
public:
	~Helper2() { delete[] zachetki; cout << "������ �������! ������ ������ �������������!" << endl; }
	string zachetka(string vvod, int i) {
		for (int j = 0; j < i; j++) {
			if (vvod == zachetki[j]) {
				cout << "===========================================================" << endl;
				cout << "!!������� ��������� � (" << j + 1 << ") ���������!!" << endl;
				cout << "!!������, �� �������� ���������� � 2 ���������� ���������!!" << endl;
				cout << "!!��� �������� ���������� ������ ����� ��������!!" << endl;
				cout << "===========================================================" << endl;
				vvod = "false"; return vvod;
			}
		}
		zachetki[i] = vvod;
		return vvod;
	}
	int zachetka1(string vvod, int i) {
		for (int j = 0; j < i; j++) {
			if (vvod == zachetki[j]) {
				cout << "===============================================================================" << endl;
				cout << "!!������� (" << i << ") �������� ��������� � �������� (" << j + 1 << ") ���������!!" << endl;
				cout << "!!������ �� ����� ����, ��� ������� ���������� (" << i + 1 << ") ��������!!" << endl;
				cout << "===============================================================================" << endl;
				return i;
			}
		}
		return 0;
	}
	void SaveZ(Human& arr, int i) {
		zachetki[i] = arr.zachetka;
	}
};
class Mes {
private:
	int DAY(int vvod) {
		if ((vvod <= 31) && (vvod >= 1)) {
			return true;
		}
		cout << "=================================================" << endl;
		cout << "!!�� ����� ������������ ��������!!" << endl;
		cout << "!!������� (1-31)!!" << endl;
		cout << "=================================================" << endl;
		return false;
	}
	int MONTH(int vvod) {
		if ((vvod <= 12) && (vvod >= 1)) {
			return true;
		}
		cout << "=================================================" << endl;
		cout << "!!�� ����� ������������ ��������!!" << endl;
		cout << "!!������� (1-12)!!" << endl;
		cout << "=================================================" << endl;
		return false;
	}
	int YEAR(int vvod) {
		if ((vvod > 999)) {
			return true;
		}
		cout << "=================================================" << endl;
		cout << "!!�� ����� ������������ ��������!!" << endl;
		cout << "=================================================" << endl;
		return false;
	}
	int Student() {
		cout << "=================================================" << endl;
		cout << "!!�� ����� ������������ ���������� ���������!!" << endl;
		cout << "!!������� ��� ������!!" << endl;
		cout << "=================================================" << endl;
		return 0;
	}
	friend class Helper;
};
class Helper : public Mes {
public:
	int CheckS() {
		int vvod;
		if (cin >> vvod) {
			if ((vvod > 0) && (vvod < 10)) {
				cin.clear();
				cin.ignore(cin.rdbuf()->in_avail());
				_flushall();
				return vvod;
			}
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			_flushall();
			vvod = 0;
			return vvod;
		}
		else if (cin.fail()) {
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			_flushall();
			vvod = 0;
			return vvod;
		}
		vvod = 0;
		return vvod;
	}
	int CheckS(int vvod) {
		if (vvod < 1) {
			cout << "=================================================" << endl;
			cout << "!!�� ����� ������������ �������� (1-9)!!" << endl;
			cout << "!!������� ���������� ������!!" << endl;
			cout << "=================================================" << endl;
			return false;
		}
		return vvod;
	}
	int CheckM() {
		int vvod;
		if (cin >> vvod) {
			if ((vvod > 0) && (vvod < 6)) {
				return vvod;
			}
			cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
			vvod = 0;
			return vvod;
		}
		else if (cin.fail()) {
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			_flushall();
			vvod = 0;
			return vvod;
		}
		vvod = 0;
		return vvod;
	}
	int CheckM(int vvod) {
		if (vvod < 1) {
			cout << "=================================================" << endl;
			cout << "!!�� ����� ������������ �������� (1-5)!!" << endl;
			cout << "!!������� ������ ������!!" << endl;
			cout << "=================================================" << endl;
			return false;
		}
		return vvod;
	}
	int Check1() {
		int vvod;
		if (cin >> vvod) {
			cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
			return vvod;
		}
		else if (cin.fail()) {
			cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
			vvod = 0;
			return vvod;
		}
		return vvod;
	}
	int Check1(int vvod, char v) {
		if (((v == 'D') && (vvod < 1)) || (v == 'D')) {
			if (!DAY(vvod)) {
				return false;
			}
			return vvod;
		}
		else if (((v == 'M') && (vvod < 1)) || (v == 'M')) {
			if (!MONTH(vvod)) {
				return false;
			}
			return vvod;
		}
		else if (((v == 'Y') && (vvod < 1)) || (v == 'Y')) {
			if (!YEAR(vvod)) {
				return false;
			}
			return vvod;
		}
		else if ((v == 'S') && (vvod < 1)) {
			Student();
			return false;
		}
		else if (vvod < 1) {
			cout << "=================================================" << endl;
			cout << "!!�� ����� ������������ ��������!!" << endl;
			cout << "!!��� ������� ���������� ������ ����� ��������!!" << endl;
			cout << "=================================================" << endl;
			return false;
		}
		return vvod;
	}
	int CheckCh() {
		char ch{};
		cin >> ch;
		if ((ch == (char)77) || (ch == (char)109 || ch == (char)204) || (ch == (char)236))
		{
			ch = '�';
			cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
			return ch;
		}
		if ((ch == (char)87) || (ch == (char)119) || (ch == (char)198) || (ch == (char)230))
		{
			ch = '�';
			cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
			return ch;
		}
		ch = (char)48;
		cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
		cout << "=================================================" << endl;
		cout << "!!��������� ������ (�/�) ��� (m/w)!!" << endl;
		cout << "!!��������� ���� ����!!" << endl;
		cout << "=================================================" << endl;
		return ch;
	}
};
class Enter {
public:
	void set(Human& arr, int i) {
		Helper H1;
		if (i == 0) {
			cout << "::����������, �� ������� ������ ��������, ��� ���������� ������ ��������� (�������� �������)::" << endl;
			cout << "::������� �� ����� ���������::" << endl;
		}
		cout << "\n������� ��� (" << i + 1 << ") ��������: ";
		cin >> arr.name1;
		cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
		cout << "������� ������� (" << i + 1 << ") ��������: ";
		cin >> arr.name2;
		cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
		cout << "������� �������� (" << i + 1 << ") ��������: ";
		cin >> arr.name3;
		cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
		if (i == 0) {
			cout << "::����������, ������� ������ ������� (����� �����)::" << endl;
		}
	TRY_CHISL:
		cout << "������� ����� ����� ������� (" << i + 1 << ") �������: ";
		arr.rozhd1 = H1.Check1();
		if ((arr.rozhd1 = H1.Check1(arr.rozhd1, 'D')) == false) {
			goto TRY_CHISL;
		}
	TRY_CHISL2:
		cout << "������� ����� ����� ������� ������� (" << i + 1 << ") �������: ";
		arr.rozhd2 = H1.Check1();
		if ((arr.rozhd2 = H1.Check1(arr.rozhd2, 'M')) == false) {
			goto TRY_CHISL2;
		}
	TRY_CHISL3:
		cout << "������� ���, ����� ��� ����� (" << i + 1 << ") �������: ";
		arr.rozhd3 = H1.Check1();
		if (!H1.Check1(arr.rozhd3, 'Y')) {
			goto TRY_CHISL3;
		}
	TRY_CHISL4:
		cout << "������� ��� ����������� (" << i + 1 << ") �������� � ��������: ";
		arr.postup = H1.Check1();
		if (!H1.Check1(arr.postup, 'Y')) {
			goto TRY_CHISL4;
		}
		if (arr.postup <= arr.rozhd3 + 15) {
			cout << "==================================================" << endl;
			cout << "!!������� �� ����� ��������� � ����� ����� �����!!" << endl;
			cout << "==================================================" << endl;
			goto TRY_CHISL4;
		}
		if (i == 0) {
			cout << "::������� �� ����� ��������� (����������� \"-\" � \"_\")::" << endl;
		}
		cout << "������� ���������-������� (" << i + 1 << ") ��������: ";
		cin >> arr.kafedra;
		cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
		cout << "������� ������ (" << i + 1 << ") ��������: ";
		cin >> arr.groupe;
		cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
		if (i == 0) {
			cout << "::����� �������� ������ �� ����� �����������::" << endl;
		}
		cout << "������� ����� �������� ������ (" << i + 1 << ") ��������: ";
		cin >> arr.zachetka;
		cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
	AGAIN_POL:
		cout << "������� ��� (" << i + 1 << ") �������� (�/�) ��� (m/w): ";
		arr.pol = H1.CheckCh();
		if (arr.pol == (char)48) {
			goto AGAIN_POL;
		}
	TRY_SES:
		cout << "������� ���������� ������ (" << i + 1 << ") �������� (1-9): ";
		arr.KolSes = H1.CheckS();
		if (!H1.CheckS(arr.KolSes)) {
			goto TRY_SES;
		}
		if (i == 0) {
			cout << "::���� �� ������ ��������� ���� ������ � ������ ������,::" << endl;
			cout << "::�� ������� \"0\" ����� ��������� ������ �������::" << endl;
		}
		for (int k = 0; k < arr.KolSes; k++) {
			k = k - 1;
		EXIT:
			k = k + 1;
			if (k >= arr.KolSes) {
				goto FinishSes;
			}
			cout << "��� ������ (" << k + 1 << ")" << endl;
			for (int k1 = 0; k1 < 10; k1++) {
				int k2 = (k * 10) + k1;
				cout << "������� ������� (" << k1 + 1 << "): ";

				cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
				getline(cin, arr.Predmet[k2]);
				if (arr.Predmet[k2] == "0") {
					goto EXIT;
				}
			TRY_MARK:
				cout << "������� ������ �� �������� (" << arr.Predmet[k2] << "): ";
				arr.ozenka[k2] = H1.CheckM();
				if (!H1.CheckM(arr.ozenka[k2])) {
					goto TRY_MARK;
				};
			}
		}
	FinishSes:
		cout << "\n______________________________________________" << endl;
	}
	void get(Human& arr, int i) {
		if (i != 0) { cout << "\n"; }
		cout << "================================�" << i + 1 << "==================================" << endl;
		if (i == 0) {
			cout << "::����� �������� (����� �� ����� ��� �����) �" << i + 1 << "::" << endl;
		}
		cout << "���: " << arr.name1 << "\n�������: " << arr.name2 << "\n��������: " << arr.name3 << endl;
		cout << "���� ��������: " << arr.rozhd1 << "." << arr.rozhd2 << "." << arr.rozhd3 << endl;
		cout << "��� �����������: " << arr.postup << endl;
		cout << "���������-�������: " << arr.kafedra << endl;
		cout << "������: " << arr.groupe << endl;
		cout << "����� �������� ������: " << arr.zachetka << endl;
		cout << "���: " << arr.pol << endl;
		cout << "������: " << endl;
		for (int k = 0; k < arr.KolSes; k++) {
			k = k - 1;
		EXIT:
			k = k + 1;
			if (k >= arr.KolSes) {
				goto FinishSes;
			}
			cout << "��� ������ (" << k + 1 << ")" << endl;
			for (int k1 = 0; k1 < 10; k1++) {
				int k2 = (k * 10) + k1;
				if (arr.ozenka[k2] == 0) {
					goto EXIT;
				}
				cout << "������ �� �������� (" << arr.Predmet[k2] << "): " << arr.ozenka[k2] << endl;
			}
		}
	FinishSes:
		cout << "====================================================================" << endl;
	}
};
void File::AddFile(Human& arr, int i) {
	ofstream fout;
	fout.open(FileName, ofstream::app);
	if (fout.is_open()) {
		if (i != 0) { fout << "\n"; }
		fout << "================================�" << i + 1 << "==================================" << endl;
		fout << "���: " << arr.name1 << "\n�������: " << arr.name2 << "\n��������: " << arr.name3 << endl;
		fout << "���� ��������: " << arr.rozhd1 << "." << arr.rozhd2 << "." << arr.rozhd3 << endl;
		fout << "��� �����������: " << arr.postup << endl;
		fout << "���������-�������: " << arr.kafedra << endl;
		fout << "������: " << arr.groupe << endl;
		fout << "����� �������� ������: " << arr.zachetka << endl;
		fout << "���: " << arr.pol << endl;
		fout << "������: " << endl;
		for (int k = 0; k < arr.KolSes; k++) {
			k = k - 1;
		EXIT:
			k = k + 1;
			if (k >= arr.KolSes) {
				goto FinishSes;
			}
			fout << "��� ������ (" << k + 1 << ")" << endl;
			for (int k1 = 0; k1 < 10; k1++) {
				int k2 = (k * 10) + k1;
				if (arr.ozenka[k2] == 0) {
					goto EXIT;
				}
				fout << "������ �� �������� (" << arr.Predmet[k2] << "): " << arr.ozenka[k2] << endl;
			}
		}
	FinishSes:
		fout << "====================================================================" << endl;
	}
	else {
		cout << "===========================================================" << endl;
		cout << "!!������! ���� (" << FileName << ") �� ����� ���� ������!!" << endl;
		cout << "!!������������� ���������!!" << endl;
		cout << "===========================================================" << endl;
		exit(0);
	}
	fout.close();
};
class Work {
public:
	Work() {};
	~Work() {};
	void Create() {
		system("cls");
		File F1;
		F1.CreaterFile();
	CREATE_AGAIN:
		cout << "������� ���������� ���������: ";
		Helper H1;
		Enter Ent1;
		int N;
		N = H1.Check1();
		string v{};
		if (H1.Check1(N, 'S')) {
			Human* arr = new Human[N];
			N_N = N;
			Helper2 H2;
			for (int i = 0; i < N; i++) {
			TryVvod:
				Ent1.set(arr[i], i);
				v = H2.zachetka(arr[i].zachetka, i);
				if (v == "false") {
					goto TryVvod;
				}
				F1.AddFile(arr[i], i);
			}
			system("cls");
			for (int i = 0; i < N; i++) {
				Ent1.get(arr[i], i);
			}
			delete[] arr;
		}
		else { goto CREATE_AGAIN; }
	}
	void Editore() {
		File F1;
		Enter Ent1;
		Helper H1;
		F1.EditerFile();
		Human* arr = new Human[N_N];
		for (int i = 0; i < N_N; i++) {
			F1.E(arr[i], i);
		}
	TRY_AGAIN1:
		cout << "�������� ��������:" << endl;
		cout << "1- �������� ��������/���������." << endl;
		cout << "2- �������� ��������." << endl;
		cout << "3- ������������� �� �� �������� �������� 37." << endl;
		cout << "4- ��������, ��� ��������� � �����." << endl;
		cout << "5- �������� ���������� ������������ ��������." << endl;
		cout << "6- ����� �� ������ ��������������.\n::";
	TRY_VVOD:
		int n; cin >> n; cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
		switch (n)
		{
		case(1): {
			system("cls");
		CREATE_AGAIN:
			cout << "������� ���������� �������������� ��������� ���������: ";
			Helper H1;
			int N;
			N = H1.Check1();
			string v{};
			if (H1.Check1(N, 'S')) {
				N = N_N + N;
				Human* arr1 = new Human[N];
				for (int i = 0; i < N_N; i++) {
					arr1[i] = arr[i];
				}
				delete[] arr;
				int l = N_N;
				N_N = N;
				N = l;
				Human* arr = new Human[N_N];
				for (int i = 0; i < N_N; i++) {
					arr[i] = arr1[i];
				}
				delete[] arr1;
				Helper2 H2;
				for (int i = 0; i < N; i++) {
					H2.SaveZ(arr[i], i);
				}
				for (int i = N; i < N_N; i++) {
				TryVvod2:
					Ent1.set(arr[i], i);
					v = H2.zachetka(arr[i].zachetka, i);
					if (v == "false") {
						goto TryVvod2;
					}
					F1.AddFile(arr[i], i);
				}
				system("cls");
				for (int i = 0; i < N_N; i++) {
					Ent1.get(arr[i], i);
				}
			}
			else { goto CREATE_AGAIN; };
			break;
		}
		case(2): {
			system("cls");
			string v{};
			for (int i = 0; i < N_N; i++) {
				Ent1.get(arr[i], i);
			}
		TRY_STUDENT:
			cout << "\n������ �������� �� ������ ��������? ������� ��� �����: ";
			cin >> n; cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
			if ((n > N_N) || (n < 1)) {
				cout << "==============================" << endl;
				cout << "!!������� (1-" << N_N << ")!!" << endl;
				cout << "==============================" << endl;
				goto TRY_STUDENT;
			}
		TryVvod3:
			Helper2 H2;
			n = n - 1;
			Ent1.set(arr[n], n);
			v = H2.zachetka(arr[n].zachetka, n);
			if (v == "false") {
				goto TryVvod3;
			}
			cout << "���� ��������� ���������?" << endl;
			cout << "1- � ��� �� ����\n2- � ����� ����\n::";

			cin >> n; cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
			switch (n)
			{
			case(1): {
				F1.DeleteFile1();
				for (int i = 0; i < N_N; i++) {
					F1.AddFile(arr[i], i);
				}
				break;
			}
			case(2): {
				system("cls");
				F1.CreaterFile();
				for (int i = 0; i < N_N; i++) {
					F1.AddFile(arr[i], i);
				}
				break;
			}
			default: {
				cout << "=================" << endl;
				cout << "!!������� (1-2)!!" << endl;
				cout << "=================" << endl;
				goto TRY_STUDENT;
				break; }
			}
			system("cls");
			for (int i = 0; i < N_N; i++) {
				Ent1.get(arr[i], i);
			}
			break;
		}
		case(3): {
			system("cls");
			float kol_12345 = 0.0f;
			float kol_3 = 0.0f;
			float* Prozent = new float[N_N];
			int* id = new int[N_N];
			for (int i = 0; i < N_N; i++) {
				id[i] = i;
			}
			cout << "���� (���������������) ������:" << endl;
			for (int i = 0; i < N_N; i++) {
				kol_12345 = 0;
				kol_3 = 0;
				for (int k = 0; k < 21; k++) {
					if (arr[i].ozenka[k] != 0) {
						kol_12345++;
						if (arr[i].ozenka[k] == 3) {
							kol_3++;
						}
					}
				}
				kol_3 = floor(kol_3 * 100) / 100;
				kol_12345 = floor(kol_12345 * 100) / 100;
				Prozent[i] = floor(((kol_3 * 100) / kol_12345) * 100) / 100;
			}
			int temp1;
			float temp;
			for (int i = 0; i < N_N - 1; i++) {
				for (int j = 0; j < N_N - i - 1; j++) {
					if (Prozent[j] < Prozent[j + 1]) {
						temp = Prozent[j];
						Prozent[j] = Prozent[j + 1];
						Prozent[j + 1] = temp;
						temp1 = id[j];
						id[j] = id[j + 1];
						id[j + 1] = temp1;
					}
				}
			}
			cout << "���������� ���������� ����� �� 1 � 2 �������:\n" << endl;
			for (int i = 0; i < N_N; i++) {
				cout << "(" << i + 1 << ") �� ����� ��� �����: " << id[i] + 1 << " = " << Prozent[i] << "% " << endl;
			}
			cout << "\n____________________________________________________________________" << endl;
			int k = 0;
			for (int i = 0; i < N_N; i++) {
				Ent1.get(arr[id[i]], k);
				k++;
			}
		AGAIN_POL:
			cout << "____________________________________________________________________" << endl;
			cout << "������� ���, �� �������� ������ ����������� ������ �������� (�/�) ��� (m/w)\n::";
			char Pol = H1.CheckCh();
			if (Pol == (char)48) {
				goto AGAIN_POL;
			}
			system("cls");
			bool TF = false;
			k = 0;
			for (int i = 0; i < N_N; i++) {
				TF = pol(arr[id[i]], Pol);
				if (TF == true) {
					Ent1.get(arr[id[i]], k);
					k++;
				}
			}
			if (k == 0) {
				cout << "����� ��������� ���!" << endl;
			}
			cout << "____________________________________________________________________" << endl;
		TRY_CHOOSE:
			cout << "���� ��������� ���������?" << endl;
			cout << "1- � ��� �� ����\n2- � ����� ����\n::";
			cin >> n; cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
			TF = false;
			k = 0;
			switch (n)
			{
			case(1): {
				F1.DeleteFile1();
				for (int i = 0; i < N_N; i++) {
					TF = pol(arr[id[i]], Pol);
					if (TF == true) {
						F1.AddFile(arr[i], k);
						k++;
					}
				}
				break;
			}
			case(2): {
				system("cls");
				F1.CreaterFile();
				for (int i = 0; i < N_N; i++) {
					TF = pol(arr[id[i]], Pol);
					if (TF == true) {
						F1.AddFile(arr[i], k);
						k++;
					}
				}
				break;
			}
			default: {
				cout << "=================" << endl;
				cout << "!!������� (1-2)!!" << endl;
				cout << "=================" << endl;
				goto TRY_CHOOSE;
				break; }
			}
			delete[] Prozent;
			delete[] id;
			break;
		}
		case(4): {
			system("cls");
			for (int i = 0; i < N_N; i++) {
				Ent1.get(arr[i], i);
			}
			goto TRY_AGAIN1;
			break;
		}
		case(5): {
			system("cls");
		TRY_VVOD2:
			cout << "� ����� �������� �� ������ �������� ����������?\n������� ��� �����:";
			cin >> n; cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
			n = n - 1;
			if ((n > N_N) || (n < 0)) {
				cout << "======================" << endl;
				cout << "!!������� 1-" << N_N << "!!" << endl;
				cout << "======================" << endl;
				goto TRY_VVOD2;
			}
			Ent1.get(arr[n], n);
			break;
		}
		case(6): {
			break;
		}
		default: {
			cout << "===============" << endl;
			cout << "!!������� 1-6!!" << endl;
			cout << "===============" << endl;
			goto TRY_VVOD;
		}
		}
	}
	int pol(Human& arr, char ch) {
		if (arr.pol == ch) {
			return true;
		}
		else { return false; }
	}
};
class Programm {
public:
	Programm() { cout << "��������� ����������� ������ Program: " << this << endl; }
	~Programm() { cout << "��������� ������������� ������ Program: " << this << endl; }
	void Start_Program() {
		File F1;
		Work W1;
		N_N = 0;
	TRY_AGAIN1:
		cout << "\n����� ���������� � ���� ���������!\n�������� ������ ��� ������� ������:" << endl;
		cout << "1- ������ ������ \"� ������� �����\" � ����������� ��������� �����." << endl;
		cout << "2- ������� ���������� �����." << endl;
		cout << "3- �������������� �����." << endl;
		cout << "4- � ���������." << endl;
		cout << "5- ����� �� ���������.\n::";
		int n;
		if (cin >> n) {
			cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
			switch (n)
			{
			case(1): {
				cout << "�� �������:" << endl;
				cout << "1- ������ ������ \"� ������� �����\" � ����������� ��������� �����." << endl;
				cout << "��������, ��� ������ ������� ���� ����� ������? (1/0)\n:: ";
				cin >> n;
				if (n != 1) {
					goto TRY_AGAIN1;
				}
				else if (cin.fail()) {
					cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
					cout << "������� (1/0)" << endl;
					goto TRY_AGAIN1;
				}

				W1.Create();
				break;
			}
			case(2): {
				cout << "�� �������: " << endl;
				cout << "2- ������� ���������� �����." << endl;
				cout << "��������, ��� ������ ������� ���� ����� ������? (1/0)\n:: ";
				cin >> n;
				if (n != 1) {
					goto TRY_AGAIN1;
				}
				else if (cin.fail()) {
					cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
					cout << "������� (1/0)" << endl;
					goto TRY_AGAIN1;
				}
				system("cls");
				F1.ReadFile();
				break; }
			case(3): {
				cout << "�� �������: " << endl;
				cout << "3- �������������� �����." << endl;
				cout << "��������, ��� ������ ������� ���� ����� ������? (1/0)\n:: ";
				cin >> n;
				if (n != 1) {
					goto TRY_AGAIN1;
				}
				else if (cin.fail()) {
					cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
					cout << "������� (1/0)" << endl;
					goto TRY_AGAIN1;
				}
				system("cls");
				W1.Editore();
				break; }
			case(4): {
				cout << " ��� ��������� ��������� ���� ������, � ������� �����" << endl;
				cout << "�������� �������������� ���������, � ��� �� ������������� ��" << endl;
				cout << "�� �������� �������� 37. ������������� ���� ��������� � �������" << endl;
				cout << "���������� ����������� ���������� \"�����\" �� 1 � 2 ��������," << endl;
				cout << "� ������� ����� ��� ������������� ����." << endl;
				cout << " ��������� ������������ ������ � ���� � ������ �����, � ��� ��" << endl;
				cout << "�������� �� �������� ������������ ������ (������ ������� ������������" << endl;
				cout << "�� ���� ��� ����������). ��� ������������ ������ ������ � ������ ���������� �������������." << endl;
				cout << " ��� ��, ��������� ����� ������ ���������� ����������� ���������" << endl;
				cout << "�� ����������. � ������� ������������� ������ ������ ���������, ��������" << endl;
				cout << "����� �����������, ������� ��������� ��� ������ ����� ���������� ���" << endl;
				cout << "�������� ���������� �� ��� ���� ������, � ���� ���� ��������, � ������� ��" << endl;
				cout << "��������� ������" << endl;
				goto TRY_AGAIN1;
			}
			case(5): {
				cout << "�� �������: " << endl;
				cout << "5- ����� �� ���������." << endl;
				cout << "��������, ��� ������ �����? (1/0)\n:: ";
				cin >> n;
				if (n != 1) {
					goto TRY_AGAIN1;
				}
				else if (cin.fail()) {
					cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
					cout << "������� (1/0)" << endl;
					goto TRY_AGAIN1;
				}
				exit(0);
			}
			default: {
				cout << "������� (1-5)" << endl;
				goto TRY_AGAIN1;
				break;
			}
			}
		}
		else if (cin.fail()) {
			cin.clear(); cin.ignore(cin.rdbuf()->in_avail()); _flushall();
			cout << "������� (1-5)" << endl;
			goto TRY_AGAIN1;
		}
	}
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
RESTART:
	Programm M1;
	M1.Start_Program();
	cout << "\n\n������������� ���������? (1/0)\n::";
	bool vubor; cin >> vubor; cin.clear(); cin.ignore(cin.rdbuf()->in_avail());	_flushall();
	if (vubor == true) {
		system("cls");
		goto RESTART;
	}
	system("pause");
	return 0;
}