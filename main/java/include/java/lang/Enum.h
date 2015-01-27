//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/Enum.java
//

#ifndef _JavaLangEnum_H_
#define _JavaLangEnum_H_

@class IOSClass;
@class IOSObjectArray;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "java/lang/Comparable.h"
#include "libcore/util/BasicLruCache.h"

#define JavaLangEnum_serialVersionUID -4300926546619394005LL

@interface JavaLangEnum : NSObject < JavaIoSerializable, JavaLangComparable > {
}

- (instancetype)initWithNSString:(NSString *)name
                         withInt:(jint)ordinal;

- (NSString *)name;

- (jint)ordinal;

- (NSString *)description;

- (jboolean)isEqual:(id)other;

- (NSUInteger)hash;

- (id)clone;

- (jint)compareToWithId:(JavaLangEnum *)o;

- (IOSClass *)getDeclaringClass;

+ (id)valueOfWithIOSClass:(IOSClass *)enumType
             withNSString:(NSString *)name;

+ (IOSObjectArray *)getSharedConstantsWithIOSClass:(IOSClass *)enumType;

- (void)dealloc;


@end

FOUNDATION_EXPORT BOOL JavaLangEnum_initialized;
J2OBJC_STATIC_INIT(JavaLangEnum)
FOUNDATION_EXPORT id JavaLangEnum_valueOfWithIOSClass_withNSString_(IOSClass *enumType, NSString *name);
FOUNDATION_EXPORT IOSObjectArray *JavaLangEnum_getSharedConstantsWithIOSClass_(IOSClass *enumType);

J2OBJC_STATIC_FIELD_GETTER(JavaLangEnum, serialVersionUID, jlong)

FOUNDATION_EXPORT LibcoreUtilBasicLruCache *JavaLangEnum_sharedConstantsCache_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangEnum, sharedConstantsCache_, LibcoreUtilBasicLruCache *)

@interface JavaLangEnum_$1 : LibcoreUtilBasicLruCache {
}

- (IOSObjectArray *)createWithId:(IOSClass *)enumType;

- (instancetype)initWithInt:(jint)arg$0;

@end

__attribute__((always_inline)) inline void JavaLangEnum_$1_init() {}

#endif // _JavaLangEnum_H_
