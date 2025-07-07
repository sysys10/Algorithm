#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;

struct State {
    vector<int> arr;
    int cost;
    
    bool operator>(const State& other) const {
        return cost > other.cost;
    }
};

string vectorToString(const vector<int>& arr) {
    string result = "";
    for (int x : arr) {
        result += to_string(x) + ",";
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int M;
    cin >> M;
    
    vector<tuple<int, int, int>> operations(M);
    for (int i = 0; i < M; i++) {
        int l, r, c;
        cin >> l >> r >> c;
        operations[i] = make_tuple(l-1, r-1, c); // 0-indexed로 변환
    }
    
    // 목표 상태 (정렬된 배열)
    vector<int> target = A;
    sort(target.begin(), target.end());
    string targetStr = vectorToString(target);
    
    // 이미 정렬된 경우
    if (A == target) {
        cout << 0 << endl;
        return 0;
    }
    
    // 다익스트라 알고리즘
    priority_queue<State, vector<State>, greater<State>> pq;
    unordered_map<string, int> dist;
    
    string startStr = vectorToString(A);
    pq.push({A, 0});
    dist[startStr] = 0;
    
    while (!pq.empty()) {
        State current = pq.top();
        pq.pop();
        
        string currentStr = vectorToString(current.arr);
        
        // 이미 더 좋은 경로가 있는 경우
        if (dist.count(currentStr) && dist[currentStr] < current.cost) {
            continue;
        }
        
        // 목표 상태 도달
        if (currentStr == targetStr) {
            cout << current.cost << endl;
            return 0;
        }
        
        // 모든 연산 시도
        for (auto& op : operations) {
            int l = get<0>(op);
            int r = get<1>(op);
            int c = get<2>(op);
            
            vector<int> newArr = current.arr;
            swap(newArr[l], newArr[r]);
            
            string newStr = vectorToString(newArr);
            int newCost = current.cost + c;
            
            if (!dist.count(newStr) || dist[newStr] > newCost) {
                dist[newStr] = newCost;
                pq.push({newArr, newCost});
            }
        }
    }
    
    cout << -1 << endl;
    return 0;
}