class Solution {
public:
    int findMin(vector<int> &nums) {
      int mid = nums.size() / 2; 
      int minimum_element = INT_MAX; 
      while (mid != 0 && mid != nums.size()-1){
        if (nums[mid] < nums[mid - 1] && nums[mid] < nums[mid + 1]){
            minimum_element = nums[mid];
            break;  
        }
        else if (nums[mid] > nums [mid - 1] && nums[mid] < nums[mid + 1]){
            mid = mid - 1; 
        }
        else if (nums[mid] < nums [mid - 1] && nums[mid] > nums[mid + 1]){
            mid = mid + 1; 
        }
        else if (nums[mid] > nums [mid - 1] && nums[mid] > nums[mid + 1]){
            if ( nums [mid - 1] < nums[mid + 1]) {
                mid = mid - 1;
            }
            else{
                mid = mid + 1; 
            } 
        }
    }

        if ( mid == 0 || mid == nums.size()-1){
            return min(nums[0], nums[nums.size()-1]); 
        }
       

      return minimum_element;
    }

};


// Brute force easy just traverse through the array via loop. 

// int minimum = INT_MAX; 
//         for (auto& i: nums){
//             minimum = min(minimum, i); 
//         }
//         return minimum; 