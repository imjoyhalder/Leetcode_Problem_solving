
function maxSubArray(nums: number[]): number {
    let crrSum: number = 0;
    let maxSum: number = nums[0]; 
    let n: number = nums.length; 
    for(let i=0; i<n; i++){
        crrSum += nums[i]
        maxSum = Math.max(maxSum, crrSum)
        if(crrSum <0){
            crrSum = 0; 
        }
    }
    return maxSum; 
};
