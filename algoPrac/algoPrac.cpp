#include<iostream>
#include<queue>
#include <utility>

using namespace std;
// 미완성임 test로 업로드 해보는중 git에
int area_bae(int (*field)[50],int (*selected)[50], int x, int y,int f_x,int f_y) {
	int worm = 0; //애벌래 수

	queue<pair<int, int>> q;
	q.push({ f_x,f_y });
	
	return worm;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	
	int Tcase;
	cin >> Tcase; //케이스 횟수
	int* worm = new int[Tcase]; //지렁이 갯수 케이스 별로 저장

	int x, y, bea_num;// 행열 배추수
	int xpos, ypos; // 배추 좌표

	for (int i = 0; i < Tcase; i++) {
		int field[50][50]; //임시 field
		int selected[50][50];//임시 selected
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