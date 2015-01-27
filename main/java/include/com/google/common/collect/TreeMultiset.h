//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/collect/TreeMultiset.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectTreeMultiset_RESTRICT
#define ComGoogleCommonCollectTreeMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectTreeMultiset_RESTRICT
#if ComGoogleCommonCollectTreeMultiset_AggregateEnum_$2_INCLUDE
#define ComGoogleCommonCollectTreeMultiset_AggregateEnum_INCLUDE 1
#endif
#if ComGoogleCommonCollectTreeMultiset_AggregateEnum_$1_INCLUDE
#define ComGoogleCommonCollectTreeMultiset_AggregateEnum_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonCollectTreeMultiset_) && (ComGoogleCommonCollectTreeMultiset_INCLUDE_ALL || ComGoogleCommonCollectTreeMultiset_INCLUDE)
#define _ComGoogleCommonCollectTreeMultiset_

@class ComGoogleCommonCollectBoundTypeEnum;
@class ComGoogleCommonCollectGeneralRange;
@class ComGoogleCommonCollectTreeMultiset_AggregateEnum;
@class ComGoogleCommonCollectTreeMultiset_AvlNode;
@class ComGoogleCommonCollectTreeMultiset_Reference;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol ComGoogleCommonCollectSortedMultiset;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;

#define ComGoogleCommonCollectAbstractSortedMultiset_RESTRICT 1
#define ComGoogleCommonCollectAbstractSortedMultiset_INCLUDE 1
#include "com/google/common/collect/AbstractSortedMultiset.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectTreeMultiset_serialVersionUID 1LL

@interface ComGoogleCommonCollectTreeMultiset : ComGoogleCommonCollectAbstractSortedMultiset < JavaIoSerializable > {
}

+ (ComGoogleCommonCollectTreeMultiset *)create;

+ (ComGoogleCommonCollectTreeMultiset *)createWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

+ (ComGoogleCommonCollectTreeMultiset *)createWithJavaLangIterable:(id<JavaLangIterable>)elements;

- (instancetype)initWithComGoogleCommonCollectTreeMultiset_Reference:(ComGoogleCommonCollectTreeMultiset_Reference *)rootReference
                              withComGoogleCommonCollectGeneralRange:(ComGoogleCommonCollectGeneralRange *)range
                      withComGoogleCommonCollectTreeMultiset_AvlNode:(ComGoogleCommonCollectTreeMultiset_AvlNode *)endLink;

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (jint)size;

- (jint)distinctElements;

- (jint)countWithId:(id)element;

- (jint)addWithId:(id)element
          withInt:(jint)occurrences;

- (jint)removeWithId:(id)element
             withInt:(jint)occurrences;

- (jint)setCountWithId:(id)element
               withInt:(jint)count;

- (jboolean)setCountWithId:(id)element
                   withInt:(jint)oldCount
                   withInt:(jint)newCount;

- (id<JavaUtilIterator>)entryIterator;

- (id<JavaUtilIterator>)descendingEntryIterator;

- (id<ComGoogleCommonCollectSortedMultiset>)headMultisetWithId:(id)upperBound
                       withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

- (id<ComGoogleCommonCollectSortedMultiset>)tailMultisetWithId:(id)lowerBound
                       withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

+ (jint)distinctElementsWithComGoogleCommonCollectTreeMultiset_AvlNode:(ComGoogleCommonCollectTreeMultiset_AvlNode *)node;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeMultiset_init() {}
FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *ComGoogleCommonCollectTreeMultiset_create();
FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *ComGoogleCommonCollectTreeMultiset_createWithJavaUtilComparator_(id<JavaUtilComparator> comparator);
FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *ComGoogleCommonCollectTreeMultiset_createWithJavaLangIterable_(id<JavaLangIterable> elements);
FOUNDATION_EXPORT jint ComGoogleCommonCollectTreeMultiset_distinctElementsWithComGoogleCommonCollectTreeMultiset_AvlNode_(ComGoogleCommonCollectTreeMultiset_AvlNode *node);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectTreeMultiset, serialVersionUID, jlong)
#endif
#if !defined (_ComGoogleCommonCollectTreeMultiset_AggregateEnum_) && (ComGoogleCommonCollectTreeMultiset_INCLUDE_ALL || ComGoogleCommonCollectTreeMultiset_AggregateEnum_INCLUDE)
#define _ComGoogleCommonCollectTreeMultiset_AggregateEnum_

@class ComGoogleCommonCollectTreeMultiset_AvlNode;

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"


typedef NS_ENUM(NSUInteger, ComGoogleCommonCollectTreeMultiset_Aggregate) {
  ComGoogleCommonCollectTreeMultiset_Aggregate_SIZE = 0,
  ComGoogleCommonCollectTreeMultiset_Aggregate_DISTINCT = 1,
};

@interface ComGoogleCommonCollectTreeMultiset_AggregateEnum : JavaLangEnum < NSCopying > {
}

- (jint)nodeAggregateWithComGoogleCommonCollectTreeMultiset_AvlNode:(ComGoogleCommonCollectTreeMultiset_AvlNode *)node;

- (jlong)treeAggregateWithComGoogleCommonCollectTreeMultiset_AvlNode:(ComGoogleCommonCollectTreeMultiset_AvlNode *)root;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectTreeMultiset_AggregateEnum_values();

+ (ComGoogleCommonCollectTreeMultiset_AggregateEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset_AggregateEnum *ComGoogleCommonCollectTreeMultiset_AggregateEnum_valueOfWithNSString_(NSString *name);- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectTreeMultiset_AggregateEnum_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectTreeMultiset_AggregateEnum)

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset_AggregateEnum *ComGoogleCommonCollectTreeMultiset_AggregateEnum_values_[];

#define ComGoogleCommonCollectTreeMultiset_AggregateEnum_SIZE ComGoogleCommonCollectTreeMultiset_AggregateEnum_values_[ComGoogleCommonCollectTreeMultiset_Aggregate_SIZE]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectTreeMultiset_AggregateEnum, SIZE)

#define ComGoogleCommonCollectTreeMultiset_AggregateEnum_DISTINCT ComGoogleCommonCollectTreeMultiset_AggregateEnum_values_[ComGoogleCommonCollectTreeMultiset_Aggregate_DISTINCT]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectTreeMultiset_AggregateEnum, DISTINCT)
#endif
#if !defined (_ComGoogleCommonCollectTreeMultiset_AggregateEnum_$1_) && (ComGoogleCommonCollectTreeMultiset_INCLUDE_ALL || ComGoogleCommonCollectTreeMultiset_AggregateEnum_$1_INCLUDE)
#define _ComGoogleCommonCollectTreeMultiset_AggregateEnum_$1_

@class ComGoogleCommonCollectTreeMultiset_AvlNode;


@interface ComGoogleCommonCollectTreeMultiset_AggregateEnum_$1 : ComGoogleCommonCollectTreeMultiset_AggregateEnum {
}

- (jint)nodeAggregateWithComGoogleCommonCollectTreeMultiset_AvlNode:(ComGoogleCommonCollectTreeMultiset_AvlNode *)node;

- (jlong)treeAggregateWithComGoogleCommonCollectTreeMultiset_AvlNode:(ComGoogleCommonCollectTreeMultiset_AvlNode *)root;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeMultiset_AggregateEnum_$1_init() {}
#endif
#if !defined (_ComGoogleCommonCollectTreeMultiset_AggregateEnum_$2_) && (ComGoogleCommonCollectTreeMultiset_INCLUDE_ALL || ComGoogleCommonCollectTreeMultiset_AggregateEnum_$2_INCLUDE)
#define _ComGoogleCommonCollectTreeMultiset_AggregateEnum_$2_

@class ComGoogleCommonCollectTreeMultiset_AvlNode;


@interface ComGoogleCommonCollectTreeMultiset_AggregateEnum_$2 : ComGoogleCommonCollectTreeMultiset_AggregateEnum {
}

- (jint)nodeAggregateWithComGoogleCommonCollectTreeMultiset_AvlNode:(ComGoogleCommonCollectTreeMultiset_AvlNode *)node;

- (jlong)treeAggregateWithComGoogleCommonCollectTreeMultiset_AvlNode:(ComGoogleCommonCollectTreeMultiset_AvlNode *)root;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeMultiset_AggregateEnum_$2_init() {}
#endif
#if !defined (_ComGoogleCommonCollectTreeMultiset_Reference_) && (ComGoogleCommonCollectTreeMultiset_INCLUDE_ALL || ComGoogleCommonCollectTreeMultiset_Reference_INCLUDE)
#define _ComGoogleCommonCollectTreeMultiset_Reference_


@interface ComGoogleCommonCollectTreeMultiset_Reference : NSObject {
}

- (id)get;

- (void)checkAndSetWithId:(id)expected
                   withId:(id)newValue;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeMultiset_Reference_init() {}
#endif
#if !defined (_ComGoogleCommonCollectTreeMultiset_AvlNode_) && (ComGoogleCommonCollectTreeMultiset_INCLUDE_ALL || ComGoogleCommonCollectTreeMultiset_AvlNode_INCLUDE)
#define _ComGoogleCommonCollectTreeMultiset_AvlNode_

@class IOSIntArray;
@protocol JavaUtilComparator;

#define ComGoogleCommonCollectMultisets_RESTRICT 1
#define ComGoogleCommonCollectMultisets_AbstractEntry_INCLUDE 1
#include "com/google/common/collect/Multisets.h"


@interface ComGoogleCommonCollectTreeMultiset_AvlNode : ComGoogleCommonCollectMultisets_AbstractEntry {
}

- (instancetype)initWithId:(id)elem
                   withInt:(jint)elemCount;

- (jint)countWithJavaUtilComparator:(id<JavaUtilComparator>)comparator
                             withId:(id)e;

- (ComGoogleCommonCollectTreeMultiset_AvlNode *)addWithJavaUtilComparator:(id<JavaUtilComparator>)comparator
                                                                   withId:(id)e
                                                                  withInt:(jint)count
                                                             withIntArray:(IOSIntArray *)result;

- (ComGoogleCommonCollectTreeMultiset_AvlNode *)removeWithJavaUtilComparator:(id<JavaUtilComparator>)comparator
                                                                      withId:(id)e
                                                                     withInt:(jint)count
                                                                withIntArray:(IOSIntArray *)result;

- (ComGoogleCommonCollectTreeMultiset_AvlNode *)setCountWithJavaUtilComparator:(id<JavaUtilComparator>)comparator
                                                                        withId:(id)e
                                                                       withInt:(jint)count
                                                                  withIntArray:(IOSIntArray *)result;

- (ComGoogleCommonCollectTreeMultiset_AvlNode *)setCountWithJavaUtilComparator:(id<JavaUtilComparator>)comparator
                                                                        withId:(id)e
                                                                       withInt:(jint)expectedCount
                                                                       withInt:(jint)newCount
                                                                  withIntArray:(IOSIntArray *)result;

- (id)getElement;

- (jint)getCount;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeMultiset_AvlNode_init() {}
#endif
#if !defined (_ComGoogleCommonCollectTreeMultiset_$1_) && (ComGoogleCommonCollectTreeMultiset_INCLUDE_ALL || ComGoogleCommonCollectTreeMultiset_$1_INCLUDE)
#define _ComGoogleCommonCollectTreeMultiset_$1_

@class ComGoogleCommonCollectTreeMultiset;
@class ComGoogleCommonCollectTreeMultiset_AvlNode;

#define ComGoogleCommonCollectMultisets_RESTRICT 1
#define ComGoogleCommonCollectMultisets_AbstractEntry_INCLUDE 1
#include "com/google/common/collect/Multisets.h"


@interface ComGoogleCommonCollectTreeMultiset_$1 : ComGoogleCommonCollectMultisets_AbstractEntry {
}

- (id)getElement;

- (jint)getCount;

- (instancetype)initWithComGoogleCommonCollectTreeMultiset:(ComGoogleCommonCollectTreeMultiset *)outer$
            withComGoogleCommonCollectTreeMultiset_AvlNode:(ComGoogleCommonCollectTreeMultiset_AvlNode *)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeMultiset_$1_init() {}
#endif
#if !defined (_ComGoogleCommonCollectTreeMultiset_$2_) && (ComGoogleCommonCollectTreeMultiset_INCLUDE_ALL || ComGoogleCommonCollectTreeMultiset_$2_INCLUDE)
#define _ComGoogleCommonCollectTreeMultiset_$2_

@class ComGoogleCommonCollectTreeMultiset;
@class ComGoogleCommonCollectTreeMultiset_AvlNode;
@protocol ComGoogleCommonCollectMultiset_Entry;

#define JavaUtilIterator_RESTRICT 1
#define JavaUtilIterator_INCLUDE 1
#include "java/util/Iterator.h"


@interface ComGoogleCommonCollectTreeMultiset_$2 : NSObject < JavaUtilIterator > {
 @public
  ComGoogleCommonCollectTreeMultiset_AvlNode *current_;
  id<ComGoogleCommonCollectMultiset_Entry> prevEntry_;
}

- (jboolean)hasNext;

- (id<ComGoogleCommonCollectMultiset_Entry>)next;

- (void)remove;

- (instancetype)initWithComGoogleCommonCollectTreeMultiset:(ComGoogleCommonCollectTreeMultiset *)outer$;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeMultiset_$2_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTreeMultiset_$2, current_, ComGoogleCommonCollectTreeMultiset_AvlNode *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTreeMultiset_$2, prevEntry_, id<ComGoogleCommonCollectMultiset_Entry>)
#endif
#if !defined (_ComGoogleCommonCollectTreeMultiset_$3_) && (ComGoogleCommonCollectTreeMultiset_INCLUDE_ALL || ComGoogleCommonCollectTreeMultiset_$3_INCLUDE)
#define _ComGoogleCommonCollectTreeMultiset_$3_

@class ComGoogleCommonCollectTreeMultiset;
@class ComGoogleCommonCollectTreeMultiset_AvlNode;
@protocol ComGoogleCommonCollectMultiset_Entry;

#define JavaUtilIterator_RESTRICT 1
#define JavaUtilIterator_INCLUDE 1
#include "java/util/Iterator.h"


@interface ComGoogleCommonCollectTreeMultiset_$3 : NSObject < JavaUtilIterator > {
 @public
  ComGoogleCommonCollectTreeMultiset_AvlNode *current_;
  id<ComGoogleCommonCollectMultiset_Entry> prevEntry_;
}

- (jboolean)hasNext;

- (id<ComGoogleCommonCollectMultiset_Entry>)next;

- (void)remove;

- (instancetype)initWithComGoogleCommonCollectTreeMultiset:(ComGoogleCommonCollectTreeMultiset *)outer$;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeMultiset_$3_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTreeMultiset_$3, current_, ComGoogleCommonCollectTreeMultiset_AvlNode *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTreeMultiset_$3, prevEntry_, id<ComGoogleCommonCollectMultiset_Entry>)
#endif
