// Title: Return Length of Arguments Passed
            // Difficulty: Easy
            // Language: JavaScript
            // Link: https://leetcode.com/problems/return-length-of-arguments-passed/

/**
 * @param {...(null|boolean|number|string|Array|Object)} args
 * @return {number}
 */
var argumentsLength = function(...args) {
    return args.length;
};

/**
 * argumentsLength(1, 2, 3); // 3
 */
