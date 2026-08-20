class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int n=arr.size();
        int m=n/2;
        int s=0,temp;
        // code here
        for(int i=n-1;i>m-1;i--)
        {
            temp=arr[s];
            arr[s]=arr[i];
            arr[i]=temp;
            s++;
        }
       
    }
};