#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int mid, int si, int li) {
    // Creating two temporary arrays
    int s1 = mid - si + 1;
    int s2 = li - mid;

    int* a = new int[s1];
    int* b = new int[s2];

    // Copying elements into a[] and b[]
    for (int i = 0; i < s1; i++) {
        a[i] = arr[si + i];
    }
    for (int i = 0; i < s2; i++) {
        b[i] = arr[mid + 1 + i];
    }

    // Merging a[] and b[] into arr[]
    int i = 0, j = 0, k = si;
    while (i < s1 && j < s2) {
        if (a[i] <= b[j]) {
            arr[k++] = a[i++];
        } else {
            arr[k++] = b[j++];
        }
    }

    // Copy remaining elements
    while (i < s1) arr[k++] = a[i++];
    while (j < s2) arr[k++] = b[j++];

    delete[] a;
    delete[] b;
}

void mergeSort( vector<int>& arr, int si, int li ){
	
	if( si < li ){
		
		int mid = ( si + li ) / 2;
		
		mergeSort( arr, si, mid );
		mergeSort( arr, mid+1, li);
		
		merge( arr, mid, si, li );
	}
}


int main(){
	
	vector <int> arr = {12, 56, 16, 23, 89, 90};
	
	mergeSort( arr, 0, arr.size()-1 );
	
	for( auto i: arr)
		cout<< i<<" ";
	
	return 0;
}
// Output: 12 16 23 56 89 90