// Title: Memoize
            // Difficulty: Medium
            // Language: JavaScript
            // Link: https://leetcode.com/problems/memoize/

 * @return {Function}
 */
function memoize(fn) {
    let m = {};
    return function(...args) {
        let k = JSON.stringify(args);
    }
}
        if(k in m) {
            return m[k];
        }
        let r = fn.apply(this, args);
        m[k] = r;
        return r;


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *   callCount += 1;
 *   return a + b;
