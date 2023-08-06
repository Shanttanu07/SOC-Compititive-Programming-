// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> a;
//     int i;
//     cin>>i;
//     while(i!=0)
//     {
//         a.push_back(i);
//         cin>>i;
//     }
//     vector<int> b;
//     cin>>i;
//     while(i!=0)
//     {
//         b.push_back(i);
//         cin>>i;
//     }
//     for(int i=0;i<b.size();i++)
//     {
//         for(int k=0;k<a.size();k++)
//         {
//             if(b[i]==a[k])
//             {
//                 cout<<k+1<<" ";
//                 break;
//             }
//         }
//     }
// }
#include <iostream>
#include <vector>
#include <unordered_map>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

vector<int> data_list;
unordered_map<int, int> step_counts;
int path_number = 1;
bool found_path = false; // Flag to indicate if a valid path is found

bool isValidPosition(int x) {
    return find(data_list.begin(), data_list.end(), x) != data_list.end();
}

void findAllPaths(int current_position, int end, vector<int>& path) {
    if (current_position == end) {
        cout << "Path " << path_number << " found: ";
        for (int step : path) {
            cout << step << " ";
        }
        cout << endl;
        path_number++;
        found_path = true; // Set the flag to true since we found a valid path
        return;
    }

    for (int step : {-1953125, -390625, -78125, -15625, -3125, -625, -125, -25, -5, -1, 1, 5, 25, 125, 625, 3125, 15625, 78125, 390625, 1953125}) {
        int new_position = current_position + step;
        if (isValidPosition(new_position) && step_counts[step] % 2 == 0) {
            path.push_back(new_position);
            step_counts[step]++;
            findAllPaths(new_position, end, path);
            path.pop_back();
            step_counts[step]--;
        }
    }
}

int main() {
    ifstream inputFile("C:\\Users\\Shanttanu\\Downloads\\README2.txt");
    if (!inputFile) {
        cerr << "Error: Unable to open the file." << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        istringstream iss(line);
        int value;
        while (iss >> value) {
            data_list.push_back(value);
        }
    }
    inputFile.close();

    int start_point = 3906253;
    int end_point = 9765625;
    vector<int> path = {start_point};
    findAllPaths(start_point, end_point, path);

    if (!found_path) {
        cout << "No paths found from " << start_point << " to " << end_point << endl;
    }

    return 0;
}

