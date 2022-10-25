#include <cstdlib>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
#include "solution.h"


class Runner
{
    int t;
    vector<vector<int>> arr;
    vector<int> kList;

public:
    void takeInput()
    {
        cin >> t;

        arr.resize(t);
        kList.resize(t);

        for (int c = 0; c < t; c++)
        {
            int n;
            cin >> n;
            cin >> kList[c];
            arr[c].resize(n);
            for (int i = 0; i < n; i++)
            {
                cin >> arr[c][i];
            }
        }
    }

    void execute()
    {
        vector<vector<int>> arrCopy = arr;
        vector<int>kListCopy = kList;

        for (int i = 0; i < t; i++)
        {
            int ans = findLargestMinDistance(arrCopy[i],kListCopy[i]);
        }
    }

    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {
            int ans = findLargestMinDistance(arr[i],kList[i]);

            cout << ans << "\n";
        }
    }
};

int main()
{
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}