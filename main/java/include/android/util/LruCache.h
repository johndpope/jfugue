//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/LruCache.java
//

#ifndef _AndroidUtilLruCache_H_
#define _AndroidUtilLruCache_H_

@class JavaUtilLinkedHashMap;
@protocol JavaUtilMap;

#import "JreEmulation.h"

@interface AndroidUtilLruCache : NSObject {
}

- (instancetype)initWithInt:(jint)maxSize;

- (void)resizeWithInt:(jint)maxSize;

- (id)getWithId:(id)key;

- (id)putWithId:(id)key
         withId:(id)value;

- (void)trimToSizeWithInt:(jint)maxSize;

- (id)removeWithId:(id)key;

- (void)entryRemovedWithBoolean:(jboolean)evicted
                         withId:(id)key
                         withId:(id)oldValue
                         withId:(id)newValue;

- (id)createWithId:(id)key;

- (jint)sizeOfWithId:(id)key
              withId:(id)value;

- (void)evictAll;

- (jint)size;

- (jint)maxSize;

- (jint)hitCount;

- (jint)missCount;

- (jint)createCount;

- (jint)putCount;

- (jint)evictionCount;

- (id<JavaUtilMap>)snapshot;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void AndroidUtilLruCache_init() {}

#endif // _AndroidUtilLruCache_H_
