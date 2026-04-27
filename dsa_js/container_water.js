/**
 * Container With Most Water
 * @param {number[]} height
 * @return {number}
 */
function maxArea(height) {
    let left = 0;
    let right = height.length - 1;
    let maxWater = 0;

    while (left < right) {
        let width = right - left;
        let currentHeight = Math.min(height[left], height[right]);
        let currentArea = width * currentHeight;

        maxWater = Math.max(currentArea, maxWater);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxWater;
}

// ✅ Test
console.log(maxArea([1,8,6,2,5,4,8,3,7])); // 49
console.log(maxArea([1,1]));               // 1