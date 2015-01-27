//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/collect/SingletonImmutableSet.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectSingletonImmutableSet_RESTRICT
#define ComGoogleCommonCollectSingletonImmutableSet_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectSingletonImmutableSet_RESTRICT
#if !defined (_ComGoogleCommonCollectSingletonImmutableSet_) && (ComGoogleCommonCollectSingletonImmutableSet_INCLUDE_ALL || ComGoogleCommonCollectSingletonImmutableSet_INCLUDE)
#define _ComGoogleCommonCollectSingletonImmutableSet_

@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;

#define ComGoogleCommonCollectImmutableSet_RESTRICT 1
#define ComGoogleCommonCollectImmutableSet_INCLUDE 1
#include "com/google/common/collect/ImmutableSet.h"


@interface ComGoogleCommonCollectSingletonImmutableSet : ComGoogleCommonCollectImmutableSet {
 @public
  id element_;
}

- (instancetype)initWithId:(id)element;

- (instancetype)initWithId:(id)element
                   withInt:(jint)hashCode;

- (jint)size;

- (jboolean)isEmpty;

- (jboolean)containsWithId:(id)target;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jboolean)isPartialView;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (jboolean)isHashCodeFast;

- (NSString *)description;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectSingletonImmutableSet_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSingletonImmutableSet, element_, id)
#endif
