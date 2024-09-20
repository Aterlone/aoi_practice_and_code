#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n, m;

    cin >> n >> m;

    vector<int> hotelSpace;
    int guests;
    int num;
    int c;

    while(cin >> num) {
        hotelSpace.push_back(num);
        ++c;

        if (c == n){
            cin >> num;
            hotelSpace.push_back(num);

            cout << "break" << endl;
            break;
        }
    }

    while(cin >> guests){
        for (int j = 0; j < n; ++j) {
            //cout << guests << " " << hotelSpace[j] << endl;
            if (guests <= hotelSpace[j]) {
                hotelSpace[j] -= guests;
                cout << j << endl;
                break; 
            }
            else {
            }
        }
    }

    return 0;
}