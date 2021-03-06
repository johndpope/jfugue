//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/base/Enums.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonBaseEnums_RESTRICT
#define ComGoogleCommonBaseEnums_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBaseEnums_RESTRICT
#if !defined (_ComGoogleCommonBaseEnums_) && (ComGoogleCommonBaseEnums_INCLUDE_ALL || ComGoogleCommonBaseEnums_INCLUDE)
#define _ComGoogleCommonBaseEnums_

@class ComGoogleCommonBaseOptional;
@class IOSClass;
@class JavaLangEnum;
@class JavaLangReflectField;
@protocol ComGoogleCommonBaseFunction;


@interface ComGoogleCommonBaseEnums : NSObject {
}

+ (JavaLangReflectField *)getFieldWithJavaLangEnum:(JavaLangEnum *)enumValue;

+ (id<ComGoogleCommonBaseFunction>)valueOfFunctionWithIOSClass:(IOSClass *)enumClass;

+ (ComGoogleCommonBaseOptional *)getIfPresentWithIOSClass:(IOSClass *)enumClass
                                             withNSString:(NSString *)value;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBaseEnums_init() {}
FOUNDATION_EXPORT JavaLangReflectField *ComGoogleCommonBaseEnums_getFieldWithJavaLangEnum_(JavaLangEnum *enumValue);
FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonBaseEnums_valueOfFunctionWithIOSClass_(IOSClass *enumClass);
FOUNDATION_EXPORT ComGoogleCommonBaseOptional *ComGoogleCommonBaseEnums_getIfPresentWithIOSClass_withNSString_(IOSClass *enumClass, NSString *value);
#endif
#if !defined (_ComGoogleCommonBaseEnums_ValueOfFunction_) && (ComGoogleCommonBaseEnums_INCLUDE_ALL || ComGoogleCommonBaseEnums_ValueOfFunction_INCLUDE)
#define _ComGoogleCommonBaseEnums_ValueOfFunction_

@class IOSClass;
@class JavaLangEnum;

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonBaseEnums_ValueOfFunction_serialVersionUID 0LL

@interface ComGoogleCommonBaseEnums_ValueOfFunction : NSObject < ComGoogleCommonBaseFunction, JavaIoSerializable > {
}

- (id)applyWithId:(NSString *)value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBaseEnums_ValueOfFunction_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseEnums_ValueOfFunction, serialVersionUID, jlong)
#endif
