//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLTransactionRollbackException.java
//

#ifndef _JavaSqlSQLTransactionRollbackException_H_
#define _JavaSqlSQLTransactionRollbackException_H_

@class JavaLangThrowable;

#import "JreEmulation.h"
#include "java/sql/SQLTransientException.h"

#define JavaSqlSQLTransactionRollbackException_serialVersionUID 5246680841170837229LL

@interface JavaSqlSQLTransactionRollbackException : JavaSqlSQLTransientException {
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

__attribute__((always_inline)) inline void JavaSqlSQLTransactionRollbackException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaSqlSQLTransactionRollbackException, serialVersionUID, jlong)

#endif // _JavaSqlSQLTransactionRollbackException_H_
