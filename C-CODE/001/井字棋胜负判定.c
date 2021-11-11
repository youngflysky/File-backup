#include <stdio.h>

int main() {
	const int size = 3;
	int  board[size][size];
	int i, j;
	int result = -1; //result=-1 表示没有人赢；0表示O赢；1表示X赢

	//读入井字棋矩阵；
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			scanf("%d", &board[i][j]);
		}
	}

	//逐行检查/逐列检查
	int Rnumfo, Rnumfx, Cnumfo, Cnumfx;
	for (i = 0; i < size && result == -1; i++) {
		Rnumfo = Rnumfx = Cnumfo = Cnumfx = 0;
		for (j = 0; j < size; j++) {
			//行累计
			if (board[i][j] == 0) {
				Rnumfo++;
			} else {
				Rnumfx++;
			}
			//列累计
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

	//对角线检查
	int numfo1 = 0, numfx1 = 0, numfo2 = 0, numfx2 = 0;
	for (i = 0; i < size && result == -1; i++) {
		//主对角线
		if (board[i][i] == 0) {
			numfo1++;
		} else {
			numfx1++;
		}
		//副对角线
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


	//输出结果：
	if (result == -1) {
		printf("平局！\n");
	} else if (result == 0) {
		printf("O赢！\n");
	} else {
		printf("X赢! \n");
	}
	
	return 0;
}