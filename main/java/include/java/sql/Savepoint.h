//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/Savepoint.java
//

#ifndef _JavaSqlSavepoint_H_
#define _JavaSqlSavepoint_H_

#import "JreEmulation.h"

@protocol JavaSqlSavepoint < NSObject, JavaObject >

- (jint)getSavepointId;

- (NSString *)getSavepointName;

@end

__attribute__((always_inline)) inline void JavaSqlSavepoint_init() {}

#endif // _JavaSqlSavepoint_H_