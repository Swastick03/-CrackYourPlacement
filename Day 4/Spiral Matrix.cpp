class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        int total=row*col;
        
        //index initialization
        int startingRow=0;
        int startingCol=0;
        int endingRow=row-1;
        int endingCol=col-1;
        
        
        //looping
        while(count<total){
            //printing starting row
            for(int i=startingCol; i<=endingCol && count<total; i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            
            //printing ending column
            for(int i=startingRow; i<=endingRow && count<total; i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            
            //printing ending Row
            for(int i=endingCol; i>=startingCol && count<total; i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            
            //printing strating col
            for(int i=endingRow; i>=startingRow && count<total ; i-- ){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};