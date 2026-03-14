#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m = 0, n = 0;
    if (!(cin >> m >> n)) return 0;

    unordered_map<string, int> name_to_id;
    vector<string> id_to_name(m + 1);      

    for (int i = 1; i <= m; i++) {
        string name;
        if (!(cin >> name)) return 0;

        name_to_id[name] = i;
        id_to_name[i] = name;
    }

    for (int i = 0; i < n; i++) {
        string query;
        if (!(cin >> query)) return 0;

        if (isdigit(query[0])) {
            int id = stoi(query);
            cout << id_to_name[id] << "\n";
        }
        else {
            cout << name_to_id[query] << "\n";
        }
    }

    return 0;
}