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
	printf("������� ����� �������: ");
	scanf("%d", &n);

	switch (n)
	{
	case 1:
	{
		//1.	���� ����������� �����. ����������: 
		//a.�������� �� ������������ ��� ���� ������ ����� b;
		//b.������ �� ����� ��� ���� ����.

		int b = 0;
		printf("������� ����� b: ");
		scanf("%d", &b);
		
		int a = 0;
		a = 100 + rand() % 999;

		int x = 0, y = 0, z = 0;
		x = a % 10;
		y = (a / 10) % 10;
		z = a / 100;

		if ((x*y*z) > b)
			printf("������������ ���� ����� � ������ ����� b. � = %d\n", a);
		else
			printf("������������ ���� ����� � �� ������ ����� b. � = %d\n", a);
		if ((x + y + z) / 3 == 0)
			printf("����� ���� ����� � ������ 3. � = %d\n", a);
		else
			printf("����� ���� ����� � �� ������ 3. � = %d\n", a);
	}
	break;

	case 2:
	{
		//2.	������������ ������ ���������� ����� ������ ����. ���������� �������� ��� �������� �� �����.

		int fingers = 0;
		printf("������� ���������� ����� ������ ����: ");
		scanf("%d", &fingers);

		switch (fingers)
		{
		case 1:
		{
			printf("��� ������� �����\n");
		}
		break;
		case 2:
		{
			printf("��� ������������ �����\n");
		}
		break;
		case 3:
		{
			printf("��� ������� �����\n");
		}
		break;
		case 4:
		{
			printf("��� ���������� �����\n");
		}
		break;
		case 5:
		{
			printf("��� �������\n");
		}
		break;
		}
	}
	break;

	case 3:
	{
		//3.	���������� �������� ���������, ������� ��������� ������������ �� ������ ������� ���������. 
		//������������ ��� ������ ��� ����� ����������� �����. ��������� ����� ������: ��������� ��������� ������� ����� �� ������. 
		//������������ ������ ������ ����� � ������� �� ������ ��������� �� ������� ��� ���. ���� ��� � �������� ��� � ���������� ���������.

		int x = 0, y = 0;
		printf("������� ������ �����: ");
		scanf("%d", &x);

		printf("������� ������ �����: ");
		scanf("%d", &y);

		if ((x>=0 && x<=9) && (y>=0 && y<=9))
		{
			int result = 0;
			printf("������� ��������� ��������� ������� ����� �� ������: ");
			scanf("%d", &result);

			if ((x*y) == result)
				printf("�� �������� ���������!\n");
			else
				printf("�� �������� �����������! ���������� ����� = %d\n", x*y);
		}
		else
		{
			printf("����� ������ ���� ������������!\n");
		}
	}
	break;

	case 4:
	{
		//4.	�������� ��������� , ������� �� ���� �������� (���� d ����� n) ���������� ���� �������: 
		//� 22 ����� �� 21 ������ - ���� (4); � 22 ������ �� 21 ��� - ����� (5); � 22 ��� �� 21 ���� - �������� (6); 
		//� 22 ���� �� 21 ���� - ��� (7); � 22 ���� �� 21 ������� - ��� (8); � 22 ������� �� 21 �������� - ���� (9); 
		//22 �������� �� 21 ������� - ���� (10); � 22 ������� �� 21 ������ - �������� (11); � 22 ������ �� 21 ������� - ������� (12); 
		//� 22 ������� �� 21 ������ - ������� (1); 22 ������ �� 21 ������� - ������� (2); � 22 ������� �� 21 ����� - ���� (3).

		int day = 0, month = 0;
		printf("������� ����� ��������: ");
		scanf("%d", &month);

		printf("������� ���� ��������: ");
		scanf("%d", &day);

		if (month>=1 && month<=12)
		{
			switch (month)
			{
			case 1:
			{
				if (day >= 1 && day <= 21)
					printf("��� �������\n");
				else if (day >= 22 && day <= 31)
					printf("��� �������\n");
				else
					printf("������ ������ � ������ ���!\n");
			}
			break;

			case 2:
			{
				if (day >= 1 && day <= 21)
					printf("��� �������\n");
				else if (day >= 22 && day <= 29)
					printf("��� ����\n");
				else
					printf("������ ������ � ������� ���!\n");
			}
			break;

			case 3:
			{
				if (day >= 1 && day <= 21)
					printf("��� ����\n");
				else if (day >= 22 && day <= 31)
					printf("��� ����\n");
				else
					printf("������ ������ � ����� ���!\n");
			}
			break;

			case 4:
			{
				if (day >= 1 && day <= 21)
					printf("��� ����\n");
				else if (day >= 22 && day <= 30)
					printf("��� �����\n");
				else
					printf("������ ������ � ������ ���!\n");
			}
			break;

			case 5:
			{
				if (day >= 1 && day <= 21)
					printf("��� �����\n");
				else if (day >= 22 && day <= 31)
					printf("��� ��������\n");
				else
					printf("������ ������ � ��� ���!\n");
			}
			break;

			case 6:
			{
				if (day >= 1 && day <= 21)
					printf("��� ��������\n");
				else if (day >= 22 && day <= 30)
					printf("��� ���\n");
				else
					printf("������ ������ � ���� ���!\n");
			}
			break;

			case 7:
			{
				if (day >= 1 && day <= 21)
					printf("��� ���\n");
				else if (day >= 22 && day <= 31)
					printf("��� ���\n");
				else
					printf("������ ������ � ���� ���!\n");
			}
			break;

			case 8:
			{
				if (day >= 1 && day <= 21)
					printf("��� ���\n");
				else if (day >= 22 && day <= 31)
					printf("��� ����\n");
				else
					printf("������ ������ � ������� ���!\n");
			}
			break;

			case 9:
			{
				if (day >= 1 && day <= 21)
					printf("��� ����\n");
				else if (day >= 22 && day <= 30)
					printf("��� ����\n");
				else
					printf("������ ������ � �������� ���!\n");
			}
			break;

			case 10:
			{
				if (day >= 1 && day <= 21)
					printf("��� ����\n");
				else if (day >= 22 && day <= 31)
					printf("��� ��������\n");
				else
					printf("������ ������ � ������� ���!\n");
			}
			break;

			case 11:
			{
				if (day >= 1 && day <= 21)
					printf("��� ��������\n");
				else if (day >= 22 && day <= 30)
					printf("��� �������\n");
				else
					printf("������ ������ � ������ ���!\n");
			}
			break;

			case 12:
			{
				if (day >= 1 && day <= 21)
					printf("��� �������\n");
				else if (day >= 22 && day <= 31)
					printf("��� �������\n");
				else
					printf("������ ������ � ������� ���!\n");
			}
			break;
			}
		}

		else
		{
			printf("������ ������ �� ����������!\n");
		}

	}
	break;

	case 5:
	{
		//5.	��������� ���� ��������� ������� ���� 1)�6�, �7�, �8� 2)�7�, �8�, �9� 3) �6�, �9�, �10� 4)�6�, �9�, �8� 5)�7�, �6�, �10�, �������� � �����������. 
		//������� � ���������� ���� ������� � �������� � ��������� ����������, ������� ��������, 
		//��������� ������� ���������� ��������� ����� (��� ����� �� 6 �� 10 ������������ ��� ���������� ����� � ��������). 
		//���� ����� ���� ������ �������� ������ ����� ���� ����������, �� ��������

		int myNum1 = 0, myNum2 = 0, myNum3 = 0;
		printf("������� ���� 3 �����: ");
		scanf("%d %d %d", &myNum1, &myNum2, &myNum3);
		
		int a = 0, b = 0, c = 0;
		a = 6 + rand() % 10;
		b = 6 + rand() % 10;
		c = 6 + rand() % 10;
				
		if ((myNum1 + myNum2 + myNum3) > (a + b + c))
			printf("�� ��������! ������� ����������: %d %d %d\n", a, b, c);
		else
			printf("�� ���������! ������� ����������: %d %d %d\n", a, b, c);
	}
	break;

	case 6:
	{
		//6.	�������� ������� ��������������� ������� �� �����, ������ ����� ����������� ������ � �������� ������.

		printf("�������� ����� �����������, �� ��� ������, ������: \n");
		printf("\n���� 1: ������� ������������ �����������, ��� ��������� ������� ���� ����������� ����� ����������,\n"
				"����������: 1 ������������������, ����=0; 2 ������������, ����=2; 3 ����������������, ����=0;\n");
		
		int test1 = 0;
		printf("������� ����� ������: ");
		scanf("%d", &test1);

		switch (test1)
		{
		case 1:
		{
			int res11 = 0;
			printf("������������ �����. ���� ������ = %d\n", res11);
		}
		break;

		case 2:
		{
			int res12 = 2;
			printf("������������ �����. ���� ������ = %d\n", res12);
		}
		break;

		case 3:
		{
			int res13 = 0;
			printf("������������ �����. ���� ������ = %d\n", res13);
		}
		break;
		}
		

		printf("\n���� 2: c����������� ������, ��� ��������� �� ����� � ����� ����� ��� � ���������� � ���:\n" 
				"1 ����, ����=2 ; 2 ���������, ����=0; 3 ������, ����=0\n");

		int test2 = 0;
		printf("������� ����� ������: ");
		scanf("%d", &test2);

		switch (test2)
		{
		case 1:
		{
			int res21 = 2;
			printf("������������ �����. ���� ������ = %d\n", res21);
		}
		break;

		case 2:
		{
			int res22 = 0;
			printf("������������ �����. ���� ������ = %d\n", res22);
		}
		break;

		case 3:
		{
			int res23 = 0;
			printf("������������ �����. ���� ������ = %d\n", res23);
		}
		break;
		}
		


		printf("\n���� 3: ��� ����������� � ����-����� ��������� ������� ������������ ������������ ����������� ��������:\n"  
				"1 �������, ����=0; 2 ����, ����=0; 3 ����, ����=1\n");

		int test3 = 0;
		printf("������� ����� ������: ");
		scanf("%d", &test3);

		switch (test3)
		{
		case 1:
		{
			int res31 = 0;
			printf("������������ �����. ���� ������ = %d\n", res31);
		}
		break;

		case 2:
		{
			int res32 = 0;
			printf("������������ �����. ���� ������ = %d\n", res32);
		}
		break;

		case 3:
		{
			int res33 = 1;
			printf("������������ �����. ���� ������ = %d\n", res33);
		}
		break;
		}




		
	}
	break;

	case 7:
	{
		//7.	�������� ������ �� �����, ������ ��� � �����. 
		//������ ���������� ������� � ���������� �� ��������� � ������, ���� ������������ ����� ���� ������� � ������ 5%, ����� 10 ������� � 10%. 
		//������� ��� � �������� ������, ������ 12 ����� � 25��, 16 � 35��, 20 � 45��. ����� ��� � ������, ������ 10 ����� � 25��, 13 � 35��, 16 � 35��. 
		//������� ��� � �������, ������ 10 ����� � 35��, 14 � 45��, 18 � 45��. ������������� ��������� ������ �����.
		cin.get();
		char room = 0;
		st:
		printf("�������� ��� (� - �������, S - �����, G - �������): ");
		scanf("%c", &room);

		switch (room)
		{
		case 'K':
		{
			int time = 0;
			st1:
			printf("�������� ����� ������ (12 - 12 �����, 16 - 16 �����, 20 - 20 �����): ");
			scanf("%d", &time);

			switch (time)
			{
			case 12:
			{
				int tickets = 0;
				printf("������� ������� ���������: ");
				scanf("%d", &tickets);

				if (tickets>5 && tickets<=10)
				{
					float sum = 0;
					sum = (float)tickets*(float)25 - ((float)tickets*(float)25 * 0.05);
					printf("����� � ������: %f", sum);
				}

				else if (tickets>10)
				{
					float sum = 0;
					sum = (float)tickets*(float)25 - ((float)tickets*(float)25 * 0.1);
					printf("����� � ������: %f", sum);
				}
				else
				{
					float sum = 0;
					sum = (float)tickets*(float)25;
					printf("����� � ������: %f", sum);
				}
			}
			break;

			case 16:
			{
				int tickets = 0;
				printf("������� ������� ���������: ");
				scanf("%d", &tickets);

				if (tickets>5 && tickets <= 10)
				{
					float sum = 0;
					sum = (float)tickets*(float)35 - ((float)tickets*(float)35 * 0.05);
					printf("����� � ������: %f", sum);
				}

				else if (tickets>10)
				{
					float sum = 0;
					sum = (float)tickets*(float)35 - ((float)tickets*(float)35 * 0.1);
					printf("����� � ������: %f", sum);
				}
				else
				{
					float sum = 0;
					sum = (float)tickets*(float)35;
					printf("����� � ������: %f", sum);
				}
			}
			break;

			case 20:
			{
				int tickets = 0;
				printf("������� ������� ���������: ");
				scanf("%d", &tickets);

				if (tickets>5 && tickets <= 10)
				{
					float sum = 0;
					sum = (float)tickets*(float)45 - ((float)tickets*(float)45 * 0.05);
					printf("����� � ������: %f", sum);
				}

				else if (tickets>10)
				{
					float sum = 0;
					sum = (float)tickets*(float)45 - ((float)tickets*(float)45 * 0.1);
					printf("����� � ������: %f", sum);
				}
				else
				{
					float sum = 0;
					sum = (float)tickets*(float)45;
					printf("����� � ������: %f", sum);
				}
			}
			break;

			default:
			{
				printf("������ ������ ���! �������� �����");
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
			printf("�������� ����� ������ (10 - 10 �����, 13 - 13 �����, 16 - 16 �����): ");
			scanf("%d", &time);

			switch (time)
			{
			case 10:
			{
				int tickets = 0;
				printf("������� ������� ���������: ");
				scanf("%d", &tickets);

				if (tickets>5 && tickets <= 10)
				{
					float sum = 0;
					sum = (float)tickets*(float)25 - ((float)tickets*(float)25 * 0.05);
					printf("����� � ������: %f", sum);
				}

				else if (tickets>10)
				{
					float sum = 0;
					sum = (float)tickets*(float)25 - ((float)tickets*(float)25 * 0.1);
					printf("����� � ������: %f", sum);
				}
				else
				{
					float sum = 0;
					sum = (float)tickets*(float)25;
					printf("����� � ������: %f", sum);
				}
			}
			break;

			case 13:
			{
				int tickets = 0;
				printf("������� ������� ���������: ");
				scanf("%d", &tickets);

				if (tickets>5 && tickets <= 10)
				{
					float sum = 0;
					sum = (float)tickets*(float)35 - ((float)tickets*(float)35 * 0.05);
					printf("����� � ������: %f", sum);
				}

				else if (tickets>10)
				{
					float sum = 0;
					sum = (float)tickets*(float)35 - ((float)tickets*(float)35 * 0.1);
					printf("����� � ������: %f", sum);
				}
				else
				{
					float sum = 0;
					sum = (float)tickets*(float)35;
					printf("����� � ������: %f", sum);
				}
			}
			break;

			case 16:
			{
				int tickets = 0;
				printf("������� ������� ���������: ");
				scanf("%d", &tickets);

				if (tickets>5 && tickets <= 10)
				{
					float sum = 0;
					sum = (float)tickets*(float)35 - ((float)tickets*(float)35 * 0.05);
					printf("����� � ������: %f", sum);
				}

				else if (tickets>10)
				{
					float sum = 0;
					sum = (float)tickets*(float)35 - ((float)tickets*(float)35 * 0.1);
					printf("����� � ������: %f", sum);
				}
				else
				{
					float sum = 0;
					sum = (float)tickets*(float)35;
					printf("����� � ������: %f", sum);
				}
			}
			break;

			default:
			{
				printf("������ ������ ���! �������� �����");
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
			printf("�������� ����� ������ (10 - 10 �����, 14 - 14 �����, 18 - 18 �����): ");
			scanf("%d", &time);

			switch (time)
			{
			case 10:
			{
				int tickets = 0;
				printf("������� ������� ���������: ");
				scanf("%d", &tickets);

				if (tickets>5 && tickets <= 10)
				{
					float sum = 0;
					sum = (float)tickets*(float)35 - ((float)tickets*(float)35 * 0.05);
					printf("����� � ������: %f", sum);
				}

				else if (tickets>10)
				{
					float sum = 0;
					sum = (float)tickets*(float)35 - ((float)tickets*(float)35 * 0.1);
					printf("����� � ������: %f", sum);
				}
				else
				{
					float sum = 0;
					sum = (float)tickets*(float)35;
					printf("����� � ������: %f", sum);
				}
			}
			break;

			case 14:
			{
				int tickets = 0;
				printf("������� ������� ���������: ");
				scanf("%d", &tickets);

				if (tickets>5 && tickets <= 10)
				{
					float sum = 0;
					sum = (float)tickets*(float)45 - ((float)tickets*(float)45 * 0.05);
					printf("����� � ������: %f", sum);
				}

				else if (tickets>10)
				{
					float sum = 0;
					sum = (float)tickets*(float)45 - ((float)tickets*(float)45 * 0.1);
					printf("����� � ������: %f", sum);
				}
				else
				{
					float sum = 0;
					sum = (float)tickets*(float)45;
					printf("����� � ������: %f", sum);
				}
			}
			break;

			case 18:
			{
				int tickets = 0;
				printf("������� ������� ���������: ");
				scanf("%d", &tickets);

				if (tickets>5 && tickets <= 10)
				{
					float sum = 0;
					sum = (float)tickets*(float)45 - ((float)tickets*(float)45 * 0.05);
					printf("����� � ������: %f", sum);
				}

				else if (tickets>10)
				{
					float sum = 0;
					sum = (float)tickets*(float)45 - ((float)tickets*(float)45 * 0.1);
					printf("����� � ������: %f", sum);
				}
				else
				{
					float sum = 0;
					sum = (float)tickets*(float)45;
					printf("����� � ������: %f", sum);
				}
			}
			break;

			default:
			{
				printf("������ ������ ���! �������� �����");
				goto st3;
			}
			break;
			}
		}
		break;

		default:
		{
			printf("������ ���� ���! �������� �����");
			goto st;
		}
		break;

		}

	}
	break;




	
	}


}