//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/StringWriter.java
//

#ifndef _JavaIoStringWriter_H_
#define _JavaIoStringWriter_H_

@class IOSCharArray;
@class JavaLangStringBuffer;
@protocol JavaLangCharSequence;

#import "JreEmulation.h"
#include "java/io/Writer.h"

@interface JavaIoStringWriter : JavaIoWriter {
}

- (instancetype)init;

- (instancetype)initWithInt:(jint)initialSize;

- (void)close;

- (void)flush;

- (JavaLangStringBuffer *)getBuffer;

- (NSString *)description;

- (void)writeWithCharArray:(IOSCharArray *)chars
                   withInt:(jint)offset
                   withInt:(jint)count;

- (void)writeWithInt:(jint)oneChar;

- (void)writeWithNSString:(NSString *)str;

- (void)writeWithNSString:(NSString *)str
                  withInt:(jint)offset
                  withInt:(jint)count;

- (JavaIoStringWriter *)appendWithChar:(jchar)c;

- (JavaIoStringWriter *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq;

- (JavaIoStringWriter *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                               withInt:(jint)start
                                               withInt:(jint)end;

@end

__attribute__((always_inline)) inline void JavaIoStringWriter_init() {}

#endif // _JavaIoStringWriter_H_
