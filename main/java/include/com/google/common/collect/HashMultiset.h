//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/collect/HashMultiset.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectHashMultiset_RESTRICT
#define ComGoogleCommonCollectHashMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectHashMultiset_RESTRICT
#if !defined (_ComGoogleCommonCollectHashMultiset_) && (ComGoogleCommonCollectHashMultiset_INCLUDE_ALL || ComGoogleCommonCollectHashMultiset_INCLUDE)
#define _ComGoogleCommonCollectHashMultiset_

@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@protocol JavaLangIterable;

#define ComGoogleCommonCollectAbstractMapBasedMultiset_RESTRICT 1
#define ComGoogleCommonCollectAbstractMapBasedMultiset_INCLUDE 1
#include "com/google/common/collect/AbstractMapBasedMultiset.h"


#define ComGoogleCommonCollectHashMultiset_serialVersionUID 0LL

@interface ComGoogleCommonCollectHashMultiset : ComGoogleCommonCollectAbstractMapBasedMultiset {
}

+ (ComGoogleCommonCollectHashMultiset *)create;

+ (ComGoogleCommonCollectHashMultiset *)createWithInt:(jint)distinctElements;

+ (ComGoogleCommonCollectHashMultiset *)createWithJavaLangIterable:(id<JavaLangIterable>)elements;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectHashMultiset_init() {}
FOUNDATION_EXPORT ComGoogleCommonCollectHashMultiset *ComGoogleCommonCollectHashMultiset_create();
FOUNDATION_EXPORT ComGoogleCommonCollectHashMultiset *ComGoogleCommonCollectHashMultiset_createWithInt_(jint distinctElements);
FOUNDATION_EXPORT ComGoogleCommonCollectHashMultiset *ComGoogleCommonCollectHashMultiset_createWithJavaLangIterable_(id<JavaLangIterable> elements);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectHashMultiset, serialVersionUID, jlong)
#endif
