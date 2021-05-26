#include<bits/stdc++.h>
int main() {
	int n; std::cin >> n; int ar[n]; for (int i = 0; i < n; i++) std::cin >> ar[i];
	for (int i = 0; i < (1 << n); i++) {
		for (int j = 0; j < n; j++) 
			if (i & (1 << j))
				std::cout << ar[j] << " ";
		std::cout << "\n";
	}
}
