#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zero_cnt = 0, cnt = 0;
    for(int i=0; i<lottos.size(); i++){
        if(lottos[i]==0){
            zero_cnt++;
        }
        for(int j=0; j<win_nums.size();j++){
            if(lottos[i]==win_nums[j]){
                cnt++;
                win_nums.erase(win_nums.begin()+j);
            }
        }
    }
    
    int maxi, mini;
    
    if(cnt<2)
        mini = 6;
    else
        mini = 6-cnt+1;
    
    if(zero_cnt+cnt<2)
        maxi=6;
    else
        maxi = 6-(zero_cnt+cnt)+1;
    answer.push_back(maxi);
    answer.push_back(mini);
    return answer;
}
