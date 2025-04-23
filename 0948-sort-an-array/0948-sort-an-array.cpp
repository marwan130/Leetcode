class Solution {
public:
    int partition(vector<int>& nums, int low, int high) {
        //pick a random pivot
        int pivotIndex = low + rand() % (high - low + 1);
        swap(nums[pivotIndex], nums[high]);
        
        int pivot = nums[high];
        int i = low - 1; //pointer for smaller elements

        for(int j = low; j < high; j++) {
            if(nums[j] < pivot) {
                i++;
                swap(nums[i], nums[j]);
            }
        }

        //get pivot in it's correct spot
        swap(nums[i + 1], nums[high]);
        return i + 1; //return pivot's position
    }

    void quickSort(vector<int>& nums, int low, int high) {
        if(low < high) {
            int pi = partition(nums, low, high); 
            quickSort(nums, low, pi - 1);
            quickSort(nums, pi + 1, high);
        }
    }


    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }
};