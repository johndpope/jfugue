//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLSyntaxErrorException.java
//

#ifndef _JavaSqlSQLSyntaxErrorException_H_
#define _JavaSqlSQLSyntaxErrorException_H_

@class JavaLangThrowable;

#import "JreEmulation.h"
#include "java/sql/SQLNonTransientException.h"

#define JavaSqlSQLSyntaxErrorException_serialVersionUID -1843832610477496053LL

@interface JavaSqlSQLSyntaxErrorException : JavaSqlSQLNonTransientException {
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

__attribute__((always_inline)) inline void JavaSqlSQLSyntaxErrorException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaSqlSQLSyntaxErrorException, serialVersionUID, jlong)

#endif // _JavaSqlSQLSyntaxErrorException_H_