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

	



	if (CATPM == 3) {
		system("cls");

		printf("돌발 퀘스트===================================\n\n");
		printf("%s가 쥐를 물어왔습니다.\n", Name);
		printf("0. 칭찬한다\n");
		printf("1. 도망친다\n");
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
			printf("%s와 가까워졌습니다.", Name);
			printf("CP +1\n");
			CP++;
			printf("보유 CP: %d\n", CP);
			Sleep(3000);
			break;
			

		case 1:
			printf("%s(은)는 주인에게 실망했습니다.\n", Name);
			printf("CP -1\n");
			CP--;
			if (CP < 0) {
				CP = 0;
			}
			printf("보유 CP: %d\n", CP);
			Sleep(3000);
			break;

		}
	}


	system("cls");

	while (1) {
		
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

			goto INTERACTION;
		}


		Sleep(500);


		printf("6-%d: 주사위눈이 %d이하이면 그냥 기분이 나빠집니다.\n", intimacy , 6-intimacy );
		printf("주사위를굴립니다.\n또르륵...\n%d이(가) 나왔습니다!\n", r);

		if (r < 6 - intimacy) {
			Mood--;
			if (Mood <= 0) {
				Mood = 0;
			}
			printf("아무 이유없이 기분이 나빠집니다. 고양이니까?\n%s의 기분이 나빠집니다: %d->%d\n",Name, Mood+1, Mood);
		}


		if (CATPOS == 1 && CATPM >= 1) {
			Mood++;
			if (Mood > 3) {
				Mood = 3;
			}
		}

		switch (Mood) {

			case 0:
				printf("기분이 매우 나쁜%s은(는) 집으로 향합니다.\n", Name);
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
					printf("놀거리가 없어서 기분이 매우 나빠집니다.\n");
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

							printf("%s은(는) 심심해서 타워쪽으로 이동합니다.\n", Name);

						}
						else {
							CDRT = 1;
							CATPOS++;

							if (CATPOS >= RMAX) {
								CATPOS = RMAX;
							}

							printf("%s은(는) 심심해서 스크래처쪽으로 이동합니다.\n", Name);
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
				printf("%s은(는) 기분좋게식빵을굽고있습니다.\n", Name);
				break;
			
			case 3:
				printf("%s은(는) 골골송을부르며수프를만들러갑니다.\n", Name);
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
			printf("%s은(는) 캣타워를 뛰어다닙니다, 기분이 제법 좋아졌습니다: %d->%d", Name, Mood-1,Mood);
		}


		if (CATPOS == ScratcherPOS) {
			Mood++;
			if (Mood > 3) {
				Mood = 3;
			}
			printf("%s은(는) 스크래처를 긁고 놀았습니다, 기분이 제법 좋아졌습니다: %d->%d", Name, Mood-1, Mood);
		}

		if (CATPOS == POTPOS) {
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



		printf("어떤상호작용을하시겠습니까?\n");

		int C = 2;
	
		printf("0. 아무것도 하지않음\n1. 긁어 주기\n");
		
		if(Toy == 1) {
			if (TRATTF == 1) {
			
				printf("%d. 장난감 쥐로 놀아주기\n", C);
				C++;
			}
			if (RAZTF == 1) {
				printf("%d. 레이저 포인터로 놀아주기\n", C);
				
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
			printf("아무것도 하지 않았습니다.\n");
			
				printf("%s의기분이나빠졌습니다: %d->%d\n", Name, Mood - 1, Mood);
				printf("집사와의 관계가 나빠집니다\n");
				if (r <= 5) {
					Mood--;
					printf("친밀도 -1\n");
					if (Mood < 0) {
						Mood = 0;
					}
		}

		case 1:
			printf("%s의 기분은 그대로입니다: %d\n", Name , Mood);
			if (r >= 5) {
				printf("친밀도 +1\n");
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
				
				printf("장난감 쥐로 %s와 놀아주었습니다.\n", Name);
				printf("%s의 기분이 조금 좋아졌습니다: %d->%d\n",Name, Mood-1, Mood);
				if (r >= 4) {
					printf("친밀도 +1\n");
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
				
				printf("레이저 포인터로 %s와 신나게 놀아주었습니다.\n", Name);
				printf("%s의 기분이 조금 좋아졌습니다: %d->%d\n", Name, Mood - 2, Mood);
				if (r >= 2) {
					printf("친밀도 +1\n");
					intimacy += 1;
				}
				if (intimacy > 4) {
					intimacy = 4;
				}
			}

			break;
		case 3:
			printf("레이저 포인터로 %s와 신나게 놀아주었습니다.\n", Name);
			printf("%s의 기분이 조금 좋아졌습니다: %d->%d\n", Name, Mood - 2, Mood);
			if (r >= 2) {
				printf("친밀도 +1\n");
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
			printf("%s의 기분과 친밀도에 따라서 CP가 %d 포인트 생산 되었습니다.\n", Name, Mood - 1 + intimacy);
			printf("보유 CP: %d 포인트\n", CP);
			printf("\n");


			printf("상점에서 물건을 살 수 있습니다.\n");
			printf("어떤 물건을 구매할까요?\n");

			printf("0. 아무것도사지않는다\n");

			printf("1. 장난감 쥐: 1 CP");
			if (TRATTF == 1) {
				printf("(품절)");
			}
			printf("\n");

			printf("2. 레이저포인터: 2 CP");
			if (RAZTF == 1) {
				printf("(품절)");
			}
			printf("\n");

			printf("3. 스크래처: 4 CP");
			if (ScratcherTF == 1) {
				printf("(품절)");
			}
			printf("\n");

			printf("4. 캣타워: 6 CP");
			if (TowerTF == 1) {
				printf("(품절)");
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
					printf("장난감 쥐를 이미 구매했습니다.\n");
					continue;
				}

				else if (CP < 1) {
					printf("CP가 부족합니다.\n");
					continue;
				}
				else
				{
					printf("장난감 쥐를 구매했습니다.\n");
					CP--;
					Toy = 1;
					TRATTF = 1;
					printf("보유 CP: %d\n", CP);
					CATPM++;
					Sleep(1000);
					goto STATE;

					

				}
				

			case 2:
				if (RAZTF == 1) {
					printf("레이저 포인터를 이미 구매했습니다.\n");
					continue;
				}

				else if (CP < 2) {
					printf("CP가 부족합니다.\n");
					continue;
				}
				else
				{
					printf("레이저 포인터를 구매했습니다.\n");
					CP-=2;
					Toy = 1;
					RAZTF = 1;
					printf("보유 CP: %d\n", CP);
					CATPM++;
					Sleep(1000);
					goto STATE;


				}

			case 3:
				if (ScratcherTF == 1) {
					printf("스크래쳐를 이미 구매했습니다.\n");
					continue;
				}

				else if (CP < 4) {
					printf("CP가 부족합니다.\n");
					continue;
				}
				else
				{
					printf("스크래처를 구매했습니다.\n");
					CP-=4;
					OBJT = 1;
					ScratcherTF = 1;
					printf("보유 CP: %d\n", CP);
					CATPM++;
					Sleep(1000);
					goto STATE;


				}
			case 4:
				if (TowerTF == 1) {
					printf("캣 타워를 이미 구매했습니다.\n");
					continue;
				}

				else if (CP <= 6) {
					printf("CP가 부족합니다.\n");
					continue;
				}
				else
				{
					printf("캣 타워를 구매했습니다.\n");
					CP-=6;
					OBJT = 1;
					TowerTF = 1;
					printf("보유 CP: %d\n", CP);
					CATPM++;
					Sleep(1000);
					goto STATE;


				}


			}


		}

		


	}







	return 0;
}