var TimeLimitedCache = function() {
    this.cache = new Map();
};

TimeLimitedCache.prototype.set = function(key, value, duration) {
    const now = Date.now();
    const existed =
        this.cache.has(key) && this.cache.get(key).expire > now;

    this.cache.set(key, {
        value: value,
        expire: now + duration
    });

    return existed;
};

TimeLimitedCache.prototype.get = function(key) {
    const now = Date.now();
    if (!this.cache.has(key)) return -1;

    const entry = this.cache.get(key);
    if (entry.expire <= now) {
        this.cache.delete(key);
        return -1;
    }
    return entry.value;
};

TimeLimitedCache.prototype.count = function() {
    const now = Date.now();
    let cnt = 0;

    for (let [key, entry] of this.cache) {
        if (entry.expire > now) {
            cnt++;
        } else {
            this.cache.delete(key);
        }
    }
    return cnt;
};
