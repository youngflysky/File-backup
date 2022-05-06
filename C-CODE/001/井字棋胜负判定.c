#include <stdio.h>

int main() {
	const int size = 3;
	int  board[size][size];
	int i, j;
	int result = -1; //result=-1 ��ʾû����Ӯ��0��ʾOӮ��1��ʾXӮ

	//���뾮�������
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			scanf("%d", &board[i][j]);
		}
	}

	//���м��/���м��
	int Rnumfo, Rnumfx, Cnumfo, Cnumfx;
	for (i = 0; i < size && result == -1; i++) {
		Rnumfo = Rnumfx = Cnumfo = Cnumfx = 0;
		for (j = 0; j < size; j++) {
			//���ۼ�
			if (board[i][j] == 0) {
				Rnumfo++;
			} else {
				Rnumfx++;
			}
			//���ۼ�
			if (board[j][i] == 0) {
				Cnumfo++;
			} else {
				Cnumfx++;
			}

			if (Rnumfo == size || Cnumfo == size) {
				result = 0;
			} else if (Rnumfx == size || Cnumfx == size) {
				result = 1;
			}
		}

	}

	//�Խ��߼��
	int numfo1 = 0, numfx1 = 0, numfo2 = 0, numfx2 = 0;
	for (i = 0; i < size && result == -1; i++) {
		//���Խ���
		if (board[i][i] == 0) {
			numfo1++;
		} else {
			numfx1++;
		}
		//���Խ���
		if (board[i][size - i + 1] == 0) {
			numfo2++;
		} else {
			numfx2++;
		}
	}
	if (numfo1 == size || numfo2 == size) {
		result = 0;
	} else if (numfx1 == size || numfx2 == size) {
		result = 1;
	}


	//��������
	if (result == -1) {
		printf("ƽ�֣�\n");
	} else if (result == 0) {
		printf("OӮ��\n");
	} else {
		printf("XӮ! \n");
	}
	
	return 0;
}