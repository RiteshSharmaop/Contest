int count = 0;
    for(int i = 0; i <nums.size();i++){
        for(int j = 0 ; j< nums.size() ; j++){
            if( i < j && j - i != nums[j] - nums[i]){
                count++;
            }
        }
    }
    return count;