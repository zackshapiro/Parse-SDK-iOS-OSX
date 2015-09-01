/**
 * Copyright (c) 2015-present, Parse, LLC.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

template<typename T>
static __attribute__((noinline)) T parse_synchronized_enter(id obj, T (^block)(void)) {
    @synchronized(obj) {
        return block();
    }
}

struct __sync_fnc {
    __sync_fnc(id obj) : _obj(obj) {}

    template<typename T>
    __attribute__((always_inline)) T operator + (T (^block)(void)) const {
        return parse_synchronized_enter(_obj, block);
    }


private:
    __unsafe_unretained id _obj;
};


__attribute__((always_inline))
static const __sync_fnc operator +(NSString *foo, const __sync_fnc &fnc) {

    return fnc;
}


#define synchronized(x) "unused" + __sync_fnc(x) + ^
