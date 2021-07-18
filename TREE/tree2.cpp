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
		for (int i = 0; i < 1000; i++) {
			parent[i] = -1;
		}
	}

	int lca(int p1, int p2) {
		int a, b;
		a = Find_id(p1);
		b = Find_id(p2);
		int n = a;
		if (relation(p1, p2) == 0)
			return p1;
		else if (relation(p1, p2) == 1)
			return p2;
		else if (relation(p1, p2) == 2)
			return p1;
		else {
			while (b != -1) {
				while (n != -1) {
					if (n != b) {
						n = parent[n];
					}
					else
						return idArray[b];
				}
				n = a;
				b = parent[b];
			}
			return -1;
		}
	}
	int distance(int p1, int p2) {
		int a, b;
		int count = 1;
		int count1 = 0;
		int count2 = 0;
		a = Find_id(p1);
		b = Find_id(p2);
		int n = a;
		if (relation(p1, p2) == 0)
			return 0;
		else if (relation(p1, p2) == 1) {
			for (int i = 0; i < 1000; i++) {
				if (parent[n] != -1) {
					if (parent[n] != b) {
						n = parent[n];
						count++;
					}
					else
						return count;
				}
			}
		}
		else if (relation(p1, p2) == 2) {
			for (int i = 0; i < 1000; i++) {
				if (parent[b] != -1) {
					if (parent[b] != a) {
						b = parent[b];
						count++;
					}
					else
						return count;
				}
			}
		}
		else {
			if (lca(p1, p2) != -1) {
				for (int i = 0; i < 1000; i++) {
					if (a != lca(p1, p2)) {
						if (parent[a] != -1) {
							a = parent[a];
							count1++;
						}
					}
					else
						break;
				}
				for (int i = 0; i < 1000; i++) {
					if (b != lca(p1, p2)) {
						if (parent[b] != -1) {
							b = parent[b];
							count2++;
						}
					}
					else
						break;
				}
				return count1 + count2;
			}
			else
				return -1;
		}
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
	if (f.lca(p1, p2) == -1)
		cout << f.distance(p1, p2);
	else
		cout << f.lca(p1, p2) << " " << f.distance(p1, p2);
	return 0;
}
