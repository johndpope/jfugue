//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/reflect/Element.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonReflectElement_RESTRICT
#define ComGoogleCommonReflectElement_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonReflectElement_RESTRICT
#if !defined (_ComGoogleCommonReflectElement_) && (ComGoogleCommonReflectElement_INCLUDE_ALL || ComGoogleCommonReflectElement_INCLUDE)
#define _ComGoogleCommonReflectElement_

@class IOSClass;
@class IOSObjectArray;
@protocol JavaLangAnnotationAnnotation;

#define JavaLangReflectAccessibleObject_RESTRICT 1
#define JavaLangReflectAccessibleObject_INCLUDE 1
#include "java/lang/reflect/AccessibleObject.h"

#define JavaLangReflectMember_RESTRICT 1
#define JavaLangReflectMember_INCLUDE 1
#include "java/lang/reflect/Member.h"


@interface ComGoogleCommonReflectElement : JavaLangReflectAccessibleObject < JavaLangReflectMember > {
}

- (instancetype)initWithJavaLangReflectAccessibleObject:(JavaLangReflectAccessibleObject<JavaLangReflectMember> *)member;

- (jboolean)isAnnotationPresentWithIOSClass:(IOSClass *)annotationClass;

- (id)getAnnotationWithIOSClass:(IOSClass *)annotationClass;

- (IOSObjectArray *)getAnnotations;

- (IOSObjectArray *)getDeclaredAnnotations;

- (void)setAccessibleWithBoolean:(jboolean)flag;

- (jboolean)isAccessible;

- (IOSClass *)getDeclaringClass;

- (NSString *)getName;

- (jint)getModifiers;

- (jboolean)isSynthetic;

- (jboolean)isPublic;

- (jboolean)isProtected;

- (jboolean)isPackagePrivate;

- (jboolean)isPrivate;

- (jboolean)isStatic;

- (jboolean)isFinal;

- (jboolean)isAbstract;

- (jboolean)isNative;

- (jboolean)isSynchronized;

- (jboolean)isVolatile;

- (jboolean)isTransient;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonReflectElement_init() {}
#endif
