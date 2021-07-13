#include <iostream>
using namespace std;
typedef pair<string, int> P;

int main()
{
    string str;
    int page, ctr = 0;
    vector<P> v_data;

    while (cin >> str >> page) {
    v_data.push_back(P(str, page));
    ctr++;
    }

    sort(v_data.begin(), v_data.end());
    for (int i = 0; i < ctr; i++) {
    if (i == 0) {
        cout << v_data[i].first << endl;
        cout << v_data[i].second;
        continue;
    }

    if (v_data[i].first == v_data[i-1].first && v_data[i].second!=v_data[i-1].second)
        {
        cout << ' ' << v_data[i].second;
        continue;
    } else {
            cout << endl;
        }
    cout << v_data[i].first << endl;
    cout << v_data[i].second;
    }
    puts("");
    return 0;
}
