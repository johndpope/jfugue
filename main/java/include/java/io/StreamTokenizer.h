//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/StreamTokenizer.java
//

#ifndef _JavaIoStreamTokenizer_H_
#define _JavaIoStreamTokenizer_H_

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaIoReader;

#import "JreEmulation.h"

#define JavaIoStreamTokenizer_TOKEN_COMMENT 1
#define JavaIoStreamTokenizer_TOKEN_DIGIT 16
#define JavaIoStreamTokenizer_TOKEN_QUOTE 2
#define JavaIoStreamTokenizer_TOKEN_WHITE 4
#define JavaIoStreamTokenizer_TOKEN_WORD 8
#define JavaIoStreamTokenizer_TT_EOF -1
#define JavaIoStreamTokenizer_TT_EOL 10
#define JavaIoStreamTokenizer_TT_NUMBER -2
#define JavaIoStreamTokenizer_TT_UNKNOWN -4
#define JavaIoStreamTokenizer_TT_WORD -3

@interface JavaIoStreamTokenizer : NSObject {
 @public
  jdouble nval_;
  NSString *sval_;
  jint ttype_;
}

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)is;

- (instancetype)initWithJavaIoReader:(JavaIoReader *)r;

- (void)commentCharWithInt:(jint)ch;

- (void)eolIsSignificantWithBoolean:(jboolean)flag;

- (jint)lineno;

- (void)lowerCaseModeWithBoolean:(jboolean)flag;

- (jint)nextToken;

- (void)ordinaryCharWithInt:(jint)ch;

- (void)ordinaryCharsWithInt:(jint)low
                     withInt:(jint)hi;

- (void)parseNumbers;

- (void)pushBack;

- (void)quoteCharWithInt:(jint)ch;

- (void)resetSyntax;

- (void)slashSlashCommentsWithBoolean:(jboolean)flag;

- (void)slashStarCommentsWithBoolean:(jboolean)flag;

- (NSString *)description;

- (void)whitespaceCharsWithInt:(jint)low
                       withInt:(jint)hi;

- (void)wordCharsWithInt:(jint)low
                 withInt:(jint)hi;

@end

__attribute__((always_inline)) inline void JavaIoStreamTokenizer_init() {}

J2OBJC_FIELD_SETTER(JavaIoStreamTokenizer, sval_, NSString *)

J2OBJC_STATIC_FIELD_GETTER(JavaIoStreamTokenizer, TT_EOF, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaIoStreamTokenizer, TT_EOL, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaIoStreamTokenizer, TT_NUMBER, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaIoStreamTokenizer, TT_WORD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaIoStreamTokenizer, TT_UNKNOWN, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaIoStreamTokenizer, TOKEN_COMMENT, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoStreamTokenizer, TOKEN_QUOTE, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoStreamTokenizer, TOKEN_WHITE, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoStreamTokenizer, TOKEN_WORD, jbyte)

J2OBJC_STATIC_FIELD_GETTER(JavaIoStreamTokenizer, TOKEN_DIGIT, jbyte)

#endif // _JavaIoStreamTokenizer_H_
