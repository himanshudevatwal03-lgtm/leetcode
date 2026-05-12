class Solution {
public:

    bool possible(vector<vector<int>>& tasks, int energy) {

        for (auto &t : tasks) {

            int actual = t[0];
            int minimum = t[1];

            if (energy < minimum)
                return false;

            energy -= actual;
        }

        return true;
    }

    int minimumEffort(vector<vector<int>>& tasks) {

        sort(tasks.begin(), tasks.end(),
            [](vector<int>& a, vector<int>& b) {
                return (a[1] - a[0]) > (b[1] - b[0]);
            });

        int l = 0, h = 0;

        for (auto &t : tasks) {
            h += t[1];
        }

        int ans = h;

        while (l <= h) {

            int mid = l + (h - l) / 2;

            if (possible(tasks, mid)) {
                ans = mid;
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return ans;
    }
};