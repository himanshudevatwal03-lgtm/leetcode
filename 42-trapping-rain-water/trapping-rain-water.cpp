class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        vector<int> left(n), right(n);

        int mx = 0;
        for (int i = 0; i < n; i++) {
            left[i] = mx;
            mx = max(mx, height[i]);
        }

        mx = 0;
        for (int i = n - 1; i >= 0; i--) {
            right[i] = mx;
            mx = max(mx, height[i]);
        }

        int water = 0;
        for (int i = 0; i < n; i++) {
            int level = min(left[i], right[i]);
            if (level > height[i]) {
                water += level - height[i];
            }
        }

        return water;
    }
};