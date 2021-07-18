#include <iostream>
using namespace std;

class Family {
private:
	int idArray[1000];
	int parent[1000];
public:
	int Find_id(int p) {
		int n;
		for (int i = 0; i < 1000; i++) {
			if (idArray[i] == p) {
				n = i;
				break;
			}
		}
		return n;
	}

	int relation(int p1, int p2) {
		int a, b;
		a = Find_id(p1);
		b = Find_id(p2);
		int n = a;
		if (a == b)
			return 0;

		for (int i = 0; i < 1000; i++) {
			if (parent[n] != -1) {
				if (parent[n] != b)
					n = parent[n];
				else
					return 1;
			}
		}
		for (int i = 0; i < 1000; i++) {
			if (parent[b] != -1) {
				if (parent[b] != a)
					b = parent[b];
				else
					return 2;
			}
		}
		return -1;
	}
	void clear() {
		for (int i = 0; i < 1000; i++)
			parent[i] = -1;
	}

	void get_idArray(int number) {
		int a;
		for (int i = 0; i < number; i++)
			cin >> a >> idArray[a];
	}
	void get_parent(int n) {
		int a, b;
		for (int i = 0; i < n; i++) {
			cin >> a >> b;
			parent[a] = b;
		}
	}
};
int main() {
	int number, n;
	int p1, p2;
	Family f;
	cin >> number >> n;
	f.get_idArray(number);
	f.clear();
	f.get_parent(n);
	cin >> p1 >> p2;

	cout << f.relation(p1, p2);
	return 0;
}
