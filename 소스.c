#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROOM_WIDTH 15



int main(void) {

	char Name[100];

	int intimacy = 2, soup = 0, UIP = 0, PRL = 0, CATPOS = 1, CDRT = 3, CATPM = 0, RMAX = ROOM_WIDTH - 2,
		CP = 0, Mood = 0, Toy = 0, ScratcherPOS = ROOM_WIDTH - 5, TowerPOS = ROOM_WIDTH - 11, CAL1 = 0, CAL2 = 0,
		ScratcherTF = 0, TowerTF = 0;



	printf("****�߿��̿ͼ���****\n");
	printf("      /\\_/\\\n");
	printf(" /\\  / o o \\\n");
	printf("//\\\\ \\~(*)~/\n");
	printf("`  \\/   ^ /\n");
	printf("   | \\|| ||\n");
	printf("   \\ '|| ||\n");
	printf("    \\)()-())\n");

	printf("�߿����� �̸��� ���� �ּ���: ");
	scanf_s("%s", Name, 100);
	printf("�߿������̸���%s�Դϴ�.\n", Name);



	Sleep(1000);



STATE:
	system("cls");

	while (1) {
		srand((unsigned int)time(NULL));
		int  r = rand() % 6 + 1, roup = rand() % 3 + 1;

		printf("==================== �������===================\n");
		printf("������� ���� ����: %d��\n", soup);
		printf("CP: %d ����Ʈ\n", CP);
		printf("%s ���(0~3): %d\n", Name, Mood);

		switch (Mood) {
		case 0:
			printf("����� �ſ� ���޴ϴ�.\n"); break;
		case 1:
			printf("�ɽ����մϴ�.\n"); break;
		case 2:
			printf("�Ļ��������ϴ�.\n"); break;
		case 3:
			printf("�������θ��ϴ�.\n"); break;
		}

		printf("������� ����(0~4): %d\n", intimacy);

		switch (intimacy)
		{
		case 0:
			printf("�翡 ���°����� �Ⱦ��մϴ�.\n"); break;

		case 1:
			printf("���� ���Ǳ� ����Դϴ�.\n"); break;

		case 2:
			printf("�׷����� �� ���� �����Դϴ�.\n"); break;

		case 3:
			printf("�Ǹ��� ����� ���� �ް� �ֽ��ϴ�.\n"); break;

		case 4:
			printf("���� ������ �Դϴ�.\n"); break;

		default:
			break;
		}
		printf("================================================\n");

		if (PRL == 1) {
			PRL = 0;

			goto ROOM1;
		}
		else if (PRL == 2) {
			PRL = 0;

			goto ROOM2;
		}


		Sleep(500);


		printf("6-%d: �ֻ������� %d�����̸� �׳� ����� �������ϴ�.\n", intimacy , 6-intimacy );
		printf("�ֻ����������ϴ�.\n�Ǹ���...\n%d��(��) ���Խ��ϴ�!\n", r);

		if (r < 6 - intimacy) {
			Mood--;
			if (Mood <= 0) {
				Mood = 0;
			}
			printf("�ƹ� �������� ����� �������ϴ�. ����̴ϱ�?\n �˴��� ����� �������ϴ�: %d->%d\n", Mood+1, Mood);



		}

		switch (Mood) {

			case 0:
				printf("����� �ſ� ����%s��(��) ������ ���մϴ�.\n", Name);
				CATPOS--;
				break;

			case 1:
				if (Toy = 0)
				{	
					Mood--;
					if (Mood <= 0) {
						Mood = 0;
					}
					printf("��Ÿ��� ��� ����� �ſ� �������ϴ�.\n");
				}
				else if(Toy = 1)
				{	
					if (ScratcherTF == 1 && TowerTF == 1) {

						CAL1 = TowerPOS - CATPOS;
						CAL1 = abs(CAL1);

						CAL2 = ScratcherPOS - CATPOS;
						CAL2 = abs(CAL2);

						
						if (CAL1 < CAL2 ) {
							CATPOS--;
							printf("%s��(��) �ɽ��ؼ� Ÿ�������� �̵��մϴ�.", Name);

						}
					}
					else if(ScratcherTF == 1)
					{

					}
					else if (TowerTF == 1)
					{

					}
					printf("%s��(��) �ɽ��ؼ� ��ũ��ó������ �̵��մϴ�.\n", Name);
				}
				break;

			case 2:
				printf("%s��(��) ������ԽĻ��������ֽ��ϴ�.\n", Name);
				break;
			
			case 3:
				printf("%s��(��) �������θ�����������鷯���ϴ�.\n", Name);
				break;

		}

		PRL = 4;
		goto ROOM1;





		while (1) {
			printf(">>");
			scanf_s("%d", &UIP);
			if (UIP == 0 || UIP == 1) {
				break;
			}
			else {
				continue;
			}
		}

		switch (UIP)
		{
		case 0:
			printf("�ƹ��͵� �����ʽ��ϴ�.\n4/6��Ȯ����ģ�е����������ϴ�.\n�ֻ����������ϴ�.\n �Ǹ���...\n%d��(��) ���Խ��ϴ�!\n", r);
			if (r <= 4) {
				intimacy -= 1;
				if (intimacy <= 0) {
					intimacy = 0;
				}

				printf("ģ�е��� �������ϴ�.\n���� ģ�е�:  %d\n", intimacy);

			}


			else {
				printf("������ ģ�е��� �������� �ʾҽ��ϴ�.\n���� ģ�е�:  %d\n", intimacy);
			}
			break;

		case 1:
			printf("%s�������ܾ��־����ϴ�.\n2/6��Ȯ����ģ�е����������ϴ�.\n�ֻ����������ϴ�.\n �Ǹ���...\n%d��(��) ���Խ��ϴ�!\n", Name, r);
			if (r >= 5) {
				if (intimacy >= 4) {
					intimacy = 4;
					printf("�̹� ģ�е��� �ִ��Դϴ�.\n���� ģ�е�:  %d\n", intimacy);
				}

				else {
					intimacy += 1;
					if (intimacy >= 4) {
						intimacy = 4;
					}
					printf("ģ�е��� �������ϴ�.\n���� ģ�е�:  %d\n", intimacy);
				}

			}
			else {
				printf("ģ�е��±״���Դϴ�.\n���� ģ�е�:  %d\n", intimacy);
			}
			break;

		}


		Sleep(1000);


		PRL = 1;
		goto STATE;

	ROOM1:
		for (int i = 0; i < ROOM_WIDTH; i++) {
			printf("#");
		}
		printf("\n");



		printf("#");
		printf("H");
		for (int i = 0; i < ROOM_WIDTH - 4; i++) {
			printf(" ");
		}
		printf("B");
		printf("#\n");



		printf("#");
		for (int i = 1; i <= ROOM_WIDTH - 2; i++) {
			if (CATPOS == 1 && i == 1) {
				printf("C");
				if (CDRT == 1) {
					continue;
				}
			}
			else if (CATPOS == 1 && CDRT == 0 && i == 2 && CATPM == 1) {
				printf(".");
				continue;
			}


			else if (CATPOS == 2 && CDRT == 1 && i == 1) {
				printf(".");

			}
			else if (CATPOS == 2 && i == 2) {
				printf("C");
				if (CDRT == 1) {
					continue;
				}
			}
			else if (CATPOS == 2 && CDRT == 0 && i == 3) {
				printf(".");
				continue;
			}


			else if (CATPOS == 3 && CDRT == 1 && i == 2) {
				printf(".");
			}
			else if (CATPOS == 3 && i == 3) {
				printf("C");
				if (CDRT == 1) {
					continue;
				}
			}
			else if (CATPOS == 3 && CDRT == 0 && i == 4) {
				printf(".");
				continue;
			}


			else if (CATPOS == 4 && CDRT == 1 && i == 3) {
				printf(".");
			}
			else if (CATPOS == 4 && i == 4) {
				printf("C");
				if (CDRT == 1) {
					continue;
				}
			}
			else if (CATPOS == 4 && CDRT == 0 && i == 5) {
				printf(".");
				continue;
			}


			else if (CATPOS == 5 && CDRT == 1 && i == 4) {
				printf(".");
			}
			else if (CATPOS == 5 && i == 5) {
				printf("C");
				if (CDRT == 1) {
					continue;
				}
			}
			else if (CATPOS == 5 && CDRT == 0 && i == 6) {
				printf(".");
				continue;
			}


			else if (CATPOS == 6 && CDRT == 1 && i == 5) {
				printf(".");

			}
			else if (CATPOS == 6 && i == 6) {
				printf("C");
				if (CDRT == 1) {
					continue;
				}
			}
			else if (CATPOS == 6 && CDRT == 0 && i == 7) {
				printf(".");
				continue;
			}


			else if (CATPOS == 7 && CDRT == 1 && i == 6) {
				printf(".");
			}
			else if (CATPOS == 7 && i == 7) {
				printf("C");
				if (CDRT == 1) {
					continue;
				}
			}
			else if (CATPOS == 7 && CDRT == 0 && i == 8) {
				printf(".");
				continue;
			}


			else if (CATPOS == 8 && CDRT == 1 && i == 7) {
				printf(".");
			}
			else if (CATPOS == 8 && i == 8) {
				printf("C");
				if (CDRT == 1) {
					continue;
				}
			}
			else if (CATPOS == 8 && CDRT == 0 && i == 9) {
				printf(".");
				continue;
			}

			else {
				printf(" ");
			}
		}
		printf("#\n");

		for (int i = 0; i < ROOM_WIDTH; i++) {
			printf("#");
		}
		printf("\n");

		if (PRL == 3) {
			PRL = 0;
			Sleep(2500);
			goto STATE;
		}

		printf("���ȣ�ۿ����Ͻðڽ��ϱ�?   0. �ƹ��͵� ��������  1. �ܾ� �ֱ�\n");

		while (1) {
			printf(">>");
			scanf_s("%d", &UIP);
			if (UIP == 0 || UIP == 1) {
				break;
			}
			else {
				continue;
			}
		}


		Sleep(1000);



		PRL = 2;
		goto STATE;


	ROOM2:


		switch (UIP)
		{
		case 0:
			printf("�ƹ��͵� ���� �ʾҽ��ϴ�.\n");
			Sleep(1000);
			goto STATE;

		case 1:
			printf("%s�̵�: ����� ģ���Ҽ��� ���������� �� Ȯ���� �������ϴ�.\n�ֻ�������3 �̻��̸� ���� ������ �̵��մϴ�.\n�ֻ����������ϴ�.\n �Ǹ���...\n%d��(��) ���Խ��ϴ�!\n", Name, r);
			if (r >= 6 - intimacy) {
				printf("���� ������ �����Դϴ�.\n");
				CATPOS++;
				CDRT = 1;
				CATPM = 1;
				PRL = 3;
				if (RMAX <= CATPOS) {
					CATPOS = RMAX;
					soup++;
					switch (roup)
					{
					case 1:
						printf("%s��(��) ���� ��������������ϴ�!\n", Name);
						break;
					case 2:
						printf("%s��(��) ����� ��������������ϴ�!\n", Name);
						break;
					case 3:
						printf("%s��(��) ����ݸ� ��������������ϴ�!\n", Name);
						break;

					}

				}


				goto ROOM1;


			}
			else {
				printf("�� ������ �����Դϴ�.\n");
				CATPOS--;
				CDRT = 0;
				PRL = 3;
				if (CATPOS <= 1) {
					CATPOS = 1;
					printf("�˶���(��)�ڽ���������������������ϴ�.\n");
					printf("%d", CATPOS);

				}

				goto ROOM1;


			}
			break;
		}



	}







	return 0;
}