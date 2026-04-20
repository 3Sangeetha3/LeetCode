/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let n = nums.length;
    let mp = new Map();

    for(let i=0;i<n;i++){
        let complement = target - nums[i];
        if(mp.has(complement)){
            return [mp.get(complement), i];
        }

        mp.set(nums[i], i);
    }
    return [];
};