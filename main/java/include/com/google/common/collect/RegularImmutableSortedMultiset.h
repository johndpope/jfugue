//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/collect/RegularImmutableSortedMultiset.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectRegularImmutableSortedMultiset_RESTRICT
#define ComGoogleCommonCollectRegularImmutableSortedMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectRegularImmutableSortedMultiset_RESTRICT
#if !defined (_ComGoogleCommonCollectRegularImmutableSortedMultiset_) && (ComGoogleCommonCollectRegularImmutableSortedMultiset_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableSortedMultiset_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableSortedMultiset_

@class ComGoogleCommonCollectBoundTypeEnum;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableSortedSet;
@class ComGoogleCommonCollectRegularImmutableSortedSet;
@class IOSIntArray;
@class IOSLongArray;
@protocol ComGoogleCommonCollectMultiset_Entry;

#define ComGoogleCommonCollectImmutableSortedMultiset_RESTRICT 1
#define ComGoogleCommonCollectImmutableSortedMultiset_INCLUDE 1
#include "com/google/common/collect/ImmutableSortedMultiset.h"


@interface ComGoogleCommonCollectRegularImmutableSortedMultiset : ComGoogleCommonCollectImmutableSortedMultiset {
}

- (instancetype)initWithComGoogleCommonCollectRegularImmutableSortedSet:(ComGoogleCommonCollectRegularImmutableSortedSet *)elementSet
                                                           withIntArray:(IOSIntArray *)counts
                                                          withLongArray:(IOSLongArray *)cumulativeCounts
                                                                withInt:(jint)offset
                                                                withInt:(jint)length;

- (id<ComGoogleCommonCollectMultiset_Entry>)firstEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)lastEntry;

- (jint)countWithId:(id)element;

- (jint)size;

- (ComGoogleCommonCollectImmutableSortedSet *)elementSet;

- (ComGoogleCommonCollectImmutableSortedMultiset *)headMultisetWithId:(id)upperBound
                              withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

- (ComGoogleCommonCollectImmutableSortedMultiset *)tailMultisetWithId:(id)lowerBound
                              withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

- (ComGoogleCommonCollectImmutableSortedMultiset *)getSubMultisetWithInt:(jint)from
                                                                 withInt:(jint)to;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (jboolean)isPartialView;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectRegularImmutableSortedMultiset_init() {}
#endif
#if !defined (_ComGoogleCommonCollectRegularImmutableSortedMultiset_EntrySet_) && (ComGoogleCommonCollectRegularImmutableSortedMultiset_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableSortedMultiset_EntrySet_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableSortedMultiset_EntrySet_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectRegularImmutableSortedMultiset;
@class ComGoogleCommonCollectUnmodifiableIterator;

#define ComGoogleCommonCollectImmutableMultiset_RESTRICT 1
#define ComGoogleCommonCollectImmutableMultiset_EntrySet_INCLUDE 1
#include "com/google/common/collect/ImmutableMultiset.h"


@interface ComGoogleCommonCollectRegularImmutableSortedMultiset_EntrySet : ComGoogleCommonCollectImmutableMultiset_EntrySet {
}

- (jint)size;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (ComGoogleCommonCollectImmutableList *)createAsList;

- (instancetype)initWithComGoogleCommonCollectRegularImmutableSortedMultiset:(ComGoogleCommonCollectRegularImmutableSortedMultiset *)outer$;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectRegularImmutableSortedMultiset_EntrySet_init() {}
#endif
#if !defined (_ComGoogleCommonCollectRegularImmutableSortedMultiset_EntrySet_$1_) && (ComGoogleCommonCollectRegularImmutableSortedMultiset_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableSortedMultiset_EntrySet_$1_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableSortedMultiset_EntrySet_$1_

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectRegularImmutableSortedMultiset_EntrySet;
@protocol ComGoogleCommonCollectMultiset_Entry;

#define ComGoogleCommonCollectImmutableAsList_RESTRICT 1
#define ComGoogleCommonCollectImmutableAsList_INCLUDE 1
#include "com/google/common/collect/ImmutableAsList.h"


@interface ComGoogleCommonCollectRegularImmutableSortedMultiset_EntrySet_$1 : ComGoogleCommonCollectImmutableAsList {
}

- (id<ComGoogleCommonCollectMultiset_Entry>)getWithInt:(jint)index;

- (ComGoogleCommonCollectImmutableCollection *)delegateCollection;

- (instancetype)initWithComGoogleCommonCollectRegularImmutableSortedMultiset_EntrySet:(ComGoogleCommonCollectRegularImmutableSortedMultiset_EntrySet *)outer$;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectRegularImmutableSortedMultiset_EntrySet_$1_init() {}
#endif
