//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/collect/TreeRangeSet.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectTreeRangeSet_RESTRICT
#define ComGoogleCommonCollectTreeRangeSet_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectTreeRangeSet_RESTRICT
#if ComGoogleCommonCollectTreeRangeSet_SubRangeSet_INCLUDE
#define ComGoogleCommonCollectTreeRangeSet_INCLUDE 1
#endif
#if ComGoogleCommonCollectTreeRangeSet_Complement_INCLUDE
#define ComGoogleCommonCollectTreeRangeSet_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonCollectTreeRangeSet_AsRanges_) && (ComGoogleCommonCollectTreeRangeSet_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeSet_AsRanges_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeSet_AsRanges_

@class ComGoogleCommonCollectTreeRangeSet;
@protocol JavaUtilCollection;

#define ComGoogleCommonCollectForwardingCollection_RESTRICT 1
#define ComGoogleCommonCollectForwardingCollection_INCLUDE 1
#include "com/google/common/collect/ForwardingCollection.h"

#define JavaUtilSet_RESTRICT 1
#define JavaUtilSet_INCLUDE 1
#include "java/util/Set.h"


@interface ComGoogleCommonCollectTreeRangeSet_AsRanges : ComGoogleCommonCollectForwardingCollection < JavaUtilSet > {
}

- (id<JavaUtilCollection>)delegate;

- (NSUInteger)hash;

- (jboolean)isEqual:(id)o;

- (instancetype)initWithComGoogleCommonCollectTreeRangeSet:(ComGoogleCommonCollectTreeRangeSet *)outer$;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeRangeSet_AsRanges_init() {}
#endif
#if !defined (_ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound_) && (ComGoogleCommonCollectTreeRangeSet_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound_

@class ComGoogleCommonCollectCut;
@class ComGoogleCommonCollectRange;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilNavigableMap;

#define ComGoogleCommonCollectAbstractNavigableMap_RESTRICT 1
#define ComGoogleCommonCollectAbstractNavigableMap_INCLUDE 1
#include "com/google/common/collect/AbstractNavigableMap.h"


@interface ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound : ComGoogleCommonCollectAbstractNavigableMap {
}

- (instancetype)initWithJavaUtilNavigableMap:(id<JavaUtilNavigableMap>)rangesByLowerBound;

- (id<JavaUtilNavigableMap>)subMapWithId:(ComGoogleCommonCollectCut *)fromKey
                             withBoolean:(jboolean)fromInclusive
                                  withId:(ComGoogleCommonCollectCut *)toKey
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilNavigableMap>)headMapWithId:(ComGoogleCommonCollectCut *)toKey
                              withBoolean:(jboolean)inclusive;

- (id<JavaUtilNavigableMap>)tailMapWithId:(ComGoogleCommonCollectCut *)fromKey
                              withBoolean:(jboolean)inclusive;

- (id<JavaUtilComparator>)comparator;

- (jboolean)containsKeyWithId:(id)key;

- (ComGoogleCommonCollectRange *)getWithId:(id)key;

- (id<JavaUtilIterator>)entryIterator;

- (id<JavaUtilIterator>)descendingEntryIterator;

- (jint)size;

- (jboolean)isEmpty;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound_init() {}
#endif
#if !defined (_ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound_$1_) && (ComGoogleCommonCollectTreeRangeSet_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound_$1_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound_$1_

@class ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound;
@protocol JavaUtilIterator;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectAbstractIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIterator.h"


@interface ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound_$1 : ComGoogleCommonCollectAbstractIterator {
}

- (id<JavaUtilMap_Entry>)computeNext;

- (instancetype)initWithComGoogleCommonCollectTreeRangeSet_RangesByUpperBound:(ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound *)outer$
                                                         withJavaUtilIterator:(id<JavaUtilIterator>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound_$1_init() {}
#endif
#if !defined (_ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound_$2_) && (ComGoogleCommonCollectTreeRangeSet_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound_$2_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound_$2_

@class ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound;
@protocol ComGoogleCommonCollectPeekingIterator;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectAbstractIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIterator.h"


@interface ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound_$2 : ComGoogleCommonCollectAbstractIterator {
}

- (id<JavaUtilMap_Entry>)computeNext;

- (instancetype)initWithComGoogleCommonCollectTreeRangeSet_RangesByUpperBound:(ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound *)outer$
                                    withComGoogleCommonCollectPeekingIterator:(id<ComGoogleCommonCollectPeekingIterator>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound_$2_init() {}
#endif
#if !defined (_ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound_) && (ComGoogleCommonCollectTreeRangeSet_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound_

@class ComGoogleCommonCollectCut;
@class ComGoogleCommonCollectRange;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilNavigableMap;

#define ComGoogleCommonCollectAbstractNavigableMap_RESTRICT 1
#define ComGoogleCommonCollectAbstractNavigableMap_INCLUDE 1
#include "com/google/common/collect/AbstractNavigableMap.h"


@interface ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound : ComGoogleCommonCollectAbstractNavigableMap {
}

- (instancetype)initWithJavaUtilNavigableMap:(id<JavaUtilNavigableMap>)positiveRangesByLowerBound;

- (id<JavaUtilNavigableMap>)subMapWithId:(ComGoogleCommonCollectCut *)fromKey
                             withBoolean:(jboolean)fromInclusive
                                  withId:(ComGoogleCommonCollectCut *)toKey
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilNavigableMap>)headMapWithId:(ComGoogleCommonCollectCut *)toKey
                              withBoolean:(jboolean)inclusive;

- (id<JavaUtilNavigableMap>)tailMapWithId:(ComGoogleCommonCollectCut *)fromKey
                              withBoolean:(jboolean)inclusive;

- (id<JavaUtilComparator>)comparator;

- (id<JavaUtilIterator>)entryIterator;

- (id<JavaUtilIterator>)descendingEntryIterator;

- (jint)size;

- (ComGoogleCommonCollectRange *)getWithId:(id)key;

- (jboolean)containsKeyWithId:(id)key;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound_init() {}
#endif
#if !defined (_ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound_$1_) && (ComGoogleCommonCollectTreeRangeSet_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound_$1_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound_$1_

@class ComGoogleCommonCollectCut;
@class ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound;
@protocol ComGoogleCommonCollectPeekingIterator;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectAbstractIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIterator.h"


@interface ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound_$1 : ComGoogleCommonCollectAbstractIterator {
 @public
  ComGoogleCommonCollectCut *nextComplementRangeLowerBound_;
}

- (id<JavaUtilMap_Entry>)computeNext;

- (instancetype)initWithComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound:(ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound *)outer$
                                                          withComGoogleCommonCollectCut:(ComGoogleCommonCollectCut *)capture$0
                                              withComGoogleCommonCollectPeekingIterator:(id<ComGoogleCommonCollectPeekingIterator>)capture$1;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound_$1_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound_$1, nextComplementRangeLowerBound_, ComGoogleCommonCollectCut *)
#endif
#if !defined (_ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound_$2_) && (ComGoogleCommonCollectTreeRangeSet_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound_$2_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound_$2_

@class ComGoogleCommonCollectCut;
@class ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound;
@protocol ComGoogleCommonCollectPeekingIterator;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectAbstractIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIterator.h"


@interface ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound_$2 : ComGoogleCommonCollectAbstractIterator {
 @public
  ComGoogleCommonCollectCut *nextComplementRangeUpperBound_;
}

- (id<JavaUtilMap_Entry>)computeNext;

- (instancetype)initWithComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound:(ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound *)outer$
                                                          withComGoogleCommonCollectCut:(ComGoogleCommonCollectCut *)capture$0
                                              withComGoogleCommonCollectPeekingIterator:(id<ComGoogleCommonCollectPeekingIterator>)capture$1;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound_$2_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTreeRangeSet_ComplementRangesByLowerBound_$2, nextComplementRangeUpperBound_, ComGoogleCommonCollectCut *)
#endif
#if !defined (_ComGoogleCommonCollectTreeRangeSet_) && (ComGoogleCommonCollectTreeRangeSet_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeSet_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeSet_

@class ComGoogleCommonCollectRange;
@protocol ComGoogleCommonCollectRangeSet;
@protocol JavaLangComparable;
@protocol JavaUtilNavigableMap;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectAbstractRangeSet_RESTRICT 1
#define ComGoogleCommonCollectAbstractRangeSet_INCLUDE 1
#include "com/google/common/collect/AbstractRangeSet.h"


@interface ComGoogleCommonCollectTreeRangeSet : ComGoogleCommonCollectAbstractRangeSet {
 @public
  id<JavaUtilNavigableMap> rangesByLowerBound_;
}

+ (ComGoogleCommonCollectTreeRangeSet *)create;

+ (ComGoogleCommonCollectTreeRangeSet *)createWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)rangeSet;

- (id<JavaUtilSet>)asRanges;

- (ComGoogleCommonCollectRange *)rangeContainingWithJavaLangComparable:(id<JavaLangComparable>)value;

- (jboolean)enclosesWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (ComGoogleCommonCollectRange *)span;

- (void)addWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)rangeToAdd;

- (void)removeWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)rangeToRemove;

- (id<ComGoogleCommonCollectRangeSet>)complement;

- (id<ComGoogleCommonCollectRangeSet>)subRangeSetWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)view;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeRangeSet_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTreeRangeSet, rangesByLowerBound_, id<JavaUtilNavigableMap>)
FOUNDATION_EXPORT ComGoogleCommonCollectTreeRangeSet *ComGoogleCommonCollectTreeRangeSet_create();
FOUNDATION_EXPORT ComGoogleCommonCollectTreeRangeSet *ComGoogleCommonCollectTreeRangeSet_createWithComGoogleCommonCollectRangeSet_(id<ComGoogleCommonCollectRangeSet> rangeSet);
#endif
#if !defined (_ComGoogleCommonCollectTreeRangeSet_Complement_) && (ComGoogleCommonCollectTreeRangeSet_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeSet_Complement_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeSet_Complement_

@class ComGoogleCommonCollectRange;
@protocol ComGoogleCommonCollectRangeSet;
@protocol JavaLangComparable;


@interface ComGoogleCommonCollectTreeRangeSet_Complement : ComGoogleCommonCollectTreeRangeSet {
}

- (instancetype)initWithComGoogleCommonCollectTreeRangeSet:(ComGoogleCommonCollectTreeRangeSet *)outer$;

- (void)addWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)rangeToAdd;

- (void)removeWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)rangeToRemove;

- (jboolean)containsWithJavaLangComparable:(id<JavaLangComparable>)value;

- (id<ComGoogleCommonCollectRangeSet>)complement;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeRangeSet_Complement_init() {}
#endif
#if !defined (_ComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound_) && (ComGoogleCommonCollectTreeRangeSet_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound_

@class ComGoogleCommonCollectCut;
@class ComGoogleCommonCollectRange;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilNavigableMap;

#define ComGoogleCommonCollectAbstractNavigableMap_RESTRICT 1
#define ComGoogleCommonCollectAbstractNavigableMap_INCLUDE 1
#include "com/google/common/collect/AbstractNavigableMap.h"


@interface ComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound : ComGoogleCommonCollectAbstractNavigableMap {
}

- (id<JavaUtilNavigableMap>)subMapWithId:(ComGoogleCommonCollectCut *)fromKey
                             withBoolean:(jboolean)fromInclusive
                                  withId:(ComGoogleCommonCollectCut *)toKey
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilNavigableMap>)headMapWithId:(ComGoogleCommonCollectCut *)toKey
                              withBoolean:(jboolean)inclusive;

- (id<JavaUtilNavigableMap>)tailMapWithId:(ComGoogleCommonCollectCut *)fromKey
                              withBoolean:(jboolean)inclusive;

- (id<JavaUtilComparator>)comparator;

- (jboolean)containsKeyWithId:(id)key;

- (ComGoogleCommonCollectRange *)getWithId:(id)key;

- (id<JavaUtilIterator>)entryIterator;

- (id<JavaUtilIterator>)descendingEntryIterator;

- (jint)size;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound_init() {}
#endif
#if !defined (_ComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound_$1_) && (ComGoogleCommonCollectTreeRangeSet_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound_$1_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound_$1_

@class ComGoogleCommonCollectCut;
@class ComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound;
@protocol JavaUtilIterator;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectAbstractIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIterator.h"


@interface ComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound_$1 : ComGoogleCommonCollectAbstractIterator {
}

- (id<JavaUtilMap_Entry>)computeNext;

- (instancetype)initWithComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound:(ComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound *)outer$
                                                                    withJavaUtilIterator:(id<JavaUtilIterator>)capture$0
                                                           withComGoogleCommonCollectCut:(ComGoogleCommonCollectCut *)capture$1;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound_$1_init() {}
#endif
#if !defined (_ComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound_$2_) && (ComGoogleCommonCollectTreeRangeSet_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound_$2_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound_$2_

@class ComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound;
@protocol JavaUtilIterator;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectAbstractIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIterator.h"


@interface ComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound_$2 : ComGoogleCommonCollectAbstractIterator {
}

- (id<JavaUtilMap_Entry>)computeNext;

- (instancetype)initWithComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound:(ComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound *)outer$
                                                                    withJavaUtilIterator:(id<JavaUtilIterator>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeRangeSet_SubRangeSetRangesByLowerBound_$2_init() {}
#endif
#if !defined (_ComGoogleCommonCollectTreeRangeSet_SubRangeSet_) && (ComGoogleCommonCollectTreeRangeSet_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeSet_SubRangeSet_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeSet_SubRangeSet_

@class ComGoogleCommonCollectRange;
@protocol ComGoogleCommonCollectRangeSet;
@protocol JavaLangComparable;


@interface ComGoogleCommonCollectTreeRangeSet_SubRangeSet : ComGoogleCommonCollectTreeRangeSet {
}

- (instancetype)initWithComGoogleCommonCollectTreeRangeSet:(ComGoogleCommonCollectTreeRangeSet *)outer$
                           withComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)restriction;

- (jboolean)enclosesWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (ComGoogleCommonCollectRange *)rangeContainingWithJavaLangComparable:(id<JavaLangComparable>)value;

- (void)addWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)rangeToAdd;

- (void)removeWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)rangeToRemove;

- (jboolean)containsWithJavaLangComparable:(id<JavaLangComparable>)value;

- (void)clear;

- (id<ComGoogleCommonCollectRangeSet>)subRangeSetWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)view;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeRangeSet_SubRangeSet_init() {}
#endif
