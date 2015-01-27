//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/collect/ImmutableRangeSet.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectImmutableRangeSet_RESTRICT
#define ComGoogleCommonCollectImmutableRangeSet_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableRangeSet_RESTRICT
#if !defined (_ComGoogleCommonCollectImmutableRangeSet_) && (ComGoogleCommonCollectImmutableRangeSet_INCLUDE_ALL || ComGoogleCommonCollectImmutableRangeSet_INCLUDE)
#define _ComGoogleCommonCollectImmutableRangeSet_

@class ComGoogleCommonCollectDiscreteDomain;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableRangeSet_Builder;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableSortedSet;
@class ComGoogleCommonCollectRange;
@protocol ComGoogleCommonCollectRangeSet;
@protocol JavaLangComparable;

#define ComGoogleCommonCollectAbstractRangeSet_RESTRICT 1
#define ComGoogleCommonCollectAbstractRangeSet_INCLUDE 1
#include "com/google/common/collect/AbstractRangeSet.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


@interface ComGoogleCommonCollectImmutableRangeSet : ComGoogleCommonCollectAbstractRangeSet < JavaIoSerializable > {
}

+ (ComGoogleCommonCollectImmutableRangeSet *)of;

+ (ComGoogleCommonCollectImmutableRangeSet *)all;

+ (ComGoogleCommonCollectImmutableRangeSet *)ofWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

+ (ComGoogleCommonCollectImmutableRangeSet *)copyOfWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)rangeSet OBJC_METHOD_FAMILY_NONE;

- (instancetype)initWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)ranges;

- (jboolean)enclosesWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)otherRange;

- (ComGoogleCommonCollectRange *)rangeContainingWithJavaLangComparable:(id<JavaLangComparable>)value;

- (ComGoogleCommonCollectRange *)span;

- (jboolean)isEmpty;

- (void)addWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (void)addAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)other;

- (void)removeWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (void)removeAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)other;

- (ComGoogleCommonCollectImmutableSet *)asRanges;

- (ComGoogleCommonCollectImmutableRangeSet *)complement;

- (ComGoogleCommonCollectImmutableRangeSet *)subRangeSetWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (ComGoogleCommonCollectImmutableSortedSet *)asSetWithComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

- (jboolean)isPartialView;

+ (ComGoogleCommonCollectImmutableRangeSet_Builder *)builder;

- (id)writeReplace;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectImmutableRangeSet_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectImmutableRangeSet)
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeSet *ComGoogleCommonCollectImmutableRangeSet_of();
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeSet *ComGoogleCommonCollectImmutableRangeSet_all();
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeSet *ComGoogleCommonCollectImmutableRangeSet_ofWithComGoogleCommonCollectRange_(ComGoogleCommonCollectRange *range);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeSet *ComGoogleCommonCollectImmutableRangeSet_copyOfWithComGoogleCommonCollectRangeSet_(id<ComGoogleCommonCollectRangeSet> rangeSet);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeSet_Builder *ComGoogleCommonCollectImmutableRangeSet_builder();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeSet *ComGoogleCommonCollectImmutableRangeSet_EMPTY_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableRangeSet, EMPTY_, ComGoogleCommonCollectImmutableRangeSet *)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeSet *ComGoogleCommonCollectImmutableRangeSet_ALL_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableRangeSet, ALL_, ComGoogleCommonCollectImmutableRangeSet *)
#endif
#if !defined (_ComGoogleCommonCollectImmutableRangeSet_ComplementRanges_) && (ComGoogleCommonCollectImmutableRangeSet_INCLUDE_ALL || ComGoogleCommonCollectImmutableRangeSet_ComplementRanges_INCLUDE)
#define _ComGoogleCommonCollectImmutableRangeSet_ComplementRanges_

@class ComGoogleCommonCollectImmutableRangeSet;
@class ComGoogleCommonCollectRange;

#define ComGoogleCommonCollectImmutableList_RESTRICT 1
#define ComGoogleCommonCollectImmutableList_INCLUDE 1
#include "com/google/common/collect/ImmutableList.h"


@interface ComGoogleCommonCollectImmutableRangeSet_ComplementRanges : ComGoogleCommonCollectImmutableList {
}

- (instancetype)initWithComGoogleCommonCollectImmutableRangeSet:(ComGoogleCommonCollectImmutableRangeSet *)outer$;

- (jint)size;

- (ComGoogleCommonCollectRange *)getWithInt:(jint)index;

- (jboolean)isPartialView;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableRangeSet_ComplementRanges_init() {}
#endif
#if !defined (_ComGoogleCommonCollectImmutableRangeSet_AsSet_) && (ComGoogleCommonCollectImmutableRangeSet_INCLUDE_ALL || ComGoogleCommonCollectImmutableRangeSet_AsSet_INCLUDE)
#define _ComGoogleCommonCollectImmutableRangeSet_AsSet_

@class ComGoogleCommonCollectDiscreteDomain;
@class ComGoogleCommonCollectImmutableRangeSet;
@class ComGoogleCommonCollectRange;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class JavaLangInteger;
@protocol JavaLangComparable;

#define ComGoogleCommonCollectImmutableSortedSet_RESTRICT 1
#define ComGoogleCommonCollectImmutableSortedSet_INCLUDE 1
#include "com/google/common/collect/ImmutableSortedSet.h"


@interface ComGoogleCommonCollectImmutableRangeSet_AsSet : ComGoogleCommonCollectImmutableSortedSet {
}

- (instancetype)initWithComGoogleCommonCollectImmutableRangeSet:(ComGoogleCommonCollectImmutableRangeSet *)outer$
                       withComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

- (jint)size;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (ComGoogleCommonCollectUnmodifiableIterator *)descendingIterator;

- (ComGoogleCommonCollectImmutableSortedSet *)subSetWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (ComGoogleCommonCollectImmutableSortedSet *)headSetImplWithId:(id<JavaLangComparable>)toElement
                                                    withBoolean:(jboolean)inclusive;

- (ComGoogleCommonCollectImmutableSortedSet *)subSetImplWithId:(id<JavaLangComparable>)fromElement
                                                   withBoolean:(jboolean)fromInclusive
                                                        withId:(id<JavaLangComparable>)toElement
                                                   withBoolean:(jboolean)toInclusive;

- (ComGoogleCommonCollectImmutableSortedSet *)tailSetImplWithId:(id<JavaLangComparable>)fromElement
                                                    withBoolean:(jboolean)inclusive;

- (jboolean)containsWithId:(id)o;

- (jint)indexOfWithId:(id)target;

- (jboolean)isPartialView;

- (NSString *)description;

- (id)writeReplace;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableRangeSet_AsSet_init() {}
#endif
#if !defined (_ComGoogleCommonCollectImmutableRangeSet_AsSet_$1_) && (ComGoogleCommonCollectImmutableRangeSet_INCLUDE_ALL || ComGoogleCommonCollectImmutableRangeSet_AsSet_$1_INCLUDE)
#define _ComGoogleCommonCollectImmutableRangeSet_AsSet_$1_

@class ComGoogleCommonCollectImmutableRangeSet_AsSet;
@protocol JavaLangComparable;
@protocol JavaUtilIterator;

#define ComGoogleCommonCollectAbstractIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIterator.h"


@interface ComGoogleCommonCollectImmutableRangeSet_AsSet_$1 : ComGoogleCommonCollectAbstractIterator {
 @public
  id<JavaUtilIterator> rangeItr_;
  id<JavaUtilIterator> elemItr_;
}

- (id)computeNext;

- (instancetype)initWithComGoogleCommonCollectImmutableRangeSet_AsSet:(ComGoogleCommonCollectImmutableRangeSet_AsSet *)outer$;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableRangeSet_AsSet_$1_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableRangeSet_AsSet_$1, rangeItr_, id<JavaUtilIterator>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableRangeSet_AsSet_$1, elemItr_, id<JavaUtilIterator>)
#endif
#if !defined (_ComGoogleCommonCollectImmutableRangeSet_AsSet_$2_) && (ComGoogleCommonCollectImmutableRangeSet_INCLUDE_ALL || ComGoogleCommonCollectImmutableRangeSet_AsSet_$2_INCLUDE)
#define _ComGoogleCommonCollectImmutableRangeSet_AsSet_$2_

@class ComGoogleCommonCollectImmutableRangeSet_AsSet;
@protocol JavaLangComparable;
@protocol JavaUtilIterator;

#define ComGoogleCommonCollectAbstractIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIterator.h"


@interface ComGoogleCommonCollectImmutableRangeSet_AsSet_$2 : ComGoogleCommonCollectAbstractIterator {
 @public
  id<JavaUtilIterator> rangeItr_;
  id<JavaUtilIterator> elemItr_;
}

- (id)computeNext;

- (instancetype)initWithComGoogleCommonCollectImmutableRangeSet_AsSet:(ComGoogleCommonCollectImmutableRangeSet_AsSet *)outer$;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableRangeSet_AsSet_$2_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableRangeSet_AsSet_$2, rangeItr_, id<JavaUtilIterator>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableRangeSet_AsSet_$2, elemItr_, id<JavaUtilIterator>)
#endif
#if !defined (_ComGoogleCommonCollectImmutableRangeSet_AsSetSerializedForm_) && (ComGoogleCommonCollectImmutableRangeSet_INCLUDE_ALL || ComGoogleCommonCollectImmutableRangeSet_AsSetSerializedForm_INCLUDE)
#define _ComGoogleCommonCollectImmutableRangeSet_AsSetSerializedForm_

@class ComGoogleCommonCollectDiscreteDomain;
@class ComGoogleCommonCollectImmutableList;

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


@interface ComGoogleCommonCollectImmutableRangeSet_AsSetSerializedForm : NSObject < JavaIoSerializable > {
}

- (instancetype)initWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)ranges
                   withComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

- (id)readResolve;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableRangeSet_AsSetSerializedForm_init() {}
#endif
#if !defined (_ComGoogleCommonCollectImmutableRangeSet_Builder_) && (ComGoogleCommonCollectImmutableRangeSet_INCLUDE_ALL || ComGoogleCommonCollectImmutableRangeSet_Builder_INCLUDE)
#define _ComGoogleCommonCollectImmutableRangeSet_Builder_

@class ComGoogleCommonCollectImmutableRangeSet;
@class ComGoogleCommonCollectRange;
@protocol ComGoogleCommonCollectRangeSet;


@interface ComGoogleCommonCollectImmutableRangeSet_Builder : NSObject {
}

- (instancetype)init;

- (ComGoogleCommonCollectImmutableRangeSet_Builder *)addWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (ComGoogleCommonCollectImmutableRangeSet_Builder *)addAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)ranges;

- (ComGoogleCommonCollectImmutableRangeSet *)build;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableRangeSet_Builder_init() {}
#endif
#if !defined (_ComGoogleCommonCollectImmutableRangeSet_SerializedForm_) && (ComGoogleCommonCollectImmutableRangeSet_INCLUDE_ALL || ComGoogleCommonCollectImmutableRangeSet_SerializedForm_INCLUDE)
#define _ComGoogleCommonCollectImmutableRangeSet_SerializedForm_

@class ComGoogleCommonCollectImmutableList;

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


@interface ComGoogleCommonCollectImmutableRangeSet_SerializedForm : NSObject < JavaIoSerializable > {
}

- (instancetype)initWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)ranges;

- (id)readResolve;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableRangeSet_SerializedForm_init() {}
#endif
#if !defined (_ComGoogleCommonCollectImmutableRangeSet_$1_) && (ComGoogleCommonCollectImmutableRangeSet_INCLUDE_ALL || ComGoogleCommonCollectImmutableRangeSet_$1_INCLUDE)
#define _ComGoogleCommonCollectImmutableRangeSet_$1_

@class ComGoogleCommonCollectImmutableRangeSet;
@class ComGoogleCommonCollectRange;

#define ComGoogleCommonCollectImmutableList_RESTRICT 1
#define ComGoogleCommonCollectImmutableList_INCLUDE 1
#include "com/google/common/collect/ImmutableList.h"


@interface ComGoogleCommonCollectImmutableRangeSet_$1 : ComGoogleCommonCollectImmutableList {
}

- (jint)size;

- (ComGoogleCommonCollectRange *)getWithInt:(jint)index;

- (jboolean)isPartialView;

- (instancetype)initWithComGoogleCommonCollectImmutableRangeSet:(ComGoogleCommonCollectImmutableRangeSet *)outer$
                                                        withInt:(jint)capture$0
                                                        withInt:(jint)capture$1
                                withComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)capture$2;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableRangeSet_$1_init() {}
#endif
