#include<iostream>
#include<vector>
using namespace std;
#define INF 987654321

int m, n;
long long dist[502] = { 0, };
vector <pair<int,int>> bus[502];

int main() {
	//1번 도시 제외하고는 모두 infinity로 거리 설정
	for (int i = 2; i < 502; i++) dist[i] = INF;

	bool negative_cycle = false;

	cin >> n >> m;
	//그래프 입력받음
	while (m--) {
		long long a, b, c;
		cin >> a >> b >> c;
		bus[a].push_back({b, c});
	}

	for (int i = 1; i <= n; i++) {
		for (int start = 1; start <= n; start++) {
			//연결되지 않은 경우
			if (dist[start] == INF)continue;
			
			//연결된 경우
			for (int idx = 0; idx < bus[start].size(); idx++) {
				int end = bus[start][idx].first;
				int cost = bus[start][idx].second;

				if (dist[end] > dist[start] + cost) {
					//negative cycle 존재
					if (i == n) {
						negative_cycle = true;
					}
					//거리 갱신
					dist[end] = dist[start] + cost;
				}
			}
		}
	}

	if (negative_cycle) cout << -1<<'\n';
	else {
		for (int i = 2; i <= n; i++) {
			if (dist[i] == INF) cout << -1 <<'\n';
			else cout << dist[i] << '\n';
		}
	}

}
