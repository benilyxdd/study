#include <iostream>
#include <map>
#include <queue>
#include <vector>
#include <set>
using namespace std;

#define ll long long
const int max_intersections = (int)1e5+5, max_car = (int)1e3+3, max_run_time = (int)1e4+4;
int run_time, no_of_intersections, no_of_streets, no_of_cars, bonus;

//tuple<where end, go time, street name>;
vector<tuple<int, int, string>> possible[max_intersections]; /*adj. list to check possible way*/
map<string, queue<int>> route_queue; /*real-time queue update of every road*/
queue<string> car[max_car]; /*where the cars go*/
set<string> road; /*road.*/

void input() {
	cin >> run_time >> no_of_intersections, no_of_streets, no_of_cars, bonus;
	//street;
	for (int i = 0; i < no_of_streets; i++) {
		int inter_start, inter_end, start_to_end_time;
		string name;
		cin >> inter_start >> inter_end, name, start_to_end_time;

		queue<int> temp; /*empty queue*/
		route_queue[name] = temp; /*init every route*/

		possible[inter_start].push_back({inter_end, start_to_end_time, name}); /*set possible path to adj. list*/
		road.insert(name);
	}
	//cars;
	for (int i = 0; i < no_of_cars; i++) {
		int no_of_streets_in_path;
		cin >> no_of_streets_in_path;
		for (int j = 0; j < no_of_streets_in_path; j++) {
			string path;
			cin >> path;
			car[i].push(path); /*save the path of every car*/
			if (j == 0) { /*car at the very first place*/
				route_queue[path].push(i+1); /*which car*/
			}
		}
	}
}

int car_in_time[max_car][max_run_time]; 



void solve() {

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	input(); /*data input only*/
	solve();
	return 0;
}




//output format
//A[int](how many road you want to schedule) << '\n';
//for every A:
//	B[int](which intersection to schedule[the ID]) << '\n';
//	C[int](how many light there[from which street to this intersection]) << '\n';
//	for every C:
//		D[string](street_name) << ' ' << E[int](how long will there be a green light) << '\n';
//	


//score
//each car = max(0, time_required - time_used) + bouns(if time_required >= time_used);
