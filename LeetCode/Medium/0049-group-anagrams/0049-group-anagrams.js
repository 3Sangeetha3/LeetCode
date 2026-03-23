/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    const map = new Map();

    for(let str of strs){
        let word = str.split('').sort().join('');
        if(!map.has(word)){
            map.set(word, []);
        }

        map.get(word).push(str);
    }

    return Array.from(map.values());
};