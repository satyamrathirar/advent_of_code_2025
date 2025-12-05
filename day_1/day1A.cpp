#include<bits/stdc++.h>
using namespace std;
int main() {
    int curr = 50;
    int ans = 0;
    ifstream file("day1.txt");

    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string line;

    while (getline(file, line)) {
        int val = stoi(line.substr(1));
        if(line[0] == 'L'){
            curr = (curr - val) % 100;
            if (curr == 0) ans++;
        }
        else{
            curr = (curr + val) % 100;
            if (curr == 0) ans++;
        }
    }
    file.close();
    cout << ans << endl;
    return 0;
}