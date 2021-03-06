//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/collect/ImmutableEnumSet.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectImmutableEnumSet_RESTRICT
#define ComGoogleCommonCollectImmutableEnumSet_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableEnumSet_RESTRICT
#if !defined (_ComGoogleCommonCollectImmutableEnumSet_) && (ComGoogleCommonCollectImmutableEnumSet_INCLUDE_ALL || ComGoogleCommonCollectImmutableEnumSet_INCLUDE)
#define _ComGoogleCommonCollectImmutableEnumSet_

@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;
@class JavaUtilEnumSet;
@protocol JavaUtilCollection;

#define ComGoogleCommonCollectImmutableSet_RESTRICT 1
#define ComGoogleCommonCollectImmutableSet_INCLUDE 1
#include "com/google/common/collect/ImmutableSet.h"


@interface ComGoogleCommonCollectImmutableEnumSet : ComGoogleCommonCollectImmutableSet {
}

+ (ComGoogleCommonCollectImmutableSet *)asImmutableWithJavaUtilEnumSet:(JavaUtilEnumSet *)set;

- (jboolean)isPartialView;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jint)size;

- (jboolean)containsWithId:(id)object;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)isEmpty;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

- (id)writeReplace;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableEnumSet_init() {}
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet *ComGoogleCommonCollectImmutableEnumSet_asImmutableWithJavaUtilEnumSet_(JavaUtilEnumSet *set);
#endif
#if !defined (_ComGoogleCommonCollectImmutableEnumSet_EnumSerializedForm_) && (ComGoogleCommonCollectImmutableEnumSet_INCLUDE_ALL || ComGoogleCommonCollectImmutableEnumSet_EnumSerializedForm_INCLUDE)
#define _ComGoogleCommonCollectImmutableEnumSet_EnumSerializedForm_

@class JavaUtilEnumSet;

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectImmutableEnumSet_EnumSerializedForm_serialVersionUID 0LL

@interface ComGoogleCommonCollectImmutableEnumSet_EnumSerializedForm : NSObject < JavaIoSerializable > {
 @public
  JavaUtilEnumSet *delegate_;
}

- (instancetype)initWithJavaUtilEnumSet:(JavaUtilEnumSet *)delegate;

- (id)readResolve;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableEnumSet_EnumSerializedForm_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableEnumSet_EnumSerializedForm, delegate_, JavaUtilEnumSet *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableEnumSet_EnumSerializedForm, serialVersionUID, jlong)
#endif
