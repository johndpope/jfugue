//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/base/Throwables.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonBaseThrowables_RESTRICT
#define ComGoogleCommonBaseThrowables_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBaseThrowables_RESTRICT
#if !defined (_ComGoogleCommonBaseThrowables_) && (ComGoogleCommonBaseThrowables_INCLUDE_ALL || ComGoogleCommonBaseThrowables_INCLUDE)
#define _ComGoogleCommonBaseThrowables_

@class IOSClass;
@class JavaLangRuntimeException;
@class JavaLangThrowable;
@protocol JavaUtilList;


@interface ComGoogleCommonBaseThrowables : NSObject {
}

+ (void)propagateIfInstanceOfWithJavaLangThrowable:(JavaLangThrowable *)throwable
                                      withIOSClass:(IOSClass *)declaredType;

+ (void)propagateIfPossibleWithJavaLangThrowable:(JavaLangThrowable *)throwable;

+ (void)propagateIfPossibleWithJavaLangThrowable:(JavaLangThrowable *)throwable
                                    withIOSClass:(IOSClass *)declaredType;

+ (void)propagateIfPossibleWithJavaLangThrowable:(JavaLangThrowable *)throwable
                                    withIOSClass:(IOSClass *)declaredType1
                                    withIOSClass:(IOSClass *)declaredType2;

+ (JavaLangRuntimeException *)propagateWithJavaLangThrowable:(JavaLangThrowable *)throwable;

+ (JavaLangThrowable *)getRootCauseWithJavaLangThrowable:(JavaLangThrowable *)throwable;

+ (id<JavaUtilList>)getCausalChainWithJavaLangThrowable:(JavaLangThrowable *)throwable;

+ (NSString *)getStackTraceAsStringWithJavaLangThrowable:(JavaLangThrowable *)throwable;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBaseThrowables_init() {}
FOUNDATION_EXPORT void ComGoogleCommonBaseThrowables_propagateIfInstanceOfWithJavaLangThrowable_withIOSClass_(JavaLangThrowable *throwable, IOSClass *declaredType);
FOUNDATION_EXPORT void ComGoogleCommonBaseThrowables_propagateIfPossibleWithJavaLangThrowable_(JavaLangThrowable *throwable);
FOUNDATION_EXPORT void ComGoogleCommonBaseThrowables_propagateIfPossibleWithJavaLangThrowable_withIOSClass_(JavaLangThrowable *throwable, IOSClass *declaredType);
FOUNDATION_EXPORT void ComGoogleCommonBaseThrowables_propagateIfPossibleWithJavaLangThrowable_withIOSClass_withIOSClass_(JavaLangThrowable *throwable, IOSClass *declaredType1, IOSClass *declaredType2);
FOUNDATION_EXPORT JavaLangRuntimeException *ComGoogleCommonBaseThrowables_propagateWithJavaLangThrowable_(JavaLangThrowable *throwable);
FOUNDATION_EXPORT JavaLangThrowable *ComGoogleCommonBaseThrowables_getRootCauseWithJavaLangThrowable_(JavaLangThrowable *throwable);
FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonBaseThrowables_getCausalChainWithJavaLangThrowable_(JavaLangThrowable *throwable);
FOUNDATION_EXPORT NSString *ComGoogleCommonBaseThrowables_getStackTraceAsStringWithJavaLangThrowable_(JavaLangThrowable *throwable);
#endif
