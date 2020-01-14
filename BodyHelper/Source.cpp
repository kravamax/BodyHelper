#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int time, day_time, day, hours, minuts, time_spend, category;
	float sleep, meal, cook, walk, train, tv, bath, clean;

	time = 1440;
	day_time = time;
	sleep = 0;
	meal = 0;
	cook = 0;
	walk = 0;
	train = 0;
	tv = 0;
	bath = 0;
	clean = 0;


	cout << "������� ����� ��� ������: ";
	cin >> day;

	do
	{
		cout << "\n������� ����� ��������� ���� �������: " << endl;
		cout << "1. ���" << endl;
		cout << "2. ����� ����." << endl;
		cout << "3. ������������� ����." << endl;
		cout << "4. ��������." << endl;
		cout << "5. ����������." << endl;
		cout << "6. �������� ��." << endl;
		cout << "7. ������ ���������." << endl;
		cout << "8. ������" << endl;
		cout << "0. �����." << endl;

		cin >> category;

		cout << "������� ���������� �����: " << endl;
		cin >> hours >> minuts;

		time_spend = hours * 60 + minuts;				//��������� ����� � ������
		
		switch (category)
		{
		case 1: sleep = time_spend; break;
		case 2: meal = time_spend; break;
		case 3: cook = time_spend; break;
		case 4: walk = time_spend; break;
		case 5: train = time_spend; break;
		case 6: tv = time_spend; break;
		case 7: bath = time_spend; break;
		case 8: clean = time_spend; break;
		case 0: break;
		default: cout << "�������� ����!";	break;
		}

		if (category == 0)
		{
			break;
		}

		time -= time_spend;

		if (time <= 0)
		{
			cout << "\n\n�� ������������ ���� ����� �� ���������!";
			break;
		}
	} while (category != 0);

	//cout << sleep << endl << day_time;
	cout << "\n\n���� ������: ";

	switch (day)
	{
	case 1: cout << "�����������."; break;
	case 2: cout << "�������."; break;
	case 3: cout << "�����."; break;
	case 4: cout << "�������."; break;
	case 5: cout << "�������."; break;
	case 6: cout << "�������."; break;
	case 7: cout << "�����������."; break;
	default: cout << "����������� ������������.";
	}

	cout << "\n\n";

	cout << fixed;
	cout.precision(2);
	if(sleep) cout << "��� - " << sleep / day_time * 100 << " %" << endl;
	if (meal)cout << "����� ���� - " << meal / day_time * 100 << " %" << endl;
	if (cook)cout << "������������� ���� - " << cook / day_time * 100 << " %" << endl;
	if (walk)cout << "�������� - " << walk / day_time * 100 << " %" << endl;
	if (train)cout << "���������� - " << train / day_time * 100 << " %" << endl;
	if (tv)cout << "�������� �� - " << tv / day_time * 100 << " %" << endl;
	if (bath)cout << "������ ��������� - " << bath / day_time * 100 << " %" << endl;
	if (clean)cout << "������ - " << clean / day_time * 100 << " %" << endl;

	cout << "\n\n";
	return 0;
}