//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/collect/EnumHashBiMap.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectEnumHashBiMap_RESTRICT
#define ComGoogleCommonCollectEnumHashBiMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectEnumHashBiMap_RESTRICT
#if !defined (_ComGoogleCommonCollectEnumHashBiMap_) && (ComGoogleCommonCollectEnumHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectEnumHashBiMap_INCLUDE)
#define _ComGoogleCommonCollectEnumHashBiMap_

@class IOSClass;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@class JavaLangEnum;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectAbstractBiMap_RESTRICT 1
#define ComGoogleCommonCollectAbstractBiMap_INCLUDE 1
#include "com/google/common/collect/AbstractBiMap.h"


#define ComGoogleCommonCollectEnumHashBiMap_serialVersionUID 0LL

@interface ComGoogleCommonCollectEnumHashBiMap : ComGoogleCommonCollectAbstractBiMap {
}

+ (ComGoogleCommonCollectEnumHashBiMap *)createWithIOSClass:(IOSClass *)keyType;

+ (ComGoogleCommonCollectEnumHashBiMap *)createWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id)checkKeyWithId:(JavaLangEnum *)key;

- (id)putWithId:(JavaLangEnum *)key
         withId:(id)value;

- (id)forcePutWithId:(JavaLangEnum *)key
              withId:(id)value;

- (IOSClass *)keyType;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectEnumHashBiMap_init() {}
FOUNDATION_EXPORT ComGoogleCommonCollectEnumHashBiMap *ComGoogleCommonCollectEnumHashBiMap_createWithIOSClass_(IOSClass *keyType);
FOUNDATION_EXPORT ComGoogleCommonCollectEnumHashBiMap *ComGoogleCommonCollectEnumHashBiMap_createWithJavaUtilMap_(id<JavaUtilMap> map);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectEnumHashBiMap, serialVersionUID, jlong)
#endif