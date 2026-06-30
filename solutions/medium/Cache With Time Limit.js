// Title: Cache With Time Limit
            // Difficulty: Medium
            // Language: JavaScript
            // Link: https://leetcode.com/problems/cache-with-time-limit/

TimeLimitedCache.prototype.count = function() {
    return Object.keys(this.obj).length;
};

/**
 * const timeLimitedCache = new TimeLimitedCache()
 * timeLimitedCache.set(1, 42, 1000); // false
 * timeLimitedCache.get(1) // 42
 * timeLimitedCache.count() // 1
 */
/** 
 * @return {number} count of non-expired keys
 */
