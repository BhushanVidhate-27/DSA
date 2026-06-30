// Title: Array Prototype Last
            // Difficulty: Easy
            // Language: JavaScript
            // Link: https://leetcode.com/problems/array-prototype-last/

/**
 * @return {null|boolean|number|string|Array|Object}
 */
Array.prototype.last = function() {
    if(this.length == 0) {
};

/**
 * const arr = [1, 2, 3];
        return -1;
    }
 * arr.last(); // 3
    return this[this.length-1];
 */
