#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

//next_permutation 오름차순 배열
//makePermytaion 3p3 재귀함수로 만들기


int main()
{
	// A : 65
	/*char a = 'a'; // a : 97
	cout << (int)a << '\n';// 97
	cout << (int)a - 97 << "\n"; // 0
	cout << (int)a - 'a' << "\n"; // 0 암묵적 형변환(implicit)
	cout << a << endl;

	for (int i = 1; i <= 5; i++)v.push_back(i);

	for (int i = 0; i < 5; i++) {
		cout << i << "번째 요소 : " << *(v.begin() + i) << "\n";
		cout << &*(v.begin() + i) << '\n';
	}
	//cout << &*(v.rbegin())<<endl;
	//cout << &*(v.rend()) << endl;

	for (auto it = v.begin(); it != v.end(); it++) {
		cout << *it << ' ';
	}

	std::cout << "\n";
	for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++) {
		cout << *it << ' ';
	}

	cout << '\n';
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << ' ';
	}

	auto it = v.begin();

	advance(it, 3);
	cout << '\n';
	cout << *it << '\n';*/
	// cout << v.begin() << '\n'; //에러

	//조합
	/*int n = 5;
	int k = 3;
	int a[5] = { 1, 2, 3, 4, 5 };
	int main() {
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				for (int k = j + 1; k < n; k++) {
					cout << a[i] << " " << a[j] << " " << a[k] << '\n';
				}
			}
		}
		return 0;
	}*/

	/*int n = 5, k = 3;
	void print(vector<int> b) {
		for (int i : b)cout << i << " ";
		cout << '\n';
	}


	void combi(int start, vector<int> b) {
		if (b.size() == k) {
			print(b);
			return;
		}
		for (int i = start + 1; i < n; i++) {
			b.push_back(i);
			combi(i, b);
			b.pop_back();
		}
		return;
	}

	int main() {
		vector<int> b;
		combi(-1, b);
		return 0;
	}*/

	/*vector<string> split(string input, string delimiter) {
		vector<string> ret;
		long long pos = 0;
		string token = "";
		while ((pos = input.find(delimiter)) != string::npos) {
			token = input.substr(0, pos);
			ret.push_back(token);
			input.erase(0, pos + delimiter.length());
		}
		ret.push_back(input);
		return ret;
	}


	int main() {
		string d = " ";
		string s = "손흥민 bts 봉준호 렛츠고";
		vector<string> a = split(s, d);
		for (string b : a) cout << b << "\n";
	}*/

	/*int a[3] = {1, 2, 3};
	int n = 3, r = 2; // r을 바꿔가면서 연습해보세요. :)
	void print() {
		for (int i = 0; i < r; i++) {
			cout << a[i] << " ";
		}
		cout << "\n";
	}

	void makePermutation(int n, int r, int depth) {
		if (r == depth) {
			print();
			return;
		}
		for (int i = depth; i < n; i++) {
			swap(a[i], a[depth]);

			makePermutation(n, r, depth + 1);

			swap(a[i], a[depth]);
		}
		return;
	}
	int main() {
		makePermutation(n, r, 0);


		return 0;
	}*/

	return 0;
}