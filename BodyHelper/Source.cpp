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


	cout << "Введите номер дня недели: ";
	cin >> day;

	do
	{
		cout << "\nВведите номер категории рода занятий: " << endl;
		cout << "1. Сон" << endl;
		cout << "2. Прием пищи." << endl;
		cout << "3. Приготовление пищи." << endl;
		cout << "4. Прогулка." << endl;
		cout << "5. Тренировка." << endl;
		cout << "6. Просмотр ТВ." << endl;
		cout << "7. Ванные процедуры." << endl;
		cout << "8. Уборка" << endl;
		cout << "0. Выход." << endl;

		cin >> category;

		cout << "Введите затраченое время: " << endl;
		cin >> hours >> minuts;

		time_spend = hours * 60 + minuts;				//переводит время в минуты
		
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
		default: cout << "Неверный ввод!";	break;
		}

		if (category == 0)
		{
			break;
		}

		time -= time_spend;

		if (time <= 0)
		{
			cout << "\n\nВы использовали ваше время по максимуму!";
			break;
		}
	} while (category != 0);

	//cout << sleep << endl << day_time;
	cout << "\n\nДень недели: ";

	switch (day)
	{
	case 1: cout << "понедельник."; break;
	case 2: cout << "вторник."; break;
	case 3: cout << "среда."; break;
	case 4: cout << "четверг."; break;
	case 5: cout << "пятница."; break;
	case 6: cout << "суббота."; break;
	case 7: cout << "воскресенье."; break;
	default: cout << "неизвестный человечеству.";
	}

	cout << "\n\n";

	cout << fixed;
	cout.precision(2);
	if(sleep) cout << "Сон - " << sleep / day_time * 100 << " %" << endl;
	if (meal)cout << "Прием пищи - " << meal / day_time * 100 << " %" << endl;
	if (cook)cout << "Приготовление пищи - " << cook / day_time * 100 << " %" << endl;
	if (walk)cout << "Прогулка - " << walk / day_time * 100 << " %" << endl;
	if (train)cout << "Тренировка - " << train / day_time * 100 << " %" << endl;
	if (tv)cout << "Просмотр ТВ - " << tv / day_time * 100 << " %" << endl;
	if (bath)cout << "Ванные процедуры - " << bath / day_time * 100 << " %" << endl;
	if (clean)cout << "Уборка - " << clean / day_time * 100 << " %" << endl;

	cout << "\n\n";
	return 0;
}