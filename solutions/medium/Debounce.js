// Title: Debounce
            // Difficulty: Medium
            // Language: JavaScript
            // Link: https://leetcode.com/problems/debounce/

/**
 * @param {Function} fn
 * @param {number} t milliseconds
 * @return {Function}
 */
var debounce = function(fn, t) {
    let timer;
    return function(...args) {
        clearTimeout(timer);
    }
};

/**
 * const log = debounce(console.log, 100);
        timer = setTimeout(() => fn(...args), t);
