//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/collect/AbstractSortedMultiset.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectAbstractSortedMultiset_RESTRICT
#define ComGoogleCommonCollectAbstractSortedMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAbstractSortedMultiset_RESTRICT
#if !defined (_ComGoogleCommonCollectAbstractSortedMultiset_) && (ComGoogleCommonCollectAbstractSortedMultiset_INCLUDE_ALL || ComGoogleCommonCollectAbstractSortedMultiset_INCLUDE)
#define _ComGoogleCommonCollectAbstractSortedMultiset_

@class ComGoogleCommonCollectBoundTypeEnum;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilNavigableSet;

#define ComGoogleCommonCollectAbstractMultiset_RESTRICT 1
#define ComGoogleCommonCollectAbstractMultiset_INCLUDE 1
#include "com/google/common/collect/AbstractMultiset.h"

#define ComGoogleCommonCollectSortedMultiset_RESTRICT 1
#define ComGoogleCommonCollectSortedMultiset_INCLUDE 1
#include "com/google/common/collect/SortedMultiset.h"


@interface ComGoogleCommonCollectAbstractSortedMultiset : ComGoogleCommonCollectAbstractMultiset < ComGoogleCommonCollectSortedMultiset > {
 @public
  id<JavaUtilComparator> comparator__;
}

- (instancetype)init;

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (id<JavaUtilNavigableSet>)elementSet;

- (id<JavaUtilNavigableSet>)createElementSet;

- (id<JavaUtilComparator>)comparator;

- (id<ComGoogleCommonCollectMultiset_Entry>)firstEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)lastEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)pollFirstEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)pollLastEntry;

- (id<ComGoogleCommonCollectSortedMultiset>)subMultisetWithId:(id)fromElement
                      withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)fromBoundType
                                                       withId:(id)toElement
                      withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)toBoundType;

- (id<JavaUtilIterator>)descendingEntryIterator;

- (id<JavaUtilIterator>)descendingIterator;

- (id<ComGoogleCommonCollectSortedMultiset>)descendingMultiset;

- (id<ComGoogleCommonCollectSortedMultiset>)createDescendingMultiset;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectAbstractSortedMultiset_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractSortedMultiset, comparator__, id<JavaUtilComparator>)
#endif
#if !defined (_ComGoogleCommonCollectAbstractSortedMultiset_$1_) && (ComGoogleCommonCollectAbstractSortedMultiset_INCLUDE_ALL || ComGoogleCommonCollectAbstractSortedMultiset_$1_INCLUDE)
#define _ComGoogleCommonCollectAbstractSortedMultiset_$1_

@class ComGoogleCommonCollectAbstractSortedMultiset;
@protocol ComGoogleCommonCollectSortedMultiset;
@protocol JavaUtilIterator;

#define ComGoogleCommonCollectDescendingMultiset_RESTRICT 1
#define ComGoogleCommonCollectDescendingMultiset_INCLUDE 1
#include "com/google/common/collect/DescendingMultiset.h"


@interface ComGoogleCommonCollectAbstractSortedMultiset_$1 : ComGoogleCommonCollectDescendingMultiset {
}

- (id<ComGoogleCommonCollectSortedMultiset>)forwardMultiset;

- (id<JavaUtilIterator>)entryIterator;

- (id<JavaUtilIterator>)iterator;

- (instancetype)initWithComGoogleCommonCollectAbstractSortedMultiset:(ComGoogleCommonCollectAbstractSortedMultiset *)outer$;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectAbstractSortedMultiset_$1_init() {}
#endif
