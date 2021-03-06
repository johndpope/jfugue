//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/cache/ForwardingCache.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCacheForwardingCache_RESTRICT
#define ComGoogleCommonCacheForwardingCache_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCacheForwardingCache_RESTRICT
#if ComGoogleCommonCacheForwardingCache_SimpleForwardingCache_INCLUDE
#define ComGoogleCommonCacheForwardingCache_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonCacheForwardingCache_) && (ComGoogleCommonCacheForwardingCache_INCLUDE_ALL || ComGoogleCommonCacheForwardingCache_INCLUDE)
#define _ComGoogleCommonCacheForwardingCache_

@class ComGoogleCommonCacheCacheStats;
@class ComGoogleCommonCollectImmutableMap;
@protocol JavaLangIterable;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentConcurrentMap;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectForwardingObject_RESTRICT 1
#define ComGoogleCommonCollectForwardingObject_INCLUDE 1
#include "com/google/common/collect/ForwardingObject.h"

#define ComGoogleCommonCacheCache_RESTRICT 1
#define ComGoogleCommonCacheCache_INCLUDE 1
#include "com/google/common/cache/Cache.h"


@interface ComGoogleCommonCacheForwardingCache : ComGoogleCommonCollectForwardingObject < ComGoogleCommonCacheCache > {
}

- (instancetype)init;

- (id<ComGoogleCommonCacheCache>)delegate;

- (id)getIfPresentWithId:(id)key;

- (id)getWithId:(id)key
withJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)valueLoader;

- (ComGoogleCommonCollectImmutableMap *)getAllPresentWithJavaLangIterable:(id<JavaLangIterable>)keys;

- (void)putWithId:(id)key
           withId:(id)value;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)m;

- (void)invalidateWithId:(id)key;

- (void)invalidateAllWithJavaLangIterable:(id<JavaLangIterable>)keys;

- (void)invalidateAll;

- (jlong)size;

- (ComGoogleCommonCacheCacheStats *)stats;

- (id<JavaUtilConcurrentConcurrentMap>)asMap;

- (void)cleanUp;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCacheForwardingCache_init() {}
#endif
#if !defined (_ComGoogleCommonCacheForwardingCache_SimpleForwardingCache_) && (ComGoogleCommonCacheForwardingCache_INCLUDE_ALL || ComGoogleCommonCacheForwardingCache_SimpleForwardingCache_INCLUDE)
#define _ComGoogleCommonCacheForwardingCache_SimpleForwardingCache_

@protocol ComGoogleCommonCacheCache;


@interface ComGoogleCommonCacheForwardingCache_SimpleForwardingCache : ComGoogleCommonCacheForwardingCache {
}

- (instancetype)initWithComGoogleCommonCacheCache:(id<ComGoogleCommonCacheCache>)delegate;

- (id<ComGoogleCommonCacheCache>)delegate;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCacheForwardingCache_SimpleForwardingCache_init() {}
#endif
