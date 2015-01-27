//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/util/logging/IOSLogHandler.java
//

#ifndef _JavaUtilLoggingIOSLogHandler_H_
#define _JavaUtilLoggingIOSLogHandler_H_

@class JavaUtilLoggingLogRecord;

#import "JreEmulation.h"
#include "java/util/logging/Formatter.h"
#include "java/util/logging/Handler.h"

@interface JavaUtilLoggingIOSLogHandler : JavaUtilLoggingHandler {
}

- (instancetype)init;

- (void)close;

- (void)flush;

- (void)publishWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;

@end

__attribute__((always_inline)) inline void JavaUtilLoggingIOSLogHandler_init() {}

FOUNDATION_EXPORT NSString *JavaUtilLoggingIOSLogHandler_IOS_LOG_MANAGER_DEFAULTS_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLoggingIOSLogHandler, IOS_LOG_MANAGER_DEFAULTS_, NSString *)

FOUNDATION_EXPORT NSString *JavaUtilLoggingIOSLogHandler_ASLCLIENT_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLoggingIOSLogHandler, ASLCLIENT_, NSString *)

@interface JavaUtilLoggingIOSLogHandler_IOSLogFormatter : JavaUtilLoggingFormatter {
}

- (NSString *)formatWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void JavaUtilLoggingIOSLogHandler_IOSLogFormatter_init() {}

#endif // _JavaUtilLoggingIOSLogHandler_H_
