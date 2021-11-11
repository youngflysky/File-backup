
/*********************************************************************
	程序名:
	版权:
	作者:
	日期: 2021-12-04 18:20
	说明:

	Have Fun with Numbers
	Notice that the number 123456789 is a 9-digit number consisting
exactly the numbersfrom 1 to 9, with no duplication. Double it we
will obtain 246913578, which happens to be another 9-digit number
consisting exactly the numbers from 1 to 9,only in a different
permutation. Check to see the result if we double it again!
	Now you are suppose to check if there are more numbers with this
property. That is, double a given number with k digits, you are to
tell if the resulting number consists of only a permutation of the
digits in the original number.
*********************************************************************/


#include <iostream>
#include <stdlib.h>
using namespace std;

void f(int[], char, int);
int h(int arr1[], int arr2[], int len1, int len2, int t);
int main() {
	char ch;
	int a[21] = { 0 };
	int i = 0;

	do {
		cin.get(ch);

		if (ch == '\n') {
			break;
		}

		f(a, ch, i);
		i++;
	} while (1);

	int count1;
	count1 = i;

	int A[21] = { 0 };

	for (i = count1 - 1; i >= 0; i--) {
		A[count1 - 1 - i] = a[i];
	}

	int B[21] = { 0 };
	int count2 = 0;

	for (i = 0; i < count1; i++) {
		int temp;
		temp = A[i] * 2 + B[i];

		if (temp <= 9) {
			B[i] = temp;

			if (i == count1 - 1) {
				count2 = count1;
			}
		}
		else {
			B[i] = temp % 10;
			B[i + 1] += temp / 10;

			if (i == count1 - 1) {
				count2 = count1 + 1;
			}
		}
	}

	int t = 0;
	int flag = 1;

	for (t = 0; t < 10; t++) {
		flag = h(A, B, count1, count2, t);

		if (flag == 0) {
			break;
		}
	}


	if (flag == 1) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}

	cout << endl;

	for (i = count2 - 1; i >= 0; i--) {
		cout << B[i];
	}

	cout << endl;
	system("pause");

	return 0;
}

void f(int arr[], char ch, int i) {
	switch (ch) {
	case '0':
		arr[i] = 0;
		break;

	case '1':
		arr[i] = 1;
		break;

	case '2':
		arr[i] = 2;
		break;

	case '3':
		arr[i] = 3;
		break;

	case '4':
		arr[i] = 4;
		break;

	case '5':
		arr[i] = 5;
		break;

	case '6':
		arr[i] = 6;
		break;

	case '7':
		arr[i] = 7;
		break;

	case '8':
		arr[i] = 8;
		break;

	case '9':
		arr[i] = 9;
		break;
	}
}

int h(int arr1[], int arr2[], int len1, int len2, int t) {
	int flag = 0;
	int i = 0;
	int count1 = 0, count2 = 0;

	for (i = 0; i < len1; i++) {
		if (arr1[i] == t) {
			count1++;
		}
	}

	for (i = 0; i < len2; i++) {
		if (arr2[i] == t) {
			count2++;
		}
	}

	if (count1 == count2) {
		flag = 1;
	}

	return flag;
}