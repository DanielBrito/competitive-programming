/* https://algodaily.com/challenges/array-intersection */

function intersection(nums1, nums2) {
    
    const set = new Set(nums1);
    const fileredSet = new Set(nums2.filter((n) => set.has(n)));
    
    return [...fileredSet];
}

console.log(intersection([1,5,2,12,6,6],[13,10,9,5,8]));