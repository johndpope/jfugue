//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLInput.java
//

#ifndef _JavaSqlSQLInput_H_
#define _JavaSqlSQLInput_H_

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaIoReader;
@class JavaMathBigDecimal;
@class JavaNetURL;
@class JavaSqlDate;
@class JavaSqlTime;
@class JavaSqlTimestamp;
@protocol JavaSqlArray;
@protocol JavaSqlBlob;
@protocol JavaSqlClob;
@protocol JavaSqlNClob;
@protocol JavaSqlRef;
@protocol JavaSqlRowId;
@protocol JavaSqlSQLXML;

#import "JreEmulation.h"

@protocol JavaSqlSQLInput < NSObject, JavaObject >

- (NSString *)readString;

- (jboolean)readBoolean;

- (jbyte)readByte;

- (jshort)readShort;

- (jint)readInt;

- (jlong)readLong;

- (jfloat)readFloat;

- (jdouble)readDouble;

- (JavaMathBigDecimal *)readBigDecimal;

- (IOSByteArray *)readBytes;

- (JavaSqlDate *)readDate;

- (JavaSqlTime *)readTime;

- (JavaSqlTimestamp *)readTimestamp;

- (JavaIoReader *)readCharacterStream;

- (JavaIoInputStream *)readAsciiStream;

- (JavaIoInputStream *)readBinaryStream;

- (id)readObject;

- (id<JavaSqlRef>)readRef;

- (id<JavaSqlBlob>)readBlob;

- (id<JavaSqlClob>)readClob;

- (id<JavaSqlArray>)readArray;

- (jboolean)wasNull;

- (JavaNetURL *)readURL;

- (id<JavaSqlNClob>)readNClob;

- (NSString *)readNString;

- (id<JavaSqlSQLXML>)readSQLXML;

- (id<JavaSqlRowId>)readRowId;

@end

__attribute__((always_inline)) inline void JavaSqlSQLInput_init() {}

#endif // _JavaSqlSQLInput_H_
