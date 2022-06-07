#include<iostream>
#include<climits>
#include<algorithm>
#include<math.h>
using namespace std;

bool canplacecows(long long int arr[], long long int n , long long int cows, long long int minsep) {
	long long int lastcow = arr[0];
	long long int cnt = 1;
	for (long long int i = 1; i < n; i++) {
		if (arr[i] - lastcow >= minsep) {
			cnt++;
			lastcow = arr[i];
			if (cnt == cows) {
				return true;
			}
		}
	}
	return false;
}


int main() {
	long long int n; // no of stalls
	long long int cows;
	cin >> n >> cows;
	long long int arr[100000];

	for (long long int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr,arr+n);//sort the array
	
	long long int start = arr[0];
	long long int end = (arr[n - 1] - arr[0]);
	long long int ans = 0;
	while (start <= end) {
		long long int mid = (start + end) / 2;
		bool cowsrakhpaye = canplacecows(arr, n, cows, mid) ;
		if (cowsrakhpaye) {
			ans = mid;
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}

	}
    cout<<ans;
	

	return 0;
}