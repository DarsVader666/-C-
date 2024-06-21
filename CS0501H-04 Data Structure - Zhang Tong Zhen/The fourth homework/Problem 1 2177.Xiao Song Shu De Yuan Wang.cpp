#include<iostream>
using namespace std;
class UnionFind {
private:
        int* parent;
        int* size;
public:
        UnionFind(int n) {
                parent = new int[n + 1];
                size = new int[n + 1];
                for (int i = 0; i <= n; i++) {
                        parent[i] = i;
                        size[i] = 1;
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
                        size[x] += size[y];
                }
        }
        void initialize(const int &n) {
                int p, q;
                for (int i = 1; i <= n; i++) {
                        cin >> p >> q;
                        parent[q] = p;
                }
        }
        int getSize(int x) {
                return size[find(x)];
        }
};
int main() {
        int m, n;
        cin >> n >> m;
        UnionFind uf(n);
        int a, b;
        for (int i = 1; i <= m; i++) {
                cin >> a>>b;
                uf.unite(a, b);
        }
        int maxSize = -114514;
        for (int i = 1; i <= n; i++) {
                if (uf.getSize(i) > maxSize) maxSize = uf.getSize(i);
        }
        cout << maxSize;
        system("pause");
        return 0;
}