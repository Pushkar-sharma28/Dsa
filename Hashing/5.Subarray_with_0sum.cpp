 Logic : prefix sum1 will be equal to prefixsum2 

 for example sum1 was for x amount and sum 2 was for y
 amount now if my x and y are equal which means that difference 
 between them is 0 and that difference indicates some 
 subarray so the answer is yes if no subarray the answer is no

 bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_set<int> s;
        int prefix=0;
        for(int i=0;i<n;i++)
        {
            prefix+=arr[i];
            if(prefix==0) return 1;
            if(s.find(prefix)!=s.end())
            return 1;
            s.insert(prefix);
        }
        return 0;
    }