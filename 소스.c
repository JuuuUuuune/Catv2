#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROOM_WIDTH 15



int main(void) {
	srand((unsigned int)time(NULL));
	int  r = rand() % 6 + 1, roup = rand() % 3 + 1, ROBJT = rand() % 11 + 1;


	char Name[100];

	int intimacy = 2, soup = 0, UIP = 0, PRL = 0, CATPOS = 1, CDRT = 3, CATPM = 0, RMAX = ROOM_WIDTH - 2,
		CP = 0, Mood = 0, OBJT = 0, Toy = 0 , ScratcherPOS = ROBJT, TowerPOS = ROBJT, POTPOS = ROOM_WIDTH -1, CAL1 = 0, CAL2 = 0, TRATTF = 0,
		RAZTF = 0, ScratcherTF = 0, TowerTF = 0;


	if (TowerPOS > 11) {
		TowerPOS = 11;
	}




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

	



	if (CATPM == 3) {
		system("cls");

		printf("���� ����Ʈ===================================\n\n");
		printf("%s�� �㸦 ����Խ��ϴ�.\n", Name);
		printf("0. Ī���Ѵ�\n");
		printf("1. ����ģ��\n");
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
		switch (UIP) {
		case 0:
			printf("%s�� ����������ϴ�.", Name);
			printf("CP +1\n");
			CP++;
			printf("���� CP: %d\n", CP);
			Sleep(3000);
			break;
			

		case 1:
			printf("%s(��)�� ���ο��� �Ǹ��߽��ϴ�.\n", Name);
			printf("CP -1\n");
			CP--;
			if (CP < 0) {
				CP = 0;
			}
			printf("���� CP: %d\n", CP);
			Sleep(3000);
			break;

		}
	}


	system("cls");

	while (1) {
		
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

			goto INTERACTION;
		}


		Sleep(500);


		printf("6-%d: �ֻ������� %d�����̸� �׳� ����� �������ϴ�.\n", intimacy , 6-intimacy );
		printf("�ֻ����������ϴ�.\n�Ǹ���...\n%d��(��) ���Խ��ϴ�!\n", r);

		if (r < 6 - intimacy) {
			Mood--;
			if (Mood <= 0) {
				Mood = 0;
			}
			printf("�ƹ� �������� ����� �������ϴ�. ����̴ϱ�?\n%s�� ����� �������ϴ�: %d->%d\n",Name, Mood+1, Mood);
		}


		if (CATPOS == 1 && CATPM >= 1) {
			Mood++;
			if (Mood > 3) {
				Mood = 3;
			}
		}

		switch (Mood) {

			case 0:
				printf("����� �ſ� ����%s��(��) ������ ���մϴ�.\n", Name);
				CATPOS--;
				if (CATPOS <= 1) {
					CATPOS = 1;
				}
				break;

			case 1:
				if (OBJT = 0)
				{	
					Mood--;
					if (Mood <= 0) {
						Mood = 0;
					}
					printf("��Ÿ��� ��� ����� �ſ� �������ϴ�.\n");
				}
				else if(OBJT = 1)
				{	
					if (ScratcherTF == 1 || TowerTF == 1) {

						CAL1 = TowerPOS - CATPOS;
						CAL2 = ScratcherPOS - CATPOS;
						
						if (CAL1 < CAL2 ) {
							CATPOS--;
							CDRT = 0;

							if (CATPOS <= 1) {
								CATPOS = 1;
							}

							printf("%s��(��) �ɽ��ؼ� Ÿ�������� �̵��մϴ�.\n", Name);

						}
						else {
							CDRT = 1;
							CATPOS++;

							if (CATPOS >= RMAX) {
								CATPOS = RMAX;
							}

							printf("%s��(��) �ɽ��ؼ� ��ũ��ó������ �̵��մϴ�.\n", Name);
						}
					}
					else if(ScratcherTF == 1)
					{

					}
					else if (TowerTF == 1)
					{

					}
					
				}
				break;

			case 2:
				printf("%s��(��) ������ԽĻ��������ֽ��ϴ�.\n", Name);
				break;
			
			case 3:
				printf("%s��(��) �������θ�����������鷯���ϴ�.\n", Name);
				CATPOS++;
				if (CATPOS > RMAX) {
					CATPOS = RMAX;
				}
				CDRT == 1;
				break;

		}


		if (CATPOS == TowerPOS) {
			Mood+=2;
			if (Mood > 3) {
				Mood = 3;
			}
			printf("%s��(��) ĹŸ���� �پ�ٴմϴ�, ����� ���� ���������ϴ�: %d->%d", Name, Mood-1,Mood);
		}


		if (CATPOS == ScratcherPOS) {
			Mood++;
			if (Mood > 3) {
				Mood = 3;
			}
			printf("%s��(��) ��ũ��ó�� �ܰ� ��ҽ��ϴ�, ����� ���� ���������ϴ�: %d->%d", Name, Mood-1, Mood);
		}

		if (CATPOS == POTPOS) {
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





		if (OBJT == 1) {
			if (TowerTF == 1 && ScratcherTF == 1) {
				if (TowerPOS < ScratcherPOS) {
					for (int i = 0; i < TowerPOS - 1; i++) {
						printf(" ");
					}
					printf("T");
					for (int i = 0; i < ScratcherPOS - TowerPOS-1; i++){
						printf(" ");
					}
					printf("S");
					for (int i = 0; i < 11 - ScratcherPOS-1; i++)
					{
						printf(" ");
					}
				}

				else {
					for (int i = 0; i < ScratcherPOS - 1; i++) {
						printf(" ");
					}
					printf("T");
					for (int i = 0; i < TowerPOS - ScratcherPOS - 1; i++) {
						printf(" ");
					}
					printf("S");
					for (int i = 0; i < 11 - TowerPOS-1; i++)
					{
						printf(" ");
					}

				}
			}
			else if (TowerTF == 1) {
				for (int i = 0; i < TowerPOS - 1; i++) {
					printf(" ");
				}
				printf("T");
				for (int i = 0; i < 11 - TowerPOS; i++)
				{
					printf(" ");
				}
			}

			else {
				for (int i = 0; i < ScratcherPOS - 1; i++) {
					printf(" ");
				}
				printf("S");
				for (int i = 0; i < 11 - ScratcherPOS; i++)
				{
					printf(" ");
				}

			}

		}

		else
		{
			for (int i = 0; i < 11; i++) {
				printf(" ");
			}
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
			else if (CATPOS == 1 && CDRT == 0 && i == 2 && CATPM >= 1) {
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

			else if (CATPOS == 9 && CDRT == 1 && i == 8) {
				printf(".");
				}
			else if (CATPOS == 9 && i == 9) {
					printf("C");
					if (CDRT == 1) {
						continue;
					}
					}
			else if (CATPOS == 9 && CDRT == 0 && i == 10) {
						printf(".");
						continue;
						}


			else if (CATPOS == 10 && CDRT == 1 && i == 9) {
				printf(".");
			}
			else if (CATPOS == 10 && i == 10) {
				printf("C");
				if (CDRT == 1) {
					continue;
				}
				}
			else if (CATPOS == 10 && CDRT == 0 && i == 11) {
					printf(".");
					continue;
					}

			else if (CATPOS == 11 && CDRT == 1 && i == 10) {
					printf(".");
						}
			else if (CATPOS == 11 && i == 11) {
					printf("C");
					if (CDRT == 1) {
					continue;
							}
							}
			else if (CATPOS == 11 && CDRT == 0 && i == 12) {
					printf(".");
					continue;
								}

			else if (CATPOS == 12 && CDRT == 1 && i == 11) {
					printf(".");
									}
			else if (CATPOS == 12 && i == 12) {
					printf("C");
					if (CDRT == 1) {
					continue;
					}
					}
			else if (CATPOS == 12 && CDRT == 0 && i == 13) {
					printf(".");
					continue;
					}

			
			else if (CATPOS == 13 && CDRT == 1 && i == 12) {
				printf(".");
			}
			else if (CATPOS == 13 && i == 13) {
				printf("C");
				if (CDRT == 1) {
					continue;
				}
			}
			else if (CATPOS == 13 && CDRT == 0 && i == 14) {
				printf(".");
				continue;
			}
			
			else if (CATPOS == 14 && CDRT == 1 && i == 13) {
				printf(".");
			}
			else if (CATPOS == 14 && i == 14) {
				printf("C");
				if (CDRT == 1) {
					continue;
				}
			}
			else if (CATPOS == 14 && CDRT == 0 && i == 15) {
				printf(".");
				continue;
			}
			
			else if (CATPOS == 15 && CDRT == 1 && i == 14) {
				printf(".");
			}
			else if (CATPOS == 15 && i == 15) {
				printf("C");
				if (CDRT == 1) {
					continue;
				}
			}
			else if (CATPOS == 15 && CDRT == 0 && i == 16) {
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



		printf("���ȣ�ۿ����Ͻðڽ��ϱ�?\n");

		int C = 2;
	
		printf("0. �ƹ��͵� ��������\n1. �ܾ� �ֱ�\n");
		
		if(Toy == 1) {
			if (TRATTF == 1) {
			
				printf("%d. �峭�� ��� ����ֱ�\n", C);
				C++;
			}
			if (RAZTF == 1) {
				printf("%d. ������ �����ͷ� ����ֱ�\n", C);
				
			}
		}




		while (1) {
			printf(">>");
			scanf_s("%d", &UIP);
	
			if (UIP == 0 || UIP == 1) {
					break;
				}
			
			else if (TRATTF == 1 && RAZTF == 1) {
				if (UIP == 3) {
					break;
				}
			}

			else if (TRATTF == 1 || RAZTF == 1) {
					if (UIP == 2) {
						break;
					}

				}
			

			
			
			
			else {
				continue;
			}
		}


		Sleep(1000);



		PRL = 2;
		goto STATE;


	INTERACTION:


		switch (UIP)
		{
		case 0:
			printf("�ƹ��͵� ���� �ʾҽ��ϴ�.\n");
			
				printf("%s�Ǳ���̳��������ϴ�: %d->%d\n", Name, Mood - 1, Mood);
				printf("������� ���谡 �������ϴ�\n");
				if (r <= 5) {
					Mood--;
					printf("ģ�е� -1\n");
					if (Mood < 0) {
						Mood = 0;
					}
		}

		case 1:
			printf("%s�� ����� �״���Դϴ�: %d\n", Name , Mood);
			if (r >= 5) {
				printf("ģ�е� +1\n");
				intimacy++;
				if (intimacy > 4) {
					intimacy = 4;
				}
			}

		
			break;


		case 2:
			if (TRATTF == 1) {
				Mood++;
				if (Mood > 3) {
					Mood = 3;
				}
				
				printf("�峭�� ��� %s�� ����־����ϴ�.\n", Name);
				printf("%s�� ����� ���� ���������ϴ�: %d->%d\n",Name, Mood-1, Mood);
				if (r >= 4) {
					printf("ģ�е� +1\n");
					intimacy++;
				}
				if (intimacy > 4) {
					intimacy = 4;
				}
			}
			else {
				Mood += 2;
				if (Mood > 3) {
					Mood = 3;
				}
				
				printf("������ �����ͷ� %s�� �ų��� ����־����ϴ�.\n", Name);
				printf("%s�� ����� ���� ���������ϴ�: %d->%d\n", Name, Mood - 2, Mood);
				if (r >= 2) {
					printf("ģ�е� +1\n");
					intimacy += 1;
				}
				if (intimacy > 4) {
					intimacy = 4;
				}
			}

			break;
		case 3:
			printf("������ �����ͷ� %s�� �ų��� ����־����ϴ�.\n", Name);
			printf("%s�� ����� ���� ���������ϴ�: %d->%d\n", Name, Mood - 2, Mood);
			if (r >= 2) {
				printf("ģ�е� +1\n");
				intimacy += 1;
			}
			if (intimacy > 4) {
				intimacy = 4;
			}

			break;
		
		
		}
		Sleep(1000);

		CP = CP + Mood - 1 + intimacy;
		
	
	

		while (1) {
			Sleep(1000);
			system("cls");
			printf("%s�� ��а� ģ�е��� ���� CP�� %d ����Ʈ ���� �Ǿ����ϴ�.\n", Name, Mood - 1 + intimacy);
			printf("���� CP: %d ����Ʈ\n", CP);
			printf("\n");


			printf("�������� ������ �� �� �ֽ��ϴ�.\n");
			printf("� ������ �����ұ��?\n");

			printf("0. �ƹ��͵������ʴ´�\n");

			printf("1. �峭�� ��: 1 CP");
			if (TRATTF == 1) {
				printf("(ǰ��)");
			}
			printf("\n");

			printf("2. ������������: 2 CP");
			if (RAZTF == 1) {
				printf("(ǰ��)");
			}
			printf("\n");

			printf("3. ��ũ��ó: 4 CP");
			if (ScratcherTF == 1) {
				printf("(ǰ��)");
			}
			printf("\n");

			printf("4. ĹŸ��: 6 CP");
			if (TowerTF == 1) {
				printf("(ǰ��)");
			}

			printf("\n");

			
			while (1) {
				printf(">>");
				scanf_s("%d", &UIP);
				if (UIP == 0 || UIP == 1 || UIP == 2 || UIP == 3 || UIP == 4) {
					break;
				}
				else {
					continue;
				}
			}

			switch (UIP) {

			case 0:
				CATPM++;
				Sleep(1000);
				goto STATE;

			case 1:
				if (TRATTF == 1) {
					printf("�峭�� �㸦 �̹� �����߽��ϴ�.\n");
					continue;
				}

				else if (CP < 1) {
					printf("CP�� �����մϴ�.\n");
					continue;
				}
				else
				{
					printf("�峭�� �㸦 �����߽��ϴ�.\n");
					CP--;
					Toy = 1;
					TRATTF = 1;
					printf("���� CP: %d\n", CP);
					CATPM++;
					Sleep(1000);
					goto STATE;

					

				}
				

			case 2:
				if (RAZTF == 1) {
					printf("������ �����͸� �̹� �����߽��ϴ�.\n");
					continue;
				}

				else if (CP < 2) {
					printf("CP�� �����մϴ�.\n");
					continue;
				}
				else
				{
					printf("������ �����͸� �����߽��ϴ�.\n");
					CP-=2;
					Toy = 1;
					RAZTF = 1;
					printf("���� CP: %d\n", CP);
					CATPM++;
					Sleep(1000);
					goto STATE;


				}

			case 3:
				if (ScratcherTF == 1) {
					printf("��ũ���ĸ� �̹� �����߽��ϴ�.\n");
					continue;
				}

				else if (CP < 4) {
					printf("CP�� �����մϴ�.\n");
					continue;
				}
				else
				{
					printf("��ũ��ó�� �����߽��ϴ�.\n");
					CP-=4;
					OBJT = 1;
					ScratcherTF = 1;
					printf("���� CP: %d\n", CP);
					CATPM++;
					Sleep(1000);
					goto STATE;


				}
			case 4:
				if (TowerTF == 1) {
					printf("Ĺ Ÿ���� �̹� �����߽��ϴ�.\n");
					continue;
				}

				else if (CP <= 6) {
					printf("CP�� �����մϴ�.\n");
					continue;
				}
				else
				{
					printf("Ĺ Ÿ���� �����߽��ϴ�.\n");
					CP-=6;
					OBJT = 1;
					TowerTF = 1;
					printf("���� CP: %d\n", CP);
					CATPM++;
					Sleep(1000);
					goto STATE;


				}


			}


		}

		


	}







	return 0;
}