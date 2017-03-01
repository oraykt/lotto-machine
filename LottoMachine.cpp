#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>



using namespace std;
int createQuerry() {
	int WinningNumbers[6];
	for (int i = 0; i < 6; i++)
		WinningNumbers[i] = rand() % 53;
	checkEqual(WinningNumbers);
	WinningNumbers = insertionSort(WinningNumbers);
	cout << "Kazanan Sayilar => " << Printer(WinningNumbers);
	return WinningNumbers;
}
int insertionSort(int Numbers[])
{
	int temp, i, j;
	for (i = 0; i < 9; i++) {
		temp = Numbers[i];
		for (j = i - 1; j >= 0 && temp < Numbers[j]; j--) {
			Numbers[j + 1] = Numbers[j];
		}
		Numbers[j + 1] = temp;
	}
	return Numbers;
}
void checkEqual(int lotto[]) {
	int cnt = 1;
	int i;
	do {
		int temp = lotto[cnt - 1];
		for (i = cnt; cnt < 7; cnt++) {
			if (temp == lotto[i])
				lotto[i] = rand() % 53;
		}
		cnt++;
	} while (i != cnt + 1);
}
int checkWinningNumbers(int lotto[], int WinningNumbers[6]) {
	int cnt = 0;
	for (int i = 0; i < 6; i++) {
		for (int k = 0; k < 6; k++)
			if (lotto[i] == WinningNumbers[k])
				cnt++;
	}
	return checkWinningNumbers;
}
void Printer(int Numbers[]) {
	for (int i = 0; i < 6; i++)
		cout << " " << Numbers[i];
}
int random(int lotto[]) {
	for (int i = 0; i < 7; i++)
		lotto[i] = rand() % 53;
	return lotto;
}


int main() {
	int btn;
	do {
		cout << "Devam etmek icin herhangi bir tusa basiniz !! // Cikis icin 1 e basmaniz yeterli" << endl;
		cin << btn;
		int lotto[6];
		lotto = random(lotto);
		checkEqual(lotto);
		lotto = insertionSort(lotto);
		Printer(lotto);
		int EqualWinningNumbersCounter = checkWinningNumbers(lotto, createQuerry());
		cout << "Lotonuzda " << EqualWinningNumbersCounter << " sayý tutturdunuz !" << endl;
		system("pause");
	} while (btn != 1);
	return 0;
  }
