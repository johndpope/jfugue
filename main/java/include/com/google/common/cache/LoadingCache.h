//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/cache/LoadingCache.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCacheLoadingCache_RESTRICT
#define ComGoogleCommonCacheLoadingCache_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCacheLoadingCache_RESTRICT
#if !defined (_ComGoogleCommonCacheLoadingCache_) && (ComGoogleCommonCacheLoadingCache_INCLUDE_ALL || ComGoogleCommonCacheLoadingCache_INCLUDE)
#define _ComGoogleCommonCacheLoadingCache_

@class ComGoogleCommonCollectImmutableMap;
@protocol JavaLangIterable;
@protocol JavaUtilConcurrentConcurrentMap;

#define ComGoogleCommonCacheCache_RESTRICT 1
#define ComGoogleCommonCacheCache_INCLUDE 1
#include "com/google/common/cache/Cache.h"

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"


@protocol ComGoogleCommonCacheLoadingCache < ComGoogleCommonCacheCache, ComGoogleCommonBaseFunction, NSObject, JavaObject >
- (id)getWithId:(id)key;

- (id)getUncheckedWithId:(id)key;

- (ComGoogleCommonCollectImmutableMap *)getAllWithJavaLangIterable:(id<JavaLangIterable>)keys;

- (id)applyWithId:(id)key;

- (void)refreshWithId:(id)key;

- (id<JavaUtilConcurrentConcurrentMap>)asMap;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCacheLoadingCache_init() {}
#endif