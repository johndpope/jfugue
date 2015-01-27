//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/collect/WellBehavedMap.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectWellBehavedMap_RESTRICT
#define ComGoogleCommonCollectWellBehavedMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectWellBehavedMap_RESTRICT
#if !defined (_ComGoogleCommonCollectWellBehavedMap_) && (ComGoogleCommonCollectWellBehavedMap_INCLUDE_ALL || ComGoogleCommonCollectWellBehavedMap_INCLUDE)
#define _ComGoogleCommonCollectWellBehavedMap_

@protocol JavaUtilMap;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectForwardingMap_RESTRICT 1
#define ComGoogleCommonCollectForwardingMap_INCLUDE 1
#include "com/google/common/collect/ForwardingMap.h"


@interface ComGoogleCommonCollectWellBehavedMap : ComGoogleCommonCollectForwardingMap {
}

+ (ComGoogleCommonCollectWellBehavedMap *)wrapWithJavaUtilMap:(id<JavaUtilMap>)delegate;

- (id<JavaUtilMap>)delegate;

- (id<JavaUtilSet>)entrySet;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectWellBehavedMap_init() {}
FOUNDATION_EXPORT ComGoogleCommonCollectWellBehavedMap *ComGoogleCommonCollectWellBehavedMap_wrapWithJavaUtilMap_(id<JavaUtilMap> delegate);
#endif
#if !defined (_ComGoogleCommonCollectWellBehavedMap_EntrySet_) && (ComGoogleCommonCollectWellBehavedMap_INCLUDE_ALL || ComGoogleCommonCollectWellBehavedMap_EntrySet_INCLUDE)
#define _ComGoogleCommonCollectWellBehavedMap_EntrySet_

@class ComGoogleCommonCollectWellBehavedMap;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_EntrySet_INCLUDE 1
#include "com/google/common/collect/Maps.h"


@interface ComGoogleCommonCollectWellBehavedMap_EntrySet : ComGoogleCommonCollectMaps_EntrySet {
}

- (id<JavaUtilMap>)map;

- (id<JavaUtilIterator>)iterator;

- (instancetype)initWithComGoogleCommonCollectWellBehavedMap:(ComGoogleCommonCollectWellBehavedMap *)outer$;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectWellBehavedMap_EntrySet_init() {}
#endif
#if !defined (_ComGoogleCommonCollectWellBehavedMap_EntrySet_$1_) && (ComGoogleCommonCollectWellBehavedMap_INCLUDE_ALL || ComGoogleCommonCollectWellBehavedMap_EntrySet_$1_INCLUDE)
#define _ComGoogleCommonCollectWellBehavedMap_EntrySet_$1_

@class ComGoogleCommonCollectWellBehavedMap_EntrySet;
@protocol JavaUtilIterator;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectTransformedIterator_RESTRICT 1
#define ComGoogleCommonCollectTransformedIterator_INCLUDE 1
#include "com/google/common/collect/TransformedIterator.h"


@interface ComGoogleCommonCollectWellBehavedMap_EntrySet_$1 : ComGoogleCommonCollectTransformedIterator {
}

- (id<JavaUtilMap_Entry>)transformWithId:(id)key;

- (instancetype)initWithComGoogleCommonCollectWellBehavedMap_EntrySet:(ComGoogleCommonCollectWellBehavedMap_EntrySet *)outer$
                                                 withJavaUtilIterator:(id<JavaUtilIterator>)arg$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectWellBehavedMap_EntrySet_$1_init() {}
#endif
#if !defined (_ComGoogleCommonCollectWellBehavedMap_EntrySet_$1_$1_) && (ComGoogleCommonCollectWellBehavedMap_INCLUDE_ALL || ComGoogleCommonCollectWellBehavedMap_EntrySet_$1_$1_INCLUDE)
#define _ComGoogleCommonCollectWellBehavedMap_EntrySet_$1_$1_

@class ComGoogleCommonCollectWellBehavedMap_EntrySet_$1;

#define ComGoogleCommonCollectAbstractMapEntry_RESTRICT 1
#define ComGoogleCommonCollectAbstractMapEntry_INCLUDE 1
#include "com/google/common/collect/AbstractMapEntry.h"


@interface ComGoogleCommonCollectWellBehavedMap_EntrySet_$1_$1 : ComGoogleCommonCollectAbstractMapEntry {
}

- (id)getKey;

- (id)getValue;

- (id)setValueWithId:(id)value;

- (instancetype)initWithComGoogleCommonCollectWellBehavedMap_EntrySet_$1:(ComGoogleCommonCollectWellBehavedMap_EntrySet_$1 *)outer$
                                                                  withId:(id)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectWellBehavedMap_EntrySet_$1_$1_init() {}
#endif
