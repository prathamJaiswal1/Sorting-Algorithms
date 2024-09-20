#include<bits/stdc++.h>
using namespace std;

int partition(int s, int e, vector<int>& v) {
    int pivot = v[s];
    int cnt = 0;

    // Count how many elements are <= pivot
    for (int i = s + 1; i <= e; i++) {
        if (v[i] <= pivot) {
            cnt++;
        }
    }

    // Place the pivot in its correct position
    int pi = s + cnt;
    swap(v[pi], v[s]);

    // Partition the array around the pivot
    int i = s, j = e;
    while (i < pi && j > pi) {
        // Move i forward to find elements greater than pivot
        while (i < pi && v[i] <= pivot) {
            i++;
        }
        // Move j backward to find elements smaller than pivot
        while (j > pi && v[j] > pivot) {
            j--;
        }
        // Swap elements if needed
        if (i < pi && j > pi) {
            swap(v[i++], v[j--]);
        }
    }

    return pi;
}

void quicksort(int s, int e, vector<int>& v) {
    if (s >= e) return;
    int p = partition(s, e, v);
    quicksort(s, p - 1, v);
    quicksort(p + 1, e, v);
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    quicksort(0, n - 1, v);
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    solve();
    return 0;
}
