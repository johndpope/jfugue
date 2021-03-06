//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLFeatureNotSupportedException.java
//

#ifndef _JavaSqlSQLFeatureNotSupportedException_H_
#define _JavaSqlSQLFeatureNotSupportedException_H_

@class JavaLangThrowable;

#import "JreEmulation.h"
#include "java/sql/SQLNonTransientException.h"

#define JavaSqlSQLFeatureNotSupportedException_serialVersionUID -1026510870282316051LL

@interface JavaSqlSQLFeatureNotSupportedException : JavaSqlSQLNonTransientException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)reason;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode
           withJavaLangThrowable:(JavaLangThrowable *)cause;


@end

__attribute__((always_inline)) inline void JavaSqlSQLFeatureNotSupportedException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaSqlSQLFeatureNotSupportedException, serialVersionUID, jlong)

#endif // _JavaSqlSQLFeatureNotSupportedException_H_
