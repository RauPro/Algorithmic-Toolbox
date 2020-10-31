#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
typedef long int li;
typedef vector<int> vi;
typedef vector<ll> vl;
struct Segment {
    int start, end;
};

bool sortFunction(Segment i, Segment j) { return (i.end < j.end); }

vi optimal_points(vector <Segment> &segments) {

    sort(segments.begin(), segments.end(), sortFunction);

    vi points;
    int point = segments[0].end;
    points.push_back(point);

    for (int i = 1; i < segments.size(); ++i) {
        if (point < segments[i].start || point > segments[i].end) {
            point = segments[i].end;
            points.push_back(point);
        }
    }
    return points;
}

int main() {
	Fast
    int n;
    cin >> n;
    vector <Segment> segments(n);
    for (size_t i = 0; i < segments.size(); ++i) {
        cin >> segments[i].start >> segments[i].end;
    }
    vector<int> points = optimal_points(segments);
    cout << points.size() << endl;
    for (int i = 0; i < points.size(); ++i) {
        cout << points[i] << " ";
    }
}
