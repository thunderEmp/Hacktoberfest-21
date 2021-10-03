/*
Given an array of size n, find the majority element. The majority element is the element that appears more than floor(n/2) times.
You may assume that the array is non-empty and the majority element always exist in the array.
Example :
Input : [2, 1, 2]
Return  : 2 which occurs 2 times which is greater than 3/2. 
https://www.interviewbit.com/problems/majority-element/
*/
//Solution 1:

int Solution::majorityElement(const vector<int> &A) {
    unordered_map<int,int> mp;
    int count=0;
    for(int i=0;i<A.size();i++){
        mp[A[i]]++;
   }
    for(auto i:mp){
         if(i.second>floor(A.size()/2))
          return i.first;
   }
}

//Solution 2:

int Solution::majorityElement(const vector<int> &A) {
    int element = 0;

    int n = A.size();
    int count = 0;

    for(int i=0;i<n;i++){
        if(count == 0)
            element = A[i];

        if(A[i] == element)
            count++;

        else    count--;  
    }

    return element;
}
