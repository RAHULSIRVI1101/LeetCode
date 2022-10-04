class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int ans=0;
        if(flowerbed.size()==1){
            if(flowerbed[0]==0) ans++;
        }
        else{
        
            for(int i=1;i<=flowerbed.size()-1 && n!=0;i++)
            {
                 if(i==1){
                    if(flowerbed[i]==0 && flowerbed[i-1]==0) {
                    ans++;
                    flowerbed[i-1]=1;
                    }
                    }
                    else if(i==flowerbed.size()-1){
                        if(flowerbed[i]==0 && flowerbed[i-1]==0) {
                        ans++;
                        flowerbed[i]=1;
                        }
                    }
                    else{
                        if(flowerbed[i-1]==0 && flowerbed[i+1]==0 && flowerbed[i]==0){
                        flowerbed[i]=1;
                        ans++;
                        }
                    }
            } 
        }
        return ans>=n?true:false;
       
    }
};