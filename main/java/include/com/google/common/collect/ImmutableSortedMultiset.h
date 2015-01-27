//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/collect/ImmutableSortedMultiset.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectImmutableSortedMultiset_RESTRICT
#define ComGoogleCommonCollectImmutableSortedMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableSortedMultiset_RESTRICT
#if !defined (_ComGoogleCommonCollectImmutableSortedMultiset_) && (ComGoogleCommonCollectImmutableSortedMultiset_INCLUDE_ALL || ComGoogleCommonCollectImmutableSortedMultiset_INCLUDE)
#define _ComGoogleCommonCollectImmutableSortedMultiset_

@class ComGoogleCommonCollectBoundTypeEnum;
@class ComGoogleCommonCollectImmutableSortedMultiset_Builder;
@class ComGoogleCommonCollectImmutableSortedSet;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaLangComparable;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;

#define ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_RESTRICT 1
#define ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_INCLUDE 1
#include "com/google/common/collect/ImmutableSortedMultisetFauxverideShim.h"

#define ComGoogleCommonCollectSortedMultiset_RESTRICT 1
#define ComGoogleCommonCollectSortedMultiset_INCLUDE 1
#include "com/google/common/collect/SortedMultiset.h"


@interface ComGoogleCommonCollectImmutableSortedMultiset : ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim < ComGoogleCommonCollectSortedMultiset > {
 @public
  ComGoogleCommonCollectImmutableSortedMultiset *descendingMultiset__;
}

+ (ComGoogleCommonCollectImmutableSortedMultiset *)of;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithJavaLangComparable:(id<JavaLangComparable>)element;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithJavaLangComparable:(id<JavaLangComparable>)e1
                                                     withJavaLangComparable:(id<JavaLangComparable>)e2;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithJavaLangComparable:(id<JavaLangComparable>)e1
                                                     withJavaLangComparable:(id<JavaLangComparable>)e2
                                                     withJavaLangComparable:(id<JavaLangComparable>)e3;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithJavaLangComparable:(id<JavaLangComparable>)e1
                                                     withJavaLangComparable:(id<JavaLangComparable>)e2
                                                     withJavaLangComparable:(id<JavaLangComparable>)e3
                                                     withJavaLangComparable:(id<JavaLangComparable>)e4;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithJavaLangComparable:(id<JavaLangComparable>)e1
                                                     withJavaLangComparable:(id<JavaLangComparable>)e2
                                                     withJavaLangComparable:(id<JavaLangComparable>)e3
                                                     withJavaLangComparable:(id<JavaLangComparable>)e4
                                                     withJavaLangComparable:(id<JavaLangComparable>)e5;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithJavaLangComparable:(id<JavaLangComparable>)e1
                                                     withJavaLangComparable:(id<JavaLangComparable>)e2
                                                     withJavaLangComparable:(id<JavaLangComparable>)e3
                                                     withJavaLangComparable:(id<JavaLangComparable>)e4
                                                     withJavaLangComparable:(id<JavaLangComparable>)e5
                                                     withJavaLangComparable:(id<JavaLangComparable>)e6
                                                withJavaLangComparableArray:(IOSObjectArray *)remaining;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)copyOfWithJavaLangComparableArray:(IOSObjectArray *)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)copyOfWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)copyOfWithJavaUtilIterator:(id<JavaUtilIterator>)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)copyOfWithJavaUtilComparator:(id<JavaUtilComparator>)comparator
                                                           withJavaUtilIterator:(id<JavaUtilIterator>)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)copyOfWithJavaUtilComparator:(id<JavaUtilComparator>)comparator
                                                           withJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)copyOfSortedWithComGoogleCommonCollectSortedMultiset:(id<ComGoogleCommonCollectSortedMultiset>)sortedMultiset OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)emptyMultisetWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (instancetype)init;

- (id<JavaUtilComparator>)comparator;

- (ComGoogleCommonCollectImmutableSortedSet *)elementSet;

- (ComGoogleCommonCollectImmutableSortedMultiset *)descendingMultiset;

- (id<ComGoogleCommonCollectMultiset_Entry>)pollFirstEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)pollLastEntry;

- (ComGoogleCommonCollectImmutableSortedMultiset *)headMultisetWithId:(id)upperBound
                              withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

- (ComGoogleCommonCollectImmutableSortedMultiset *)subMultisetWithId:(id)lowerBound
                             withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)lowerBoundType
                                                              withId:(id)upperBound
                             withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)upperBoundType;

- (ComGoogleCommonCollectImmutableSortedMultiset *)tailMultisetWithId:(id)lowerBound
                              withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

+ (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)orderedByWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

+ (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)reverseOrder;

+ (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)naturalOrder;

- (id)writeReplace;


@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectImmutableSortedMultiset_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectImmutableSortedMultiset)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableSortedMultiset, descendingMultiset__, ComGoogleCommonCollectImmutableSortedMultiset *)
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_of();
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_ofWithJavaLangComparable_(id<JavaLangComparable> element);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_ofWithJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> e1, id<JavaLangComparable> e2);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_ofWithJavaLangComparable_withJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> e1, id<JavaLangComparable> e2, id<JavaLangComparable> e3);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_ofWithJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> e1, id<JavaLangComparable> e2, id<JavaLangComparable> e3, id<JavaLangComparable> e4);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_ofWithJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> e1, id<JavaLangComparable> e2, id<JavaLangComparable> e3, id<JavaLangComparable> e4, id<JavaLangComparable> e5);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_ofWithJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparableArray_(id<JavaLangComparable> e1, id<JavaLangComparable> e2, id<JavaLangComparable> e3, id<JavaLangComparable> e4, id<JavaLangComparable> e5, id<JavaLangComparable> e6, IOSObjectArray *remaining);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_copyOfWithJavaLangComparableArray_(IOSObjectArray *elements);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_copyOfWithJavaLangIterable_(id<JavaLangIterable> elements);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_copyOfWithJavaUtilIterator_(id<JavaUtilIterator> elements);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_copyOfWithJavaUtilComparator_withJavaUtilIterator_(id<JavaUtilComparator> comparator, id<JavaUtilIterator> elements);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_copyOfWithJavaUtilComparator_withJavaLangIterable_(id<JavaUtilComparator> comparator, id<JavaLangIterable> elements);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_copyOfSortedWithComGoogleCommonCollectSortedMultiset_(id<ComGoogleCommonCollectSortedMultiset> sortedMultiset);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_emptyMultisetWithJavaUtilComparator_(id<JavaUtilComparator> comparator);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset_Builder *ComGoogleCommonCollectImmutableSortedMultiset_orderedByWithJavaUtilComparator_(id<JavaUtilComparator> comparator);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset_Builder *ComGoogleCommonCollectImmutableSortedMultiset_reverseOrder();
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset_Builder *ComGoogleCommonCollectImmutableSortedMultiset_naturalOrder();

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonCollectImmutableSortedMultiset_NATURAL_ORDER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableSortedMultiset, NATURAL_ORDER_, id<JavaUtilComparator>)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_NATURAL_EMPTY_MULTISET_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableSortedMultiset, NATURAL_EMPTY_MULTISET_, ComGoogleCommonCollectImmutableSortedMultiset *)
#endif
#if !defined (_ComGoogleCommonCollectImmutableSortedMultiset_Builder_) && (ComGoogleCommonCollectImmutableSortedMultiset_INCLUDE_ALL || ComGoogleCommonCollectImmutableSortedMultiset_Builder_INCLUDE)
#define _ComGoogleCommonCollectImmutableSortedMultiset_Builder_

@class ComGoogleCommonCollectImmutableSortedMultiset;
@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;

#define ComGoogleCommonCollectImmutableMultiset_RESTRICT 1
#define ComGoogleCommonCollectImmutableMultiset_Builder_INCLUDE 1
#include "com/google/common/collect/ImmutableMultiset.h"


@interface ComGoogleCommonCollectImmutableSortedMultiset_Builder : ComGoogleCommonCollectImmutableMultiset_Builder {
}

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)addWithId:(id)element;

- (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)addCopiesWithId:(id)element
                                                                   withInt:(jint)occurrences;

- (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)setCountWithId:(id)element
                                                                  withInt:(jint)count;

- (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)addWithNSObjectArray:(IOSObjectArray *)elements;

- (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)addAllWithJavaLangIterable:(id<JavaLangIterable>)elements;

- (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)addAllWithJavaUtilIterator:(id<JavaUtilIterator>)elements;

- (ComGoogleCommonCollectImmutableSortedMultiset *)build;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableSortedMultiset_Builder_init() {}
#endif
#if !defined (_ComGoogleCommonCollectImmutableSortedMultiset_SerializedForm_) && (ComGoogleCommonCollectImmutableSortedMultiset_INCLUDE_ALL || ComGoogleCommonCollectImmutableSortedMultiset_SerializedForm_INCLUDE)
#define _ComGoogleCommonCollectImmutableSortedMultiset_SerializedForm_

@class IOSIntArray;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectSortedMultiset;
@protocol JavaUtilComparator;

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


@interface ComGoogleCommonCollectImmutableSortedMultiset_SerializedForm : NSObject < JavaIoSerializable > {
 @public
  id<JavaUtilComparator> comparator_;
  IOSObjectArray *elements_;
  IOSIntArray *counts_;
}

- (instancetype)initWithComGoogleCommonCollectSortedMultiset:(id<ComGoogleCommonCollectSortedMultiset>)multiset;

- (id)readResolve;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableSortedMultiset_SerializedForm_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableSortedMultiset_SerializedForm, comparator_, id<JavaUtilComparator>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableSortedMultiset_SerializedForm, elements_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableSortedMultiset_SerializedForm, counts_, IOSIntArray *)
#endif
