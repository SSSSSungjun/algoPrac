#include<iostream>
#include<queue>
#include <utility>

using namespace std;
// �̿ϼ��� test�� ���ε� �غ����� git��
int area_bae(int (*field)[50],int (*selected)[50], int x, int y,int f_x,int f_y) {
	int worm = 0; //�ֹ��� ��

	queue<pair<int, int>> q;
	q.push({ f_x,f_y });
	
	return worm;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	
	int Tcase;
	cin >> Tcase; //���̽� Ƚ��
	int* worm = new int[Tcase]; //������ ���� ���̽� ���� ����

	int x, y, bea_num;// �࿭ ���߼�
	int xpos, ypos; // ���� ��ǥ

	for (int i = 0; i < Tcase; i++) {
		int field[50][50]; //�ӽ� field
		int selected[50][50];//�ӽ� selected
		int f_x=0 , f_y=0;

		cin >> x >> y >> bea_num;
		for (int k = 0; k < bea_num; k++) {
			cin >> xpos >> ypos;

			if (k == 0) {
				f_x = xpos;
				f_y = ypos;
			}
			field[xpos][ypos] = 1;
			worm[i] = area_bae(field,selected, x, y,f_x,f_y);
		}
	}

	for (int i = 0; i < Tcase; i++) {
		cout << worm[i] << endl;
	}
	return 0;
}