//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/collect/RangeMap.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectRangeMap_RESTRICT
#define ComGoogleCommonCollectRangeMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectRangeMap_RESTRICT
#if !defined (_ComGoogleCommonCollectRangeMap_) && (ComGoogleCommonCollectRangeMap_INCLUDE_ALL || ComGoogleCommonCollectRangeMap_INCLUDE)
#define _ComGoogleCommonCollectRangeMap_

@class ComGoogleCommonCollectRange;
@protocol JavaLangComparable;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;


@protocol ComGoogleCommonCollectRangeMap < NSObject, JavaObject >

- (id)getWithJavaLangComparable:(id<JavaLangComparable>)key;

- (id<JavaUtilMap_Entry>)getEntryWithJavaLangComparable:(id<JavaLangComparable>)key;

- (ComGoogleCommonCollectRange *)span;

- (void)putWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range
                                    withId:(id)value;

- (void)putAllWithComGoogleCommonCollectRangeMap:(id<ComGoogleCommonCollectRangeMap>)rangeMap;

- (void)clear;

- (void)removeWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (id<JavaUtilMap>)asMapOfRanges;

- (id<ComGoogleCommonCollectRangeMap>)subRangeMapWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectRangeMap_init() {}
#endif
