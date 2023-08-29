#include<bits/stdc++.h>
using namespace std;

bool comp(pair<double, int>&p1, pair<double, int>&p2) {
    return p1.first > p2.first;
}

double fractionalKnapsack(int n, int w, int values[], int weight[]) {
    pair<double, int> a[n+1];
    for(int i=0; i<n; ++i) {
        double frac = (double)values[i] / (double)weight[i];
        a[i].first = frac;
        a[i].second = i;
    }
    sort(a, a+n, comp);

    // for(int i=0; i<n; ++i) {
    //     cout << a[i].first << " " << a[i].second << "\n";
    // }
    int currentWeight = 0;
    double totalAmount = 0.0;

    for(int i=0; i<n; ++i) {
        if(currentWeight + weight[a[i].second] <= w) {
            totalAmount += (double)values[a[i].second];
            currentWeight += weight[a[i].second];
        }
        else {
            double rem = w - currentWeight;
            if(rem > 0) {
                totalAmount += (double)a[i].first * 1.0 * rem;
            }
            break;
        }
    }

    return totalAmount;
}

int main() {
    int n, w;
    cin >> n >> w;
    int values[n+1], weight[n+1];

    for(int i=0; i<n; ++i)
        cin >> values[i];
    for(int i=0; i<n; ++i)
        cin >> weight[i];

    double ans = fractionalKnapsack(n, w, values, weight);

    cout << ans;

    return 0;
}