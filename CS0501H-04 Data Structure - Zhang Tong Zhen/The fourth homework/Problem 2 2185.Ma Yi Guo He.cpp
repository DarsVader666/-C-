#include<iostream>
using namespace std;
class UnionFind {
private:
        int* parent;
public:
        UnionFind(const int& n) {
                parent = new int[n + 3];
                for (int i = 0; i <= n+2; i++) {
                        parent[i] = i;
                }
        }
        int find(int x) {
                if(x!=parent[x]) {
                        parent[x] = find(parent[x]);
                }
                return parent[x];
        }
        void unite(int x,int y) {
                x = find(x);
                y = find(y);
                if (x != y) {
                        parent[y] = x;
                }
        }
        bool isConnected(const int& x, const int& y) {
                return find(x) == find(y);
        }
        bool canCross(int** coordinate, const int& w, const int& n,  const int& r) {
                int x1, x2, y1, y2;
                for (int i = 1; i <= n; i++) {
                        x1 = coordinate[i][0], y1 = coordinate[i][1];
                        for (int j = i + 1; j <= n; j++) {
                                x2 = coordinate[j][0], y2 = coordinate[j][1];
                                if ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) <= 4 * r * r) {
                                        unite(i, j);
                                }
                        }
                        if (y1 <= r) unite(n + 1, i);
                        if (w - y1 <= r) unite(n + 2, i);
                }
                return isConnected(n+1,n+2);
        }
};
int main() {
        int n, r, w;
        cin >> n >> r >> w;
        UnionFind uf(n);
        int** coordinate = new int* [n+1];
        for (int i = 1; i <= n; i++) {
                coordinate[i] = new int[2];
                cin >> coordinate[i][0] >> coordinate[i][1];
        }
       
        cout << uf.canCross(coordinate, w, n, r) ? 1 : 0;
        system("pause");
        return 0;
}