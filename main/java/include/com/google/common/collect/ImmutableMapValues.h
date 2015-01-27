//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/collect/ImmutableMapValues.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectImmutableMapValues_RESTRICT
#define ComGoogleCommonCollectImmutableMapValues_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableMapValues_RESTRICT
#if !defined (_ComGoogleCommonCollectImmutableMapValues_) && (ComGoogleCommonCollectImmutableMapValues_INCLUDE_ALL || ComGoogleCommonCollectImmutableMapValues_INCLUDE)
#define _ComGoogleCommonCollectImmutableMapValues_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectUnmodifiableIterator;

#define ComGoogleCommonCollectImmutableCollection_RESTRICT 1
#define ComGoogleCommonCollectImmutableCollection_INCLUDE 1
#include "com/google/common/collect/ImmutableCollection.h"


@interface ComGoogleCommonCollectImmutableMapValues : ComGoogleCommonCollectImmutableCollection {
}

- (instancetype)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)map;

- (jint)size;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jboolean)containsWithId:(id)object;

- (jboolean)isPartialView;

- (ComGoogleCommonCollectImmutableList *)createAsList;

- (id)writeReplace;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableMapValues_init() {}
#endif
#if !defined (_ComGoogleCommonCollectImmutableMapValues_SerializedForm_) && (ComGoogleCommonCollectImmutableMapValues_INCLUDE_ALL || ComGoogleCommonCollectImmutableMapValues_SerializedForm_INCLUDE)
#define _ComGoogleCommonCollectImmutableMapValues_SerializedForm_

@class ComGoogleCommonCollectImmutableMap;

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectImmutableMapValues_SerializedForm_serialVersionUID 0LL

@interface ComGoogleCommonCollectImmutableMapValues_SerializedForm : NSObject < JavaIoSerializable > {
 @public
  ComGoogleCommonCollectImmutableMap *map_;
}

- (instancetype)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)map;

- (id)readResolve;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableMapValues_SerializedForm_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMapValues_SerializedForm, map_, ComGoogleCommonCollectImmutableMap *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableMapValues_SerializedForm, serialVersionUID, jlong)
#endif
#if !defined (_ComGoogleCommonCollectImmutableMapValues_$1_) && (ComGoogleCommonCollectImmutableMapValues_INCLUDE_ALL || ComGoogleCommonCollectImmutableMapValues_$1_INCLUDE)
#define _ComGoogleCommonCollectImmutableMapValues_$1_

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableMapValues;

#define ComGoogleCommonCollectImmutableAsList_RESTRICT 1
#define ComGoogleCommonCollectImmutableAsList_INCLUDE 1
#include "com/google/common/collect/ImmutableAsList.h"


@interface ComGoogleCommonCollectImmutableMapValues_$1 : ComGoogleCommonCollectImmutableAsList {
}

- (id)getWithInt:(jint)index;

- (ComGoogleCommonCollectImmutableCollection *)delegateCollection;

- (instancetype)initWithComGoogleCommonCollectImmutableMapValues:(ComGoogleCommonCollectImmutableMapValues *)outer$
                         withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)capture$0;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableMapValues_$1_init() {}
#endif
