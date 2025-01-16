#include <stdio.h>
#include <string.h>

//Provincial Waterworks Authority
struct stringProvincialWaterworksAuthority {
	char used[80];
	char type[80];
	char size[20];
}; //end stringProvincialWaterworksAuthority structure

struct provincialWaterworksAuthority {
	int waterUsed;
	int userType;
	int meterSize;
	float consump;
	struct stringProvincialWaterworksAuthority str; //call stringProvincialWaterworksAuthority structure in provincialWaterworksAuthority structure
} dataWater; //end provincialWaterworksAuthority structure

void title(char titleMain[80], int countNumber, char lineStyle) {
	int i;
	printf("%s\n", titleMain);
	for(i = 1; i <= countNumber; i++) {
		printf("%c", lineStyle);
	} //end for loops
} //end title function

void line(int countNumber, char lineStyle) {
	int i;
	for(i = 1; i <= countNumber; i++) {
		printf("%c", lineStyle);
	} //end for loops
} //end line function

void outputChoiceMenu(struct provincialWaterworksAuthority *dataWater) {
			if(dataWater->waterUsed == 1) {
				strcpy(dataWater->str.used, "General area (Except for special areas)");
			} //end dataWater->waterUsed == 1 if
			else if(dataWater->waterUsed == 2) {
				strcpy(dataWater->str.used, "Branch areas in Phuket, Koh Samui and Koh Phangan");
			} //end dataWater->waterUsed == 2 if
			else if(dataWater->waterUsed == 3) {
				strcpy(dataWater->str.used, "Private investment space");
			} //end dataWater->waterUsed == 3 if
			else {
				strcpy(dataWater->str.used, "NULL");
			} //end else
			printf("\n\n\t 1.  Waterworks used : %s\n", dataWater->str.used);
			
			if(dataWater->userType == 1) {
				strcpy(dataWater->str.type, "Housing and others");
			} //end dataWater->userType == 1 if
			else if(dataWater->userType == 2) {
				strcpy(dataWater->str.type, "Government and small businesses");
			} //end dataWater->userType == 2 if
			else if(dataWater->userType == 3) {
				strcpy(dataWater->str.type, "Government and small businesses (28 and 29)");
			} //end dataWater->userType == 3 if
			else if(dataWater->userType == 4) {
				strcpy(dataWater->str.type, "State enterprises and large businesses");
			} //end dataWater->userType == 4 if
			else {
				strcpy(dataWater->str.type, "NULL");
			} //end else
			printf("\t 2.  User type : %s\n", dataWater->str.type);
			
			if(dataWater->meterSize == 1) {
				strcpy(dataWater->str.size, "1/2 or 0.5 Inches");
			} //end dataWater->meterSize == 1 if
			else if(dataWater->meterSize == 2) {
				strcpy(dataWater->str.size, "3/4 or 0.75 Inches");
			} //end dataWater->meterSize == 2 if
			else if(dataWater->meterSize == 3) {
				strcpy(dataWater->str.size, "1 Inches");
			} //end dataWater->meterSize == 3 if
			else if(dataWater->meterSize == 4) {
				strcpy(dataWater->str.size, "1 1/2 or 1.5 Inches");
			} //end dataWater->meterSize == 4 if
			else if(dataWater->meterSize == 5) {
				strcpy(dataWater->str.size, "2 Inches");
			} //end dataWater->meterSize == 5 if
			else if(dataWater->meterSize == 6) {
				strcpy(dataWater->str.size, "2 1/2 or 2.5 Inches");
			} //end dataWater->meterSize == 6 if
			else if(dataWater->meterSize == 7) {
				strcpy(dataWater->str.size, "3 Inches");
			} //end dataWater->meterSize == 7 if
			else if(dataWater->meterSize == 8) {
				strcpy(dataWater->str.size, "4 Inches");
			} //end dataWater->meterSize == 8 if
			else if(dataWater->meterSize == 9) {
				strcpy(dataWater->str.size, "6 Inches");
			} //end dataWater->meterSize == 9 if
			else if(dataWater->meterSize == 10) {
				strcpy(dataWater->str.size, "More than 6 Inches");
			} //end dataWater->meterSize == 10 if
			else {
				strcpy(dataWater->str.size, "NULL");
			} //end else
			printf("\t 3.  Water meter size : %s\n", dataWater->str.size);
			printf("\t 4.  Water consumption : %.2f Cubic meters\n\n", dataWater->consump);
			printf("\t\t\t\t**Check information before calculating**\n\t\t");
} //end outputChoiceMenu function

void outputGraph(float housing[][4], float small[][11], float large[][11], int graph) {
	int i, units[10][2] = {{0, 10}, {11, 20}, {21, 30}, {31, 50}, {51, 80}, {81, 100}, {101, 300}, {301, 1000}, {1001, 2000}, {2001, 3000}};
	float ranges[9] = {10, 10, 10, 20, 30, 20, 200, 700, 1000};
	
	if(graph == 1) {
		title("\t\t\t\t   Water tariff graph : General area (Except for special areas)", 124, '=');
	} //end graph == 1 if
	else if(graph == 2) {
		title("\t\t\t      Water tariff graph : Branch areas in Phuket, Koh Samui and Koh Phangan", 124, '=');
	} //end graph == 2 if
	else if(graph == 3) {
		title("\t\t\t\t\t   Water tariff graph : Private investment space", 124, '=');
	} //end graph == 3 if
	
	printf("\n\n\t\t\t     Housing and others      Government & Small businesses\tState enterprises & Large businesses\n  Water usage\t   Units     ");
	line(95,'-'); //call line function
	printf("\n\t\t\t     Price    X     Total\tPrice      X\t Total\t\t     Price    X\t      Total\n");
	line(124,'-'); //call line function
	printf("\n  %d - %d\t    %.0f\t     %.2f  %.2f  %.2f\t%.2f   %.2f     %.2f\t     %.2f  %.2f    %.2f", units[0][0], units[0][1], ranges[0], housing[0][0], housing[1][0], housing[2][0], small[0][0], small[1][0], small[2][0], large[0][0], large[1][0], large[2][0]);
	printf("\n  %d - %d\t    %.0f\t     %.2f  %.2f  %.2f\t%.2f   %.2f     %.2f\t     %.2f  %.2f    %.2f", units[1][0], units[1][1], ranges[1], housing[0][1], housing[1][1], housing[2][1], small[0][1], small[1][1], small[2][1], large[0][1], large[1][1], large[2][1]);
	printf("\n  %d - %d\t    %.0f\t     %.2f  %.2f  %.2f\t%.2f   %.2f     %.2f\t     %.2f  %.2f    %.2f", units[2][0], units[2][1], ranges[2], housing[0][2], housing[1][2], housing[2][2], small[0][2], small[1][2], small[2][2], large[0][2], large[1][2], large[2][2]);
	printf("\n  %d - %d\t    %.0f\t     %.2f  %.2f  %.2f\t%.2f   %.2f     %.2f\t     %.2f  %.2f    %.2f", units[3][0], units[3][1], ranges[3], housing[0][3], housing[1][3], housing[2][3], small[0][3], small[1][3], small[2][3], large[0][3], large[1][3], large[2][3]);
	printf("\n  %d - %d\t    %.0f\t\t\t\t\t%.2f   %.2f     %.2f\t     %.2f  %.2f    %.2f", units[4][0], units[4][1], ranges[4], small[0][4], small[1][4], small[2][4], large[0][4], large[1][4], large[2][4]);
	printf("\n  %d - %d\t    %.0f\t\t\t\t\t%.2f   %.2f     %.2f\t     %.2f  %.2f    %.2f", units[5][0], units[5][1], ranges[5], small[0][5], small[1][5], small[2][5], large[0][5], large[1][5], large[2][5]);
	printf("\n  %d - %d\t    %.0f\t\t\t\t\t%.2f   %.2f    %.2f\t     %.2f  %.2f   %.2f", units[6][0], units[6][1], ranges[6], small[0][6], small[1][6], small[2][6], large[0][6], large[1][6], large[2][6]);
	printf("\n  %d - %d\t    %.0f\t\t\t\t\t%.2f   %.2f   %.2f\t     %.2f  %.2f  %.2f", units[7][0], units[7][1], ranges[7], small[0][7], small[1][7], small[2][7], large[0][7], large[1][7], large[2][7]);
	printf("\n  %d - %d\t    %.0f\t\t\t\t%.2f   %.2f   %.2f\t     %.2f  %.2f  %.2f", units[8][0], units[8][1], ranges[8], small[0][8], small[1][8], small[2][8], large[0][8], large[1][8], large[2][8]);
	printf("\n  %d - %d\t    %.0f\t\t\t\t%.2f   %.2f   %.2f\t     %.2f  %.2f  %.2f", units[9][0], units[9][1], ranges[8], small[0][9], small[1][9], small[2][9], large[0][9], large[1][9], large[2][9]);
	printf("\n  More than 3000\t\t\t\t\t%.2f\t\t\t\t     %.2f\n\n", small[0][10], large[0][10]);
} //end outputGraph function

float serv(int meter) {
	float service = 0;
	if(meter == 1) {
		service = 30;
	} //end meter == 1 if
	else if(meter == 2) {
		service = 50;
	} //end meter == 2 if
	else if(meter == 3) {
		service = 60;
	} //end meter == 3 if
	else if(meter == 4) {
		service = 90;
	} //end meter == 4 if
	else if(meter == 5) {
		service = 350;
	} //end meter == 5 if
	else if(meter == 6 || meter == 7) {
		service = 450;
	} //end meter == 6 || meter == 7 if
	else if(meter == 8) {
		service = 550;
	} //end meter == 8 if
	else if(meter == 9) {
		service = 950;
	} //end meter == 9 if
	else if(meter == 10) {
		service = 1200;
	} //end meter == 10 if
	return service;
} //end serv function

float calculate(float consump, float *rates, int meterSize) {
	float cost = 0, sum , vat = 0, total = 0, serviceFee = 0, ranges[] = {10, 10, 10, 20, 30, 20, 200, 700, 1000, 1000, 99999997952};
	int i, size = sizeof(ranges) / sizeof(ranges[0]);
	
	printf("\n\n\t\t  Unit price (Bath)  Multiply\t    Units\t    Total\n\t\t");
	line(72,'-'); //call line function
	printf("\n");
	for (i = 0; i < size; i++) {
        if (consump <= ranges[i]) {
            cost += consump * rates[i];
            sum = consump * rates[i];
            printf("\t\t\t%.2f\t\tx\t    %.2f\t    %.2f Bath", rates[i], consump, sum);
            break;
        } //end consump <= ranges if
		else {
        	sum = ranges[i] * rates[i];
        	printf("\t\t\t%.2f\t\tx\t    %.2f\t    %.2f Bath\n", rates[i], ranges[i], sum);
            cost += ranges[i] * rates[i];
            consump -= ranges[i];
        } //end else
    } //end for loops
    printf("\n\t\t");
    line(72,'-'); //call line function
    printf("\n\t\t\tIncluding water\t\t\t\t    %.2f Bath\n", cost);
    serviceFee = serv(meterSize); //call serv function
    vat = (cost + serviceFee) * 0.07;
    total = cost + serviceFee + vat;
    printf("\t\t\tService fee\t\t\t\t    %.2f Bath\n", serviceFee);
    printf("\t\t\tVat 7 %%\t\t\t\t\t    %.2f Bath\n", vat);
    printf("\t\t\tNet price\t\t\t\t    %.2f Bath\n\t\t", total);
    line(72,'-'); //call line function
} //end calculate function
//Provincial Electricity Authority

int main() {
	int menuMain, menuSub;
	do {	
		title("\t\t\t\t       MAIN MENU CALCULATION PROGRAM ", 104, '='); //call title function
		printf("\n\n\t 1.  Program for calculating water bills Provincial Waterworks Authority\n");
		printf("\t 2.  Program for calculating electricity costs Provincial Electricity Authority\n");
		printf("\t 3.  Exit calculation program\n\n");
		line(104, '-'); //cal line function
		printf("\n\n\tWant to choose a menu : ");
		scanf(" %d", &menuMain); //get menuMain
		system("cls"); //clear screen
		
		if(menuMain == 1) {
			do{
				title("\t\t  PROGRAM FOR CALCULATING WATER BILLS PROVINCIAL WATERWORKS AUTHORITY", 104, '='); //call title function
				outputChoiceMenu(&dataWater); //call outputChoiceMenu function
				line(72,'-'); //call line function
				printf("\n\n\t 5.  Calculate water bill Provincial Waterworks Authority\n");
				printf("\t 6.  Water tariff graph Provincial Waterworks Authority\n");
				printf("\t 7.  Back to Main Menu Calculation Program\n\n");
				line(104, '-'); //call line function
				printf("\n\n\tWant to choose a menu : ");
				scanf(" %d", &menuSub); //get menuSub
				system("cls"); //clear screen
				
				if(menuSub == 1) {
					title("\t\t  PROGRAM FOR CALCULATING WATER BILLS PROVINCIAL WATERWORKS AUTHORITY", 104, '='); //call title function
					outputChoiceMenu(&dataWater); //call outputChoiceMenu function
					line(72,'-'); //call line function
					printf("\n\n\tWaterworks used\n\n");
					printf("\t 1.  General area (Except for special areas)\n");
					printf("\t 2.  Branch areas in Phuket, Koh Samui and Koh Phangan\n");
					printf("\t 3.  Private investment space\n\n");
					line(104, '-'); //call line function
					printf("\n\n\tWant to choose a menu : ");
					scanf(" %d", &dataWater.waterUsed); //get waterUsed in dataWater structure
					system("cls"); //clear screen
				} //end menuSub == 1 if
				else if(menuSub == 2) {
					title("\t\t  PROGRAM FOR CALCULATING WATER BILLS PROVINCIAL WATERWORKS AUTHORITY", 104, '='); //call title function
					outputChoiceMenu(&dataWater); //call outputChoiceMenu function
					line(72,'-'); //call line function
					printf("\n\n\tUser type\n\n");
					printf("\t 1.  Housing and others\n");
					printf("\t 2.  Government and small businesses\n");
					printf("\t 3.  Government and small businesses (28 and 29)\n");
					printf("\t 4.  State enterprises and large businesses\n\n");
					line(104, '-'); //call line function
					printf("\n\n\tWant to choose a menu : ");
					scanf(" %d", &dataWater.userType); //get userType in dataWater structure
					system("cls"); //clear screen
				} //end menuSub == 2 if
				else if(menuSub == 3) {
					title("\t\t  PROGRAM FOR CALCULATING WATER BILLS PROVINCIAL WATERWORKS AUTHORITY", 104, '='); //call title function
					outputChoiceMenu(&dataWater); //call outputChoiceMenu function
					line(72,'-'); //call line function
					printf("\n\n\tWater meter size\n\n");
					printf("\t 1.  1/2 or 0.5 Inches\t\t\t 2.  3/4 or 0.75 Inches\n");
					printf("\t 3.  1 Inches\t\t\t\t 4.  1 1/2 or 1.5 Inches\n");
					printf("\t 5.  2 Inches\t\t\t\t 6.  2 1/2 or 2.5 Inches\n");
					printf("\t 7.  3 Inches\t\t\t\t 8.  4 Inches\n");
					printf("\t 9.  6 Inches\t\t\t\t 10. More than 6 Inches\n\n");
					line(104, '-'); //call line function
					printf("\n\n\tWant to choose a menu : ");
					scanf(" %d", &dataWater.meterSize); //get meterSize in dataWater structure
					system("cls"); //clear screen
				} //end menuSub == 3 if
				else if(menuSub == 4) {
					title("\t\t  PROGRAM FOR CALCULATING WATER BILLS PROVINCIAL WATERWORKS AUTHORITY", 104, '='); //call title function
					outputChoiceMenu(&dataWater); //call outputChoiceMenu function
					line(72,'-'); //call line function
					printf("\n\n\tWater meter size\n\n");
					printf("\tEnter the desired amount of water used. (units per cubic meter) : ");
					scanf(" %f", &dataWater.consump); //get consump in dataWater structure
					system("cls"); //clear screen
				} //end menuSub == 4 if
				else if(menuSub == 5) {			
					title("\t\t  PROGRAM FOR CALCULATING WATER BILLS PROVINCIAL WATERWORKS AUTHORITY", 104, '='); //call title function
					if(dataWater.waterUsed == 1) {
						if(dataWater.userType == 1) {
							float rates[] = {10.20, 16.00, 19.00, 21.20, 21.60, 21.65, 21.70, 21.75, 21.80, 21.85, 21.90};			
							calculate(dataWater.consump, &rates, dataWater.meterSize); //call calculate function
						} //end userType in dataWater structure == 1 if
						else if(dataWater.userType == 2) {
							float rates[] = {16.00, 19.00, 20.00, 21.50, 21.60, 21.65, 21.70, 21.75, 21.80, 21.85, 21.90};
							calculate(dataWater.consump, &rates, dataWater.meterSize); //call calculate function
						} //end userType in dataWater structure == 2 if
						else if(dataWater.userType == 3) {
							float rates[] = {16.00, 19.00, 20.00, 21.50, 21.60, 29.25, 29.50, 29.75, 29.50, 29.25, 29.00};
							calculate(dataWater.consump, &rates, dataWater.meterSize); //call calculate function
						} //end userType in dataWater structure == 3 if
						else if(dataWater.userType == 4) {
							float rates[] = {18.00, 21.00, 24.00, 27.00, 29.00, 29.25, 29.50, 29.75, 29.50, 29.25, 29.00};
							calculate(dataWater.consump, &rates, dataWater.meterSize); //call calculate function
						} //end userType in dataWater structure == 4 if
					} //end waterUsed in dataWater structure == 1 if
					else if(dataWater.waterUsed == 2) {
						if(dataWater.userType == 1) {
							float rates[] = {10.20, 16.00, 19.00, 21.20, 24.00, 26.00, 30.25, 30.25, 30.25, 30.25, 30.25};
							calculate(dataWater.consump, &rates, dataWater.meterSize); //call calculate function
						} //end userType in dataWater structure == 1 if
						else if(dataWater.userType == 2) {
							float rates[] = {18.00, 21.00, 22.00, 23.00, 24.00, 26.00, 30.25, 30.25, 30.25, 30.25, 30.25};
							calculate(dataWater.consump, &rates, dataWater.meterSize); //call calculate function
						} //end userType in dataWater structure == 2 if
						else if(dataWater.userType == 3) {
							float rates[] = {18.00, 21.00, 22.00, 23.00, 24.00, 32.50, 33.50, 34.75, 34.75, 34.75, 34.75};
							calculate(dataWater.consump, &rates, dataWater.meterSize); //call calculate function
						} //end userType in dataWater structure == 3 if
						else if(dataWater.userType == 4) {
							float rates[] = {18.50, 22.00, 26.00, 29.00, 31.50, 32.50, 33.50, 34.75, 34.75, 34.75, 34.75};
							calculate(dataWater.consump, &rates, dataWater.meterSize); //call calculate function
						} //end userType in dataWater structure == 4 if
					} //end waterUsed in dataWater structure == 2 if
					else if(dataWater.waterUsed == 3) {
						if(dataWater.userType == 1) {
							float rates[] = {10.20, 16.00, 19.00, 21.20, 23.00, 24.00, 27.40, 27.50, 27.60, 27.80, 28.00};
							calculate(dataWater.consump, &rates, dataWater.meterSize); //call calculate function
						} //end userType in dataWater structure == 1 if
						else if(dataWater.userType == 2) {
							float rates[] = {17.00, 20.00, 21.00, 22.00, 23.00, 24.00, 27.40, 27.50, 27.60, 27.80, 28.00};
							calculate(dataWater.consump, &rates, dataWater.meterSize); //call calculate function
						} //end userType in dataWater structure == 2 if
						else if(dataWater.userType == 3) {
							float rates[] = {17.00, 20.00, 21.00, 22.00, 23.00, 31.25, 31.50, 31.75, 32.00, 32.25, 32.50};
							calculate(dataWater.consump, &rates, dataWater.meterSize); //call calculate function
						} //end userType in dataWater structure == 3 if
						else if(dataWater.userType == 4) {
							float rates[] = {18.25, 21.50, 25.50, 28.50, 31.00, 31.25, 31.50, 31.75, 32.00, 32.25, 32.50};
							calculate(dataWater.consump, &rates, dataWater.meterSize); //call calculate function
						} //end userType in dataWater structure == 4 if
					} //end waterUsed in dataWater structure == 3 if
					outputChoiceMenu(&dataWater); //call outputChoiceMenu function
					printf("\n\t\t");
					line(72,'-'); //call line function
					printf("\n\n\t 5.  Back to Program for Calculating Water Bills Provincial Waterworks Authority\n\n");
					line(104, '-'); //call line function
					printf("\n\n\tWant to choose a menu : ");
					scanf(" %d", &menuSub); //get menuSub
					system("cls"); //clear screen
					
					if(menuSub == 1) {
						title("\t\t  PROGRAM FOR CALCULATING WATER BILLS PROVINCIAL WATERWORKS AUTHORITY", 104, '='); //call title function
						outputChoiceMenu(&dataWater); //call outputChoiceMenu function
						line(72,'-'); //call line function
						printf("\n\n\tWaterworks used\n\n");
						printf("\t 1.  General area (Except for special areas)\n");
						printf("\t 2.  Branch areas in Phuket, Koh Samui and Koh Phangan\n");
						printf("\t 3.  Private investment space\n\n");
						line(104, '-'); //call line function
						printf("\n\n\tWant to choose a menu : ");
						scanf(" %d", &dataWater.waterUsed); //get waterUsed in dataWater structure
						system("cls"); //clear screen
					} //end menuSub == 1 if
					else if(menuSub == 2) {
						title("\t\t  PROGRAM FOR CALCULATING WATER BILLS PROVINCIAL WATERWORKS AUTHORITY", 104, '='); //call title function
						outputChoiceMenu(&dataWater); //call outputChoiceMenu function
						line(72,'-'); //call line function
						printf("\n\n\tUser type\n\n");
						printf("\t 1.  Housing and others\n");
						printf("\t 2.  Government and small businesses\n");
						printf("\t 3.  Government and small businesses (28 and 29)\n");
						printf("\t 4.  State enterprises and large businesses\n\n");
						line(104, '-'); //call line function
						printf("\n\n\tWant to choose a menu : ");
						scanf(" %d", &dataWater.userType); //get userType in dataWater structure
						system("cls"); //clear screen
					} //end menuSub == 2 if
					else if(menuSub == 3) {
						title("\t\t  PROGRAM FOR CALCULATING WATER BILLS PROVINCIAL WATERWORKS AUTHORITY", 104, '='); //call title function
						outputChoiceMenu(&dataWater); //call outputChoiceMenu function
						line(72,'-'); //call line function
						printf("\n\n\tWater meter size\n\n");
						printf("\t 1.  1/2 or 0.5 Inches\t\t\t 2.  3/4 or 0.75 Inches\n");
						printf("\t 3.  1 Inches\t\t\t\t 4.  1 1/2 or 1.5 Inches\n");
						printf("\t 5.  2 Inches\t\t\t\t 6.  2 1/2 or 2.5 Inches\n");
						printf("\t 7.  3 Inches\t\t\t\t 8.  4 Inches\n");
						printf("\t 9.  6 Inches\t\t\t\t 10. More than 6 Inches\n\n");
						line(104, '-'); //call line function
						printf("\n\n\tWant to choose a menu : ");
						scanf(" %d", &dataWater.meterSize); //get meterSize in dataWater structure
						system("cls"); //clear screen
					} //end menuSub == 3 if
					else if(menuSub == 4) {
						title("\t\t  PROGRAM FOR CALCULATING WATER BILLS PROVINCIAL WATERWORKS AUTHORITY", 104, '='); //call title function
						outputChoiceMenu(&dataWater); //call outputChoiceMenu function
						line(72,'-'); //call line function
						printf("\n\n\tWater meter size\n");
						printf("\tEnter the desired amount of water used. (units per cubic meter) : ");
						scanf(" %f", &dataWater.consump); //get consump in dataWater structure
						system("cls"); //clear screen
					} //end menuSub == 4 if
				} //end menuSub == 5 if
				else if(menuSub == 6) {
					do{
						int graph = 0;
						
						title("\t\t\t\t      WATER TARIFF GRAPH PROVINCIAL WATERWORKS AUTHORITY", 124, '='); //call title function
						printf("\n\n\tWater tariff graph\n\n");
						printf("\t 1.  General area (Except for special areas)\n");
						printf("\t 2.  Branch areas in Phuket, Koh Samui and Koh Phangan\n");
						printf("\t 3.  Private investment space\n");
						printf("\t 4.  Back to Program for Calculating Water Bills Provincial Waterworks Authority\n\n");
						line(124, '-'); //call line function
						printf("\n\n\tWant to choose a menu : ");
						scanf(" %d", &graph); //get graph
						system("cls"); //clear screen
						
						if(graph == 1) {
							float housing[][4] = {{10.20, 16.00, 19.00, 21.20}, {102.00, 160.00, 190.00, 424.00}, {102.00, 262.00, 452.00, 876.00}};
							float small[][11] = {{16.00, 19.00, 20.00, 21.50, 21.60, 21.65, 21.70, 21.75, 21.80, 21.85, 21.90}, {160.00, 190.00, 200.00, 430.00, 648.00, 433.00, 4340.00, 15225.00, 21800.00, 21850.00}, {160.00, 350.00, 550.00, 980.00, 1628.00, 2061.00, 6401.00, 21626.00, 43426.00, 65276.00}};
							float large[][11] = {{18.00, 21.00, 24.00, 27.00, 29.00, 29.25, 29.50, 29.75, 29.50, 29.25, 29.00}, {180.00, 210.00, 240.00, 540.00, 870.00, 585.00, 5900.00, 20825.00, 29500.00, 29250.00}, {180.00, 390.00, 630.00, 1170.00, 2040.00, 2625.00, 8525.00, 29350.00, 58850.00, 88100.00}};
							outputGraph(housing, small, large, graph); //end outputGraph function
						} //end graph == 1 if
						else if(graph == 2) {
							float housing[][4] = {{10.20, 16.00, 19.00, 21.20}, {102.00, 160.00, 190.00, 424.00}, {102.00, 262.00, 452.00, 876.00}};
							float small[][11] = {{18.00, 21.00, 22.00, 23.00, 24.00, 26.00, 30.25, 30.25, 30.25, 30.25, 30.25}, {180.00, 210.00, 220.00, 460.00, 720.00, 520.00, 6050.00, 21175.00, 30250.00, 30250.00}, {180.00, 390.00, 610.00, 1070.00, 1790.00, 2310.00, 8360.00, 29535.00, 59785.00, 90035.00}};
							float large[][11] = {{18.50, 22.00, 26.00, 29.00, 31.50, 32.50, 33.50, 34.75, 34.75, 34.75, 34.75}, {185.00, 220.00, 260.00, 580.00, 945.00, 650.00, 6700.00, 24325.00, 34750.00, 34750.00}, {185.00, 405.00, 665.00, 1245.00, 2190.00, 2840.00, 9540.00, 33865.00, 68615.00, 103365.00}};
							outputGraph(housing, small, large, graph); //end outputGraph function
						} //end graph == 2 if
						else if(graph == 3) {
							float housing[][4] = {{10.20, 16.00, 19.00, 21.20}, {102.00, 160.00, 190.00, 424.00}, {102.00, 262.00, 452.00, 876.00}};
							float small[][11] = {{17.00, 20.00, 21.00, 22.00, 23.00, 24.00, 27.40, 27.50, 27.60, 27.80, 28.00}, {170.00, 200.00, 210.00, 440.00, 690.00, 480.00, 5480.00, 19250.00, 27600.00, 27800.00}, {170.00, 370.00, 580.00, 1020.00, 1710.00, 2190.00, 7670.00, 26920.00, 54520.00, 82320.00}};
							float large[][11] = {{18.25, 21.50, 25.50, 28.50, 31.00, 31.25, 31.50, 31.75, 32.00, 32.25, 32.50}, {182.50, 215.00, 255.00, 570.00, 930.00, 625.00, 6300.00, 22225.00, 32000.00, 32250.00}, {182.50, 397.50, 652.50, 1222.50, 2152.50, 2777.50, 9077.50, 31302.50, 63302.50, 95552.50}};
							outputGraph(housing, small, large, graph); //end outputGraph function
						} //end graph == 3 if
						else if(graph == 4) {
							graph = 0;
							break;
						} //end graph == 4 if
					} while(1); //end do-while loops
				} //end menuSub == 6 if
				else if(menuSub == 7) {
					menuSub = 0;
					break;
				} //end menuSub == 7 if
			} while(1); //end do-while loops
		} //end menuMain == 1 if
		else if(menuMain == 2) {
//to		
		} //end menuMain == 2 if
		else if(menuMain == 3) {
			title("\t\t\t\t       MAIN MENU CALCULATION PROGRAM ", 104, '='); //call title function
			printf("\n\n\t\t\t\t\t       EXIT PROGRAM\n\n\t\t");
			line(72,'-'); //call line function
			printf("\n\n\n\n");
			break;
		} //end menuMain == 3 if
	} while(1); //end do-while loops
} //end main function
