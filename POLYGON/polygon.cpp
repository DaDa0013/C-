#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Point {

public:
	int x;
	int y;
	void set_point(int a, int b) {
		x = a;
		y = b;
	}

	int X_point() {
		return x;
	}
	int Y_point() {
		return y;
	}
};

int ccw(Point P1, Point P2, Point P3) {//벡터의 외적값을 계산하는 함수
	int S;
	S = (P2.x - P1.x) * (P3.y - P1.y) - (P2.y - P1.y) * (P3.x - P1.x);
	if (S < 0)
		return -1;
	else if (S == 0)
		return 0;
	else
		return 1;
}

float dist(Point p, Point q)
{
	return sqrt((p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y));
}

class Polygon {

public:
	vector<Point> save_point;
	int count_point(vector<Point> save) {//오목점 개수
		int number;
		int count = 0;
		int n = save.size();
		for (int i = 0; i < n - 2; i++) {
			number = ccw(save[i], save[i + 1], save[i + 2]);
			if (number < 0)
				count++;
		}
		if (ccw(save[n - 2], save[n - 1], save[0]) == -1)
			count++;

		if (ccw(save[n - 1], save[0], save[1]) == -1)
			count++;

		return count;
	}

	float perimeter(vector<Point> save) {//다각형 길이 반환
		float length = 0;
		int n = save.size();

		for (int i = 0; i < n - 1; i++) {
			length += dist(save[i], save[i + 1]);
		}
		length += dist(save[n - 1], save[0]);
		return length;
	}

	float extent(vector<Point> save) {//다각형 면적
		int n = save.size();
		float sum = 0;

		for (int i = 0; i < n - 1; i++) {
			sum += save[i].x * save[i + 1].y;
		}

		sum += save[n - 1].x * save[0].y;

		for (int i = 0; i < n - 1; i++) {
			sum -= save[i + 1].x * save[i].y;
		}

		sum -= save[0].x * save[n - 1].y;

		if (sum < 0)
			sum = -sum;
		sum = sum / 2;

		return sum;
	}
};

int main() {
	int n;//점 개수
	cin >> n;
	Point p;
	Polygon f;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		p.set_point(x, y);
		f.save_point.push_back(p);
	}
	cout << fixed;
	cout.precision(1);
	cout << f.count_point(f.save_point) << endl;
	cout << f.perimeter(f.save_point) << endl;
	cout << f.extent(f.save_point) << endl;
	return 0;
}
