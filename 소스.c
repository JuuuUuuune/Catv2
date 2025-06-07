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



	printf("****야옹이와수프****\n");
	printf("      /\\_/\\\n");
	printf(" /\\  / o o \\\n");
	printf("//\\\\ \\~(*)~/\n");
	printf("`  \\/   ^ /\n");
	printf("   | \\|| ||\n");
	printf("   \\ '|| ||\n");
	printf("    \\)()-())\n");

	printf("야옹이의 이름을 지어 주세요: ");
	scanf_s("%s", Name, 100);
	printf("야옹이의이름은%s입니다.\n", Name);



	Sleep(1000);



STATE:
	system("cls");

	while (1) {
		srand((unsigned int)time(NULL));
		int  r = rand() % 6 + 1, roup = rand() % 3 + 1;

		printf("==================== 현재상태===================\n");
		printf("현재까지 만든 수프: %d개\n", soup);
		printf("CP: %d 포인트\n", CP);
		printf("%s 기분(0~3): %d\n", Name, Mood);

		switch (Mood) {
		case 0:
			printf("기분이 매우 나쁩니다.\n"); break;
		case 1:
			printf("심심해합니다.\n"); break;
		case 2:
			printf("식빵을굽습니다.\n"); break;
		case 3:
			printf("골골송을부릅니다.\n"); break;
		}

		printf("집사와의 관계(0~4): %d\n", intimacy);

		switch (intimacy)
		{
		case 0:
			printf("곁에 오는것조차 싫어합니다.\n"); break;

		case 1:
			printf("간식 자판기 취급입니다.\n"); break;

		case 2:
			printf("그럭저럭 쓸 만한 집사입니다.\n"); break;

		case 3:
			printf("훌륭한 집사로 인정 받고 있습니다.\n"); break;

		case 4:
			printf("집사 껌딱지 입니다.\n"); break;

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


		printf("6-%d: 주사위눈이 %d이하이면 그냥 기분이 나빠집니다.\n", intimacy , 6-intimacy );
		printf("주사위를굴립니다.\n또르륵...\n%d이(가) 나왔습니다!\n", r);

		if (r < 6 - intimacy) {
			Mood--;
			if (Mood <= 0) {
				Mood = 0;
			}
			printf("아무 이유없이 기분이 나빠집니다. 고양이니까?\n 쫀덕의 기분이 나빠집니다: %d->%d\n", Mood+1, Mood);



		}

		switch (Mood) {

			case 0:
				printf("기분이 매우 나쁜%s은(는) 집으로 향합니다.\n", Name);
				CATPOS--;
				break;

			case 1:
				if (Toy = 0)
				{	
					Mood--;
					if (Mood <= 0) {
						Mood = 0;
					}
					printf("놀거리가 없어서 기분이 매우 나빠집니다.\n");
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
							printf("%s은(는) 심심해서 타워쪽으로 이동합니다.", Name);

						}
					}
					else if(ScratcherTF == 1)
					{

					}
					else if (TowerTF == 1)
					{

					}
					printf("%s은(는) 심심해서 스크래처쪽으로 이동합니다.\n", Name);
				}
				break;

			case 2:
				printf("%s은(는) 기분좋게식빵을굽고있습니다.\n", Name);
				break;
			
			case 3:
				printf("%s은(는) 골골송을부르며수프를만들러갑니다.\n", Name);
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
			printf("아무것도 하지않습니다.\n4/6의확률로친밀도가떨어집니다.\n주사위를굴립니다.\n 또르륵...\n%d이(가) 나왔습니다!\n", r);
			if (r <= 4) {
				intimacy -= 1;
				if (intimacy <= 0) {
					intimacy = 0;
				}

				printf("친밀도가 떨어집니다.\n현재 친밀도:  %d\n", intimacy);

			}


			else {
				printf("다행히 친밀도가 떨어지지 않았습니다.\n현재 친밀도:  %d\n", intimacy);
			}
			break;

		case 1:
			printf("%s의턱을긁어주었습니다.\n2/6의확률로친밀도가높아집니다.\n주사위를굴립니다.\n 또르륵...\n%d이(가) 나왔습니다!\n", Name, r);
			if (r >= 5) {
				if (intimacy >= 4) {
					intimacy = 4;
					printf("이미 친밀도가 최대입니다.\n현재 친밀도:  %d\n", intimacy);
				}

				else {
					intimacy += 1;
					if (intimacy >= 4) {
						intimacy = 4;
					}
					printf("친밀도가 높아집니다.\n현재 친밀도:  %d\n", intimacy);
				}

			}
			else {
				printf("친밀도는그대로입니다.\n현재 친밀도:  %d\n", intimacy);
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

		printf("어떤상호작용을하시겠습니까?   0. 아무것도 하지않음  1. 긁어 주기\n");

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
			printf("아무것도 하지 않았습니다.\n");
			Sleep(1000);
			goto STATE;

		case 1:
			printf("%s이동: 집사와 친밀할수록 냄비쪽으로 갈 확률이 높아집니다.\n주사위눈이3 이상이면 냄비 쪽으로 이동합니다.\n주사위를굴립니다.\n 또르륵...\n%d이(가) 나왔습니다!\n", Name, r);
			if (r >= 6 - intimacy) {
				printf("냄비 쪽으로 움직입니다.\n");
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
						printf("%s이(가) 감자 스프를만들었습니다!\n", Name);
						break;
					case 2:
						printf("%s이(가) 양송이 스프를만들었습니다!\n", Name);
						break;
					case 3:
						printf("%s이(가) 브로콜리 스프를만들었습니다!\n", Name);
						break;

					}

				}


				goto ROOM1;


			}
			else {
				printf("집 쪽으로 움직입니다.\n");
				CATPOS--;
				CDRT = 0;
				PRL = 3;
				if (CATPOS <= 1) {
					CATPOS = 1;
					printf("쫀떡은(는)자신의집에서편안함을느낍니다.\n");
					printf("%d", CATPOS);

				}

				goto ROOM1;


			}
			break;
		}



	}







	return 0;
}