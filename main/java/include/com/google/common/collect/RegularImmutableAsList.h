//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/collect/RegularImmutableAsList.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectRegularImmutableAsList_RESTRICT
#define ComGoogleCommonCollectRegularImmutableAsList_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectRegularImmutableAsList_RESTRICT
#if !defined (_ComGoogleCommonCollectRegularImmutableAsList_) && (ComGoogleCommonCollectRegularImmutableAsList_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableAsList_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableAsList_

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectUnmodifiableListIterator;
@class IOSObjectArray;

#define ComGoogleCommonCollectImmutableAsList_RESTRICT 1
#define ComGoogleCommonCollectImmutableAsList_INCLUDE 1
#include "com/google/common/collect/ImmutableAsList.h"


@interface ComGoogleCommonCollectRegularImmutableAsList : ComGoogleCommonCollectImmutableAsList {
}

- (instancetype)initWithComGoogleCommonCollectImmutableCollection:(ComGoogleCommonCollectImmutableCollection *)delegate
                          withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)delegateList;

- (instancetype)initWithComGoogleCommonCollectImmutableCollection:(ComGoogleCommonCollectImmutableCollection *)delegate
                                                withNSObjectArray:(IOSObjectArray *)array;

- (ComGoogleCommonCollectImmutableCollection *)delegateCollection;

- (ComGoogleCommonCollectImmutableList *)delegateList;

- (ComGoogleCommonCollectUnmodifiableListIterator *)listIteratorWithInt:(jint)index;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)other;

- (jint)indexOfWithId:(id)object;

- (jint)lastIndexOfWithId:(id)object;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (id)getWithInt:(jint)index;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectRegularImmutableAsList_init() {}
#endif