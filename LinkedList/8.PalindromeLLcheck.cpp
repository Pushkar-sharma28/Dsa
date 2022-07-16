class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode *ptr=head;
        while(ptr!=NULL){        
           arr.push_back(ptr->val);
            ptr=ptr->next;
        }
        int start=0;
        int end=arr.size()-1;
        while(start<=end)
        {  if(arr[start]!=arr[end])
            return false;
         start++;
         end--;
}
        return true;
           
    }
};