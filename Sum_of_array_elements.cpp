class Solution{
public:
	int sum(int arr[], int n) {
		int sum = 0;
		for(int i=0; i<=n-1; i++){
			sum = sum + arr[i];
		}
		return sum;
	}

};
