class Solution {
public:

bool canEatAll(vector<int>&piles , int mid,int h){
    int hours=0;

    for(int &banana :piles){
        hours+=banana/mid;  //hours

        if(banana%mid !=0){
            hours++;

        }
    }
    return hours<=h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(begin(piles), end(piles));

        while(l<r){
            int mid=l+(r-l)/2;

            if(canEatAll(piles,mid,h)){
                r=mid;
            }
            else{
                l=mid+1;
            }


            
        }
        return l;
    }
};