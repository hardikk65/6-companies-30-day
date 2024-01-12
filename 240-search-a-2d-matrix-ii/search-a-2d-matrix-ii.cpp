class Solution {
public:
    bool binary_search(vector<int>& matrix, int start, int end, int target){
        int mid = start + (end - start)/2;

        while(start <= end){
            mid = start + (end - start)/2;
            if(target == matrix[mid]){
                return true;
            }
            else if (target < matrix[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }

        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        for(int i = 0;i < matrix.size();i++){
            if (binary_search(matrix[i],0,matrix[i].size() - 1,target)){
                return true;
            }
        }

        return false;
        
    }
};