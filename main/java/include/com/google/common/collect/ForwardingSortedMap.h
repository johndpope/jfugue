//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/collect/ForwardingSortedMap.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectForwardingSortedMap_RESTRICT
#define ComGoogleCommonCollectForwardingSortedMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingSortedMap_RESTRICT
#if !defined (_ComGoogleCommonCollectForwardingSortedMap_) && (ComGoogleCommonCollectForwardingSortedMap_INCLUDE_ALL || ComGoogleCommonCollectForwardingSortedMap_INCLUDE)
#define _ComGoogleCommonCollectForwardingSortedMap_

@protocol JavaUtilComparator;

#define ComGoogleCommonCollectForwardingMap_RESTRICT 1
#define ComGoogleCommonCollectForwardingMap_INCLUDE 1
#include "com/google/common/collect/ForwardingMap.h"

#define JavaUtilSortedMap_RESTRICT 1
#define JavaUtilSortedMap_INCLUDE 1
#include "java/util/SortedMap.h"


@interface ComGoogleCommonCollectForwardingSortedMap : ComGoogleCommonCollectForwardingMap < JavaUtilSortedMap > {
}

- (instancetype)init;

- (id<JavaUtilSortedMap>)delegate;

- (id<JavaUtilComparator>)comparator;

- (id)firstKey;

- (id<JavaUtilSortedMap>)headMapWithId:(id)toKey;

- (id)lastKey;

- (id<JavaUtilSortedMap>)subMapWithId:(id)fromKey
                               withId:(id)toKey;

- (id<JavaUtilSortedMap>)tailMapWithId:(id)fromKey;

- (jboolean)standardContainsKeyWithId:(id)key;

- (id)standardRemoveWithId:(id)key;

- (id<JavaUtilSortedMap>)standardSubMapWithId:(id)fromKey
                                       withId:(id)toKey;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectForwardingSortedMap_init() {}
#endif
