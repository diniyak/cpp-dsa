class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        
        int sec=-1;
        int large=arr[0];
        
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]>large )
            {  sec=large;
                large=arr[i];
               
            }
            else if(arr[i]<large && arr[i]>sec)
            {
               
                sec=arr[i];
                
                
            }
           
            
        }
            return sec;
        
    }
};