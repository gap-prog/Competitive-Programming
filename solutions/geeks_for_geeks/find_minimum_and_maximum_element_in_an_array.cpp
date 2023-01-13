// GeeksForGeeks Problem Link: https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

/*
Details
-------
STRATEGY: complete search
I/O: problem provided
APPROACH: set a minimum and maximum value; iterate through the array to see if an element is greater than the maximum or less than the minimum.
*/

pair<long long, long long> getMinMax(long long a[], int n) {
    ll mx = -1, mn = 10e12;
    for (int i = 0; i < n; ++i) {
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    return make_pair(mn, mx);
}
