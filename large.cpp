class Solution {
  public:

    int largest(vector<int> &arr) {
        int largest=arr[0],i;
        // code here
        for(i=0;i< arr.size();i++)
        {
            if(arr[i]>largest)
            {largest=arr[i];}
            
        }
        return largest;
    }
};
