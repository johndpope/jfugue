//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/collect/TreeBasedTable.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectTreeBasedTable_RESTRICT
#define ComGoogleCommonCollectTreeBasedTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectTreeBasedTable_RESTRICT
#if !defined (_ComGoogleCommonCollectTreeBasedTable_) && (ComGoogleCommonCollectTreeBasedTable_INCLUDE_ALL || ComGoogleCommonCollectTreeBasedTable_INCLUDE)
#define _ComGoogleCommonCollectTreeBasedTable_

@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilSortedMap;
@protocol JavaUtilSortedSet;

#define ComGoogleCommonCollectStandardRowSortedTable_RESTRICT 1
#define ComGoogleCommonCollectStandardRowSortedTable_INCLUDE 1
#include "com/google/common/collect/StandardRowSortedTable.h"


#define ComGoogleCommonCollectTreeBasedTable_serialVersionUID 0LL

@interface ComGoogleCommonCollectTreeBasedTable : ComGoogleCommonCollectStandardRowSortedTable {
}

+ (ComGoogleCommonCollectTreeBasedTable *)create;

+ (ComGoogleCommonCollectTreeBasedTable *)createWithJavaUtilComparator:(id<JavaUtilComparator>)rowComparator
                                                withJavaUtilComparator:(id<JavaUtilComparator>)columnComparator;

+ (ComGoogleCommonCollectTreeBasedTable *)createWithComGoogleCommonCollectTreeBasedTable:(ComGoogleCommonCollectTreeBasedTable *)table;

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)rowComparator
                    withJavaUtilComparator:(id<JavaUtilComparator>)columnComparator;

- (id<JavaUtilComparator>)rowComparator;

- (id<JavaUtilComparator>)columnComparator;

- (id<JavaUtilSortedMap>)rowWithId:(id)rowKey;

- (id<JavaUtilSortedSet>)rowKeySet;

- (id<JavaUtilSortedMap>)rowMap;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (jboolean)containsValueWithId:(id)value;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (jboolean)isEqual:(id)obj;

- (id)removeWithId:(id)rowKey
            withId:(id)columnKey;

- (id<JavaUtilIterator>)createColumnKeyIterator;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeBasedTable_init() {}
FOUNDATION_EXPORT ComGoogleCommonCollectTreeBasedTable *ComGoogleCommonCollectTreeBasedTable_create();
FOUNDATION_EXPORT ComGoogleCommonCollectTreeBasedTable *ComGoogleCommonCollectTreeBasedTable_createWithJavaUtilComparator_withJavaUtilComparator_(id<JavaUtilComparator> rowComparator, id<JavaUtilComparator> columnComparator);
FOUNDATION_EXPORT ComGoogleCommonCollectTreeBasedTable *ComGoogleCommonCollectTreeBasedTable_createWithComGoogleCommonCollectTreeBasedTable_(ComGoogleCommonCollectTreeBasedTable *table);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectTreeBasedTable, serialVersionUID, jlong)
#endif
#if !defined (_ComGoogleCommonCollectTreeBasedTable_Factory_) && (ComGoogleCommonCollectTreeBasedTable_INCLUDE_ALL || ComGoogleCommonCollectTreeBasedTable_Factory_INCLUDE)
#define _ComGoogleCommonCollectTreeBasedTable_Factory_

@class JavaUtilTreeMap;
@protocol JavaUtilComparator;

#define ComGoogleCommonBaseSupplier_RESTRICT 1
#define ComGoogleCommonBaseSupplier_INCLUDE 1
#include "com/google/common/base/Supplier.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectTreeBasedTable_Factory_serialVersionUID 0LL

@interface ComGoogleCommonCollectTreeBasedTable_Factory : NSObject < ComGoogleCommonBaseSupplier, JavaIoSerializable > {
 @public
  id<JavaUtilComparator> comparator_;
}

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (JavaUtilTreeMap *)get;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeBasedTable_Factory_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTreeBasedTable_Factory, comparator_, id<JavaUtilComparator>)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectTreeBasedTable_Factory, serialVersionUID, jlong)
#endif
#if !defined (_ComGoogleCommonCollectTreeBasedTable_TreeRow_) && (ComGoogleCommonCollectTreeBasedTable_INCLUDE_ALL || ComGoogleCommonCollectTreeBasedTable_TreeRow_INCLUDE)
#define _ComGoogleCommonCollectTreeBasedTable_TreeRow_

@class ComGoogleCommonCollectTreeBasedTable;
@protocol JavaUtilComparator;

#define ComGoogleCommonCollectStandardTable_RESTRICT 1
#define ComGoogleCommonCollectStandardTable_Row_INCLUDE 1
#include "com/google/common/collect/StandardTable.h"

#define JavaUtilSortedMap_RESTRICT 1
#define JavaUtilSortedMap_INCLUDE 1
#include "java/util/SortedMap.h"


@interface ComGoogleCommonCollectTreeBasedTable_TreeRow : ComGoogleCommonCollectStandardTable_Row < JavaUtilSortedMap > {
 @public
  id lowerBound_;
  id upperBound_;
  id<JavaUtilSortedMap> wholeRow__;
}

- (instancetype)initWithComGoogleCommonCollectTreeBasedTable:(ComGoogleCommonCollectTreeBasedTable *)outer$
                                                      withId:(id)rowKey;

- (instancetype)initWithComGoogleCommonCollectTreeBasedTable:(ComGoogleCommonCollectTreeBasedTable *)outer$
                                                      withId:(id)rowKey
                                                      withId:(id)lowerBound
                                                      withId:(id)upperBound;

- (id<JavaUtilComparator>)comparator;

- (jint)compareWithId:(id)a
               withId:(id)b;

- (jboolean)rangeContainsWithId:(id)o;

- (id<JavaUtilSortedMap>)subMapWithId:(id)fromKey
                               withId:(id)toKey;

- (id<JavaUtilSortedMap>)headMapWithId:(id)toKey;

- (id<JavaUtilSortedMap>)tailMapWithId:(id)fromKey;

- (id)firstKey;

- (id)lastKey;

- (id<JavaUtilSortedMap>)wholeRow;

- (id<JavaUtilSortedMap>)backingRowMap;

- (id<JavaUtilSortedMap>)computeBackingRowMap;

- (void)maintainEmptyInvariant;

- (jboolean)containsKeyWithId:(id)key;

- (id)putWithId:(id)key
         withId:(id)value;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeBasedTable_TreeRow_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTreeBasedTable_TreeRow, lowerBound_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTreeBasedTable_TreeRow, upperBound_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTreeBasedTable_TreeRow, wholeRow__, id<JavaUtilSortedMap>)
#endif
#if !defined (_ComGoogleCommonCollectTreeBasedTable_$1_) && (ComGoogleCommonCollectTreeBasedTable_INCLUDE_ALL || ComGoogleCommonCollectTreeBasedTable_$1_INCLUDE)
#define _ComGoogleCommonCollectTreeBasedTable_$1_

@protocol JavaUtilIterator;
@protocol JavaUtilMap;

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"


@interface ComGoogleCommonCollectTreeBasedTable_$1 : NSObject < ComGoogleCommonBaseFunction > {
}

- (id<JavaUtilIterator>)applyWithId:(id<JavaUtilMap>)input;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeBasedTable_$1_init() {}
#endif
#if !defined (_ComGoogleCommonCollectTreeBasedTable_$2_) && (ComGoogleCommonCollectTreeBasedTable_INCLUDE_ALL || ComGoogleCommonCollectTreeBasedTable_$2_INCLUDE)
#define _ComGoogleCommonCollectTreeBasedTable_$2_

@protocol JavaUtilComparator;
@protocol JavaUtilIterator;

#define ComGoogleCommonCollectAbstractIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIterator.h"


@interface ComGoogleCommonCollectTreeBasedTable_$2 : ComGoogleCommonCollectAbstractIterator {
 @public
  id lastValue_;
}

- (id)computeNext;

- (instancetype)initWithJavaUtilIterator:(id<JavaUtilIterator>)capture$0
                  withJavaUtilComparator:(id<JavaUtilComparator>)capture$1;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectTreeBasedTable_$2_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTreeBasedTable_$2, lastValue_, id)
#endif
