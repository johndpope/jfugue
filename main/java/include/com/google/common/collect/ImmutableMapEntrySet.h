//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/collect/ImmutableMapEntrySet.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectImmutableMapEntrySet_RESTRICT
#define ComGoogleCommonCollectImmutableMapEntrySet_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableMapEntrySet_RESTRICT
#if !defined (_ComGoogleCommonCollectImmutableMapEntrySet_) && (ComGoogleCommonCollectImmutableMapEntrySet_INCLUDE_ALL || ComGoogleCommonCollectImmutableMapEntrySet_INCLUDE)
#define _ComGoogleCommonCollectImmutableMapEntrySet_

@class ComGoogleCommonCollectImmutableMap;

#define ComGoogleCommonCollectImmutableSet_RESTRICT 1
#define ComGoogleCommonCollectImmutableSet_INCLUDE 1
#include "com/google/common/collect/ImmutableSet.h"


@interface ComGoogleCommonCollectImmutableMapEntrySet : ComGoogleCommonCollectImmutableSet {
}

- (instancetype)init;

- (ComGoogleCommonCollectImmutableMap *)map;

- (jint)size;

- (jboolean)containsWithId:(id)object;

- (jboolean)isPartialView;

- (id)writeReplace;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableMapEntrySet_init() {}
#endif
#if !defined (_ComGoogleCommonCollectImmutableMapEntrySet_EntrySetSerializedForm_) && (ComGoogleCommonCollectImmutableMapEntrySet_INCLUDE_ALL || ComGoogleCommonCollectImmutableMapEntrySet_EntrySetSerializedForm_INCLUDE)
#define _ComGoogleCommonCollectImmutableMapEntrySet_EntrySetSerializedForm_

@class ComGoogleCommonCollectImmutableMap;

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectImmutableMapEntrySet_EntrySetSerializedForm_serialVersionUID 0LL

@interface ComGoogleCommonCollectImmutableMapEntrySet_EntrySetSerializedForm : NSObject < JavaIoSerializable > {
 @public
  ComGoogleCommonCollectImmutableMap *map_;
}

- (instancetype)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)map;

- (id)readResolve;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableMapEntrySet_EntrySetSerializedForm_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMapEntrySet_EntrySetSerializedForm, map_, ComGoogleCommonCollectImmutableMap *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableMapEntrySet_EntrySetSerializedForm, serialVersionUID, jlong)
#endif