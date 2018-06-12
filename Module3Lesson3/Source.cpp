#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <iostream>

using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int n = 0;
	printf("введите номер задания: ");
	scanf("%d", &n);

	switch (n)
	{
	case 1:
	{
		//1.	Дано трехзначное число. Определить: 
		//a.является ли произведение его цифр больше числа b;
		//b.кратна ли сумма его цифр трем.

		int b = 0;
		printf("введите число b: ");
		scanf("%d", &b);
		
		int a = 0;
		a = 100 + rand() % 999;

		int x = 0, y = 0, z = 0;
		x = a % 10;
		y = (a / 10) % 10;
		z = a / 100;

		if ((x*y*z) > b)
			printf("произведение цифр числа а больше числа b. а = %d\n", a);
		else
			printf("произведение цифр числа а не больше числа b. а = %d\n", a);
		if ((x + y + z) / 3 == 0)
			printf("сумма цифр числа а кратна 3. а = %d\n", a);
		else
			printf("сумма цифр числа а не кратна 3. а = %d\n", a);
	}
	break;

	case 2:
	{
		//2.	Пользователь вводит порядковый номер пальца руки. Необходимо показать его название на экран.

		int fingers = 0;
		printf("введите порядковый номер пальца руки: ");
		scanf("%d", &fingers);

		switch (fingers)
		{
		case 1:
		{
			printf("это большой палец\n");
		}
		break;
		case 2:
		{
			printf("это указательный палец\n");
		}
		break;
		case 3:
		{
			printf("это средний палец\n");
		}
		break;
		case 4:
		{
			printf("это безымянный палец\n");
		}
		break;
		case 5:
		{
			printf("это мизинец\n");
		}
		break;
		}
	}
	break;

	case 3:
	{
		//3.	Необходимо написать программу, которая проверяет пользователя на знание таблицы умножения. 
		//Пользователь сам вводит два целых однозначных числа. Программа задаёт вопрос: результат умножения первого числа на второе. 
		//Пользователь должен ввести ответ и увидеть на экране правильно он ответил или нет. Если нет – показать еще и правильный результат.

		int x = 0, y = 0;
		printf("введите первое число: ");
		scanf("%d", &x);

		printf("введите второе число: ");
		scanf("%d", &y);

		if ((x>=0 && x<=9) && (y>=0 && y<=9))
		{
			int result = 0;
			printf("введите результат умножения первого числа на второе: ");
			scanf("%d", &result);

			if ((x*y) == result)
				printf("вы ответили правильно!\n");
			else
				printf("вы ответили неправильно! правильный ответ = %d\n", x*y);
		}
		else
		{
			printf("числа должны быть однозначными!\n");
		}
	}
	break;

	case 4:
	{
		//4.	Написать программу , которая по дате рождения (день d месяц n) определяет знак Зодиака: 
		//с 22 марта по 21 апреля - Овен (4); с 22 апреля по 21 мая - Телец (5); с 22 мая по 21 июня - Близнецы (6); 
		//с 22 июня по 21 июля - Рак (7); с 22 июля по 21 августа - Лев (8); с 22 августа по 21 сентября - Дева (9); 
		//22 сентября по 21 октября - Весы (10); с 22 октября по 21 ноября - Скорпион (11); с 22 ноября по 21 декабря - Стрелец (12); 
		//с 22 декабря по 21 января - Козерог (1); 22 января по 21 февраля - Водолей (2); с 22 февраля по 21 марта - Рыбы (3).

		int day = 0, month = 0;
		printf("введите месяц рождения: ");
		scanf("%d", &month);

		printf("введите день рождения: ");
		scanf("%d", &day);

		if (month>=1 && month<=12)
		{
			switch (month)
			{
			case 1:
			{
				if (day >= 1 && day <= 21)
					printf("это Козерог\n");
				else if (day >= 22 && day <= 31)
					printf("это Водолей\n");
				else
					printf("такого месяца в январе нет!\n");
			}
			break;

			case 2:
			{
				if (day >= 1 && day <= 21)
					printf("это Водолей\n");
				else if (day >= 22 && day <= 29)
					printf("это Рыбы\n");
				else
					printf("такого месяца в феврале нет!\n");
			}
			break;

			case 3:
			{
				if (day >= 1 && day <= 21)
					printf("это Рыбы\n");
				else if (day >= 22 && day <= 31)
					printf("это Овен\n");
				else
					printf("такого месяца в марте нет!\n");
			}
			break;

			case 4:
			{
				if (day >= 1 && day <= 21)
					printf("это Овен\n");
				else if (day >= 22 && day <= 30)
					printf("это Телец\n");
				else
					printf("такого месяца в апреле нет!\n");
			}
			break;

			case 5:
			{
				if (day >= 1 && day <= 21)
					printf("это Телец\n");
				else if (day >= 22 && day <= 31)
					printf("это Близнецы\n");
				else
					printf("такого месяца в мае нет!\n");
			}
			break;

			case 6:
			{
				if (day >= 1 && day <= 21)
					printf("это Близнецы\n");
				else if (day >= 22 && day <= 30)
					printf("это Рак\n");
				else
					printf("такого месяца в июне нет!\n");
			}
			break;

			case 7:
			{
				if (day >= 1 && day <= 21)
					printf("это Рак\n");
				else if (day >= 22 && day <= 31)
					printf("это Лев\n");
				else
					printf("такого месяца в июле нет!\n");
			}
			break;

			case 8:
			{
				if (day >= 1 && day <= 21)
					printf("это Лев\n");
				else if (day >= 22 && day <= 31)
					printf("это Дева\n");
				else
					printf("такого месяца в августе нет!\n");
			}
			break;

			case 9:
			{
				if (day >= 1 && day <= 21)
					printf("это Дева\n");
				else if (day >= 22 && day <= 30)
					printf("это Весы\n");
				else
					printf("такого месяца в сентябре нет!\n");
			}
			break;

			case 10:
			{
				if (day >= 1 && day <= 21)
					printf("это Весы\n");
				else if (day >= 22 && day <= 31)
					printf("это Скорпион\n");
				else
					printf("такого месяца в октябре нет!\n");
			}
			break;

			case 11:
			{
				if (day >= 1 && day <= 21)
					printf("это Скорпион\n");
				else if (day >= 22 && day <= 30)
					printf("это Стрелец\n");
				else
					printf("такого месяца в ноябре нет!\n");
			}
			break;

			case 12:
			{
				if (day >= 1 && day <= 21)
					printf("это Стрелец\n");
				else if (day >= 22 && day <= 31)
					printf("это Козерог\n");
				else
					printf("такого месяца в декабре нет!\n");
			}
			break;
			}
		}

		else
		{
			printf("такого месяца не существует!\n");
		}

	}
	break;

	case 5:
	{
		//5.	Используя пять вариантов наборов карт 1)«6», «7», «8» 2)«7», «8», «9» 3) «6», «9», «10» 4)«6», «9», «8» 5)«7», «6», «10», сыграйте с компьютером. 
		//Введите с клавиатуры свой вариант и сравните с вариантом компьютера, который создайте, 
		//используя функцию генератора случайных чисел (три цифры от 6 до 10 включительно без повторения цифры в варианте). 
		//Если сумма цифр вашего варианта больше суммы цифр компьютера, вы выиграли

		int myNum1 = 0, myNum2 = 0, myNum3 = 0;
		printf("введите ваши 3 числа: ");
		scanf("%d %d %d", &myNum1, &myNum2, &myNum3);
		
		int a = 0, b = 0, c = 0;
		a = 6 + rand() % 10;
		b = 6 + rand() % 10;
		c = 6 + rand() % 10;
				
		if ((myNum1 + myNum2 + myNum3) > (a + b + c))
			printf("вы выиграли! вариант компьютера: %d %d %d\n", a, b, c);
		else
			printf("вы проиграли! вариант компьютера: %d %d %d\n", a, b, c);
	}
	break;

	case 6:
	{
		//6.	Тестовые задания последовательно вывести на экран, ввести номер правильного ответа и получить оценку.

		printf("Запишите номер правильного, на Ваш взгляд, ответа: \n");
		printf("\nТест 1: система программного обеспечения, что управляет работой всех структурных узлов компьютера,\n"
				"называется: 1 автоматизированная, балл=0; 2 операционная, балл=2; 3 интеллектуальная, балл=0;\n");
		
		int test1 = 0;
		printf("введите номер ответа: ");
		scanf("%d", &test1);

		switch (test1)
		{
		case 1:
		{
			int res11 = 0;
			printf("Неправильный ответ. ваша оценка = %d\n", res11);
		}
		break;

		case 2:
		{
			int res12 = 2;
			printf("Неправильный ответ. ваша оценка = %d\n", res12);
		}
		break;

		case 3:
		{
			int res13 = 0;
			printf("Неправильный ответ. ваша оценка = %d\n", res13);
		}
		break;
		}
		

		printf("\nТест 2: cовокупность данных, что размещены на диске и имеют общее имя и назначение – это:\n" 
				"1 файл, балл=2 ; 2 процессор, балл=0; 3 сектор, балл=0\n");

		int test2 = 0;
		printf("введите номер ответа: ");
		scanf("%d", &test2);

		switch (test2)
		{
		case 1:
		{
			int res21 = 2;
			printf("Неправильный ответ. ваша оценка = %d\n", res21);
		}
		break;

		case 2:
		{
			int res22 = 0;
			printf("Неправильный ответ. ваша оценка = %d\n", res22);
		}
		break;

		case 3:
		{
			int res23 = 0;
			printf("Неправильный ответ. ваша оценка = %d\n", res23);
		}
		break;
		}
		


		printf("\nТест 3: для изображения в блок-схеме алгоритма условия разветвления используются графические элементы:\n"  
				"1 квадрат, балл=0; 2 круг, балл=0; 3 ромб, балл=1\n");

		int test3 = 0;
		printf("введите номер ответа: ");
		scanf("%d", &test3);

		switch (test3)
		{
		case 1:
		{
			int res31 = 0;
			printf("Неправильный ответ. ваша оценка = %d\n", res31);
		}
		break;

		case 2:
		{
			int res32 = 0;
			printf("Неправильный ответ. ваша оценка = %d\n", res32);
		}
		break;

		case 3:
		{
			int res33 = 1;
			printf("Неправильный ответ. ваша оценка = %d\n", res33);
		}
		break;
		}




		
	}
	break;

	case 7:
	{
		//7.	Заказать билеты на фильм, выбрав зал и сеанс. 
		//Ввести количество билетов и определить их стоимость с учетом, если заказывается более пяти билетов – скидка 5%, более 10 билетов – 10%. 
		//Красный зал – «Хроники Нарнии», сеансы 12 часов – 25тн, 16 – 35тн, 20 – 45тн. Синий зал – «Чужие», сеансы 10 часов – 25тн, 13 – 35тн, 16 – 35тн. 
		//Голубой зал – «Аватар», сеансы 10 часов – 35тн, 14 – 45тн, 18 – 45тн. Предусмотреть обработку ошибок ввода.
		cin.get();
		char room = 0;
		st:
		printf("выберите зал (К - красный, S - синий, G - голубой): ");
		scanf("%c", &room);

		switch (room)
		{
		case 'K':
		{
			int time = 0;
			st1:
			printf("выберите время сеанса (12 - 12 часов, 16 - 16 часов, 20 - 20 часов): ");
			scanf("%d", &time);

			switch (time)
			{
			case 12:
			{
				int tickets = 0;
				printf("сколько билетов покупаете: ");
				scanf("%d", &tickets);

				if (tickets>5 && tickets<=10)
				{
					float sum = 0;
					sum = (float)tickets*(float)25 - ((float)tickets*(float)25 * 0.05);
					printf("сумма к оплате: %f", sum);
				}

				else if (tickets>10)
				{
					float sum = 0;
					sum = (float)tickets*(float)25 - ((float)tickets*(float)25 * 0.1);
					printf("сумма к оплате: %f", sum);
				}
				else
				{
					float sum = 0;
					sum = (float)tickets*(float)25;
					printf("сумма к оплате: %f", sum);
				}
			}
			break;

			case 16:
			{
				int tickets = 0;
				printf("сколько билетов покупаете: ");
				scanf("%d", &tickets);

				if (tickets>5 && tickets <= 10)
				{
					float sum = 0;
					sum = (float)tickets*(float)35 - ((float)tickets*(float)35 * 0.05);
					printf("сумма к оплате: %f", sum);
				}

				else if (tickets>10)
				{
					float sum = 0;
					sum = (float)tickets*(float)35 - ((float)tickets*(float)35 * 0.1);
					printf("сумма к оплате: %f", sum);
				}
				else
				{
					float sum = 0;
					sum = (float)tickets*(float)35;
					printf("сумма к оплате: %f", sum);
				}
			}
			break;

			case 20:
			{
				int tickets = 0;
				printf("сколько билетов покупаете: ");
				scanf("%d", &tickets);

				if (tickets>5 && tickets <= 10)
				{
					float sum = 0;
					sum = (float)tickets*(float)45 - ((float)tickets*(float)45 * 0.05);
					printf("сумма к оплате: %f", sum);
				}

				else if (tickets>10)
				{
					float sum = 0;
					sum = (float)tickets*(float)45 - ((float)tickets*(float)45 * 0.1);
					printf("сумма к оплате: %f", sum);
				}
				else
				{
					float sum = 0;
					sum = (float)tickets*(float)45;
					printf("сумма к оплате: %f", sum);
				}
			}
			break;

			default:
			{
				printf("такого сеанса нет! Выберите снова");
				goto st1;
			}
			break;
			}
		}
		break;

		case 'S':
		{
			int time = 0;
		st2:
			printf("выберите время сеанса (10 - 10 часов, 13 - 13 часов, 16 - 16 часов): ");
			scanf("%d", &time);

			switch (time)
			{
			case 10:
			{
				int tickets = 0;
				printf("сколько билетов покупаете: ");
				scanf("%d", &tickets);

				if (tickets>5 && tickets <= 10)
				{
					float sum = 0;
					sum = (float)tickets*(float)25 - ((float)tickets*(float)25 * 0.05);
					printf("сумма к оплате: %f", sum);
				}

				else if (tickets>10)
				{
					float sum = 0;
					sum = (float)tickets*(float)25 - ((float)tickets*(float)25 * 0.1);
					printf("сумма к оплате: %f", sum);
				}
				else
				{
					float sum = 0;
					sum = (float)tickets*(float)25;
					printf("сумма к оплате: %f", sum);
				}
			}
			break;

			case 13:
			{
				int tickets = 0;
				printf("сколько билетов покупаете: ");
				scanf("%d", &tickets);

				if (tickets>5 && tickets <= 10)
				{
					float sum = 0;
					sum = (float)tickets*(float)35 - ((float)tickets*(float)35 * 0.05);
					printf("сумма к оплате: %f", sum);
				}

				else if (tickets>10)
				{
					float sum = 0;
					sum = (float)tickets*(float)35 - ((float)tickets*(float)35 * 0.1);
					printf("сумма к оплате: %f", sum);
				}
				else
				{
					float sum = 0;
					sum = (float)tickets*(float)35;
					printf("сумма к оплате: %f", sum);
				}
			}
			break;

			case 16:
			{
				int tickets = 0;
				printf("сколько билетов покупаете: ");
				scanf("%d", &tickets);

				if (tickets>5 && tickets <= 10)
				{
					float sum = 0;
					sum = (float)tickets*(float)35 - ((float)tickets*(float)35 * 0.05);
					printf("сумма к оплате: %f", sum);
				}

				else if (tickets>10)
				{
					float sum = 0;
					sum = (float)tickets*(float)35 - ((float)tickets*(float)35 * 0.1);
					printf("сумма к оплате: %f", sum);
				}
				else
				{
					float sum = 0;
					sum = (float)tickets*(float)35;
					printf("сумма к оплате: %f", sum);
				}
			}
			break;

			default:
			{
				printf("такого сеанса нет! Выберите снова");
				goto st2;
			}
			break;
			}
		}
		break;

		case 'G':
		{
			int time = 0;
		st3:
			printf("выберите время сеанса (10 - 10 часов, 14 - 14 часов, 18 - 18 часов): ");
			scanf("%d", &time);

			switch (time)
			{
			case 10:
			{
				int tickets = 0;
				printf("сколько билетов покупаете: ");
				scanf("%d", &tickets);

				if (tickets>5 && tickets <= 10)
				{
					float sum = 0;
					sum = (float)tickets*(float)35 - ((float)tickets*(float)35 * 0.05);
					printf("сумма к оплате: %f", sum);
				}

				else if (tickets>10)
				{
					float sum = 0;
					sum = (float)tickets*(float)35 - ((float)tickets*(float)35 * 0.1);
					printf("сумма к оплате: %f", sum);
				}
				else
				{
					float sum = 0;
					sum = (float)tickets*(float)35;
					printf("сумма к оплате: %f", sum);
				}
			}
			break;

			case 14:
			{
				int tickets = 0;
				printf("сколько билетов покупаете: ");
				scanf("%d", &tickets);

				if (tickets>5 && tickets <= 10)
				{
					float sum = 0;
					sum = (float)tickets*(float)45 - ((float)tickets*(float)45 * 0.05);
					printf("сумма к оплате: %f", sum);
				}

				else if (tickets>10)
				{
					float sum = 0;
					sum = (float)tickets*(float)45 - ((float)tickets*(float)45 * 0.1);
					printf("сумма к оплате: %f", sum);
				}
				else
				{
					float sum = 0;
					sum = (float)tickets*(float)45;
					printf("сумма к оплате: %f", sum);
				}
			}
			break;

			case 18:
			{
				int tickets = 0;
				printf("сколько билетов покупаете: ");
				scanf("%d", &tickets);

				if (tickets>5 && tickets <= 10)
				{
					float sum = 0;
					sum = (float)tickets*(float)45 - ((float)tickets*(float)45 * 0.05);
					printf("сумма к оплате: %f", sum);
				}

				else if (tickets>10)
				{
					float sum = 0;
					sum = (float)tickets*(float)45 - ((float)tickets*(float)45 * 0.1);
					printf("сумма к оплате: %f", sum);
				}
				else
				{
					float sum = 0;
					sum = (float)tickets*(float)45;
					printf("сумма к оплате: %f", sum);
				}
			}
			break;

			default:
			{
				printf("такого сеанса нет! Выберите снова");
				goto st3;
			}
			break;
			}
		}
		break;

		default:
		{
			printf("такого зала нет! Выберите снова");
			goto st;
		}
		break;

		}

	}
	break;




	
	}


}