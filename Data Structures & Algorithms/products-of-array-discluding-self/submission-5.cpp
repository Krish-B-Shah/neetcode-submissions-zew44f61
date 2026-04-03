class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, 0);

    int zero_count = 0;
    int total_product = 1;

    for (int num : nums) {
        if (num == 0) {
            zero_count++;
        } else {
            total_product *= num;
        }
    }

    for (int i = 0; i < n; i++) {
        if (zero_count > 1) {
            // More than one zero => every product is 0
            result[i] = 0;
        } else if (zero_count == 1) {
            // Exactly one zero => only the zero index gets total_product
            result[i] = (nums[i] == 0) ? total_product : 0;
        } else {
            // No zeros => divide total_product by nums[i]
            result[i] = total_product / nums[i];
        }
    }

    return result;
}
};
