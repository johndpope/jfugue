//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/com/google/android/collect/Maps.java
//

#ifndef _ComGoogleAndroidCollectMaps_H_
#define _ComGoogleAndroidCollectMaps_H_

@class AndroidUtilArrayMap;
@class JavaUtilHashMap;

#import "JreEmulation.h"

@interface ComGoogleAndroidCollectMaps : NSObject {
}

+ (JavaUtilHashMap *)newHashMap OBJC_METHOD_FAMILY_NONE;

+ (AndroidUtilArrayMap *)newArrayMap OBJC_METHOD_FAMILY_NONE;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleAndroidCollectMaps_init() {}
FOUNDATION_EXPORT JavaUtilHashMap *ComGoogleAndroidCollectMaps_newHashMap();
FOUNDATION_EXPORT AndroidUtilArrayMap *ComGoogleAndroidCollectMaps_newArrayMap();

#endif // _ComGoogleAndroidCollectMaps_H_
