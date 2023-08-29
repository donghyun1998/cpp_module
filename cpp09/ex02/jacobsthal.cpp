#include <iostream>
#include <vector>

int jacobsthal(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

std::vector<int> jacobsthalSeries(int k) {
    std::vector<int> series;

    for (int i = 2; i <= k; ++i) {
        series.push_back(jacobsthal(i) - 1);
    }

    return series;
}

int main() {
    int k = 10;  // 예시: 1부터 10까지의 Jacobsthal 수열 따르는 수열 생성
    std::vector<int> result = jacobsthalSeries(k);

	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++) {

		}
	}

    return 0;
}
