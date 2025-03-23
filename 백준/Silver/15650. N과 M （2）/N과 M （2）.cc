#include <iostream>
#define MAX 9 

int N, M;          
int sequence[MAX]; 
bool visited[MAX]; 

void dfs(int index, int cnt);

int main() {
  std::cin >> N >> M;
  dfs(1, 0);
  return 0;
}

void dfs(int index, int cnt) {
  if (cnt == M) {
    for (int iter = 0; iter < M; iter++) std::cout << sequence[iter] << ' ';
    std::cout << '\n';
    return;
  } else {
    for (int iter = index; iter <= N; iter++) {
      if (visited[iter] == false) {
        visited[iter] = true;
        sequence[cnt] = iter;
        dfs(iter + 1, cnt + 1);
        visited[iter] = false;
      }
    }
  }
}