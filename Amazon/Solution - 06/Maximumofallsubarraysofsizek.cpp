#include <bits/stdc++.h>
using namespace std;

class Solution06{
public:
	
	vector <int> max_of_subarrays(int *arr, int n, int k){
		
		int i = 0, j = 0;
		vector<int> ans;
		list<int> l;
		while (j < n){
			while (!l.empty() && l.back() < arr[j]){
				l.pop_back();
			}

			l.push_back(arr[j]);

			if (j - i + 1 < k) j++;
			else if (j - i + 1 == k){
				ans.push_back(l.front());
				if (l.front() == arr[i]) l.pop_front();
				i++;
				j++;
			}
		}
		return ans;
	}
};



int main() {

	int t;
	cin >> t;

	while (t--) {

		int n, k;
		cin >> n >> k;

		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		Solution06 ob;
		vector <int> res = ob.max_of_subarrays(arr, n, k);
		for (int i = 0; i < res.size (); i++)
			cout << res[i] << " ";
		cout << endl;

	}

	return 0;
}  