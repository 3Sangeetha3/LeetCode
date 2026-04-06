/**
 * @param {number[]} num
 * @param {number} k
 * @return {number[]}
 */
var addToArrayForm = function(num, k) {
    let number = 0n;

    for(let n of num){
        number = number * 10n + BigInt(n);
    }

    number += BigInt(k);

    let ans = [];
    if(number === 0n) return [0];

    while(number>0n){
        ans.push(Number(number % 10n));
        number = number / 10n;
    }

    return ans.reverse();
};