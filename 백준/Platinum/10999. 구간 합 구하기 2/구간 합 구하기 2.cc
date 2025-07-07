#include <iostream>
#include <vector>
using namespace std;

class LazySegmentTree {
private:
    vector<long long> tree;
    vector<long long> lazy;
    int n;
    
    void build(vector<long long>& arr, int node, int start, int end) {
        if (start == end) {
            tree[node] = arr[start];
        } else {
            int mid = (start + end) / 2;
            build(arr, 2*node, start, mid);
            build(arr, 2*node+1, mid+1, end);
            tree[node] = tree[2*node] + tree[2*node+1];
        }
    }
    
    void updateLazy(int node, int start, int end) {
        if (lazy[node] != 0) {
            tree[node] += lazy[node] * (end - start + 1);
            if (start != end) {
                lazy[2*node] += lazy[node];
                lazy[2*node+1] += lazy[node];
            }
            lazy[node] = 0;
        }
    }
    
    void updateRange(int node, int start, int end, int l, int r, long long val) {
        updateLazy(node, start, end);
        if (start > r || end < l) return;
        
        if (start >= l && end <= r) {
            tree[node] += val * (end - start + 1);
            if (start != end) {
                lazy[2*node] += val;
                lazy[2*node+1] += val;
            }
            return;
        }
        
        int mid = (start + end) / 2;
        updateRange(2*node, start, mid, l, r, val);
        updateRange(2*node+1, mid+1, end, l, r, val);
        
        updateLazy(2*node, start, mid);
        updateLazy(2*node+1, mid+1, end);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
    
    long long queryRange(int node, int start, int end, int l, int r) {
        if (start > r || end < l) return 0;
        
        updateLazy(node, start, end);
        
        if (start >= l && end <= r) {
            return tree[node];
        }
        
        int mid = (start + end) / 2;
        long long p1 = queryRange(2*node, start, mid, l, r);
        long long p2 = queryRange(2*node+1, mid+1, end, l, r);
        return p1 + p2;
    }
    
public:
    LazySegmentTree(vector<long long>& arr) {
        n = arr.size();
        tree.resize(4 * n);
        lazy.resize(4 * n, 0);
        build(arr, 1, 0, n-1);
    }
    
    void update(int l, int r, long long val) {
        updateRange(1, 0, n-1, l, r, val);
    }
    
    long long query(int l, int r) {
        return queryRange(1, 0, n-1, l, r);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M, K;
    cin >> N >> M >> K;
    
    vector<long long> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    LazySegmentTree lst(arr);
    
    for (int i = 0; i < M + K; i++) {
        int a;
        cin >> a;
        
        if (a == 1) {
            int b, c;
            long long d;
            cin >> b >> c >> d;
            lst.update(b-1, c-1, d); // 1-indexed to 0-indexed
        } else {
            int b, c;
            cin >> b >> c;
            cout << lst.query(b-1, c-1) << "\n"; // 1-indexed to 0-indexed
        }
    }
    
    return 0;
}