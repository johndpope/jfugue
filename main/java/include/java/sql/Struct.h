//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/Struct.java
//

#ifndef _JavaSqlStruct_H_
#define _JavaSqlStruct_H_

@class IOSObjectArray;
@protocol JavaUtilMap;

#import "JreEmulation.h"

@protocol JavaSqlStruct < NSObject, JavaObject >

- (NSString *)getSQLTypeName;

- (IOSObjectArray *)getAttributes;

- (IOSObjectArray *)getAttributesWithJavaUtilMap:(id<JavaUtilMap>)theMap;

@end

__attribute__((always_inline)) inline void JavaSqlStruct_init() {}

#endif // _JavaSqlStruct_H_
