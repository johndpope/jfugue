//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/ChoiceFormat.java
//

#ifndef _JavaTextChoiceFormat_H_
#define _JavaTextChoiceFormat_H_

@class IOSDoubleArray;
@class IOSObjectArray;
@class JavaLangStringBuffer;
@class JavaTextFieldPosition;
@class JavaTextParsePosition;

#import "JreEmulation.h"
#include "java/text/NumberFormat.h"

#define JavaTextChoiceFormat_serialVersionUID 1795184449645032964LL

@interface JavaTextChoiceFormat : JavaTextNumberFormat {
}

- (instancetype)initWithDoubleArray:(IOSDoubleArray *)limits
                  withNSStringArray:(IOSObjectArray *)formats;

- (instancetype)initWithNSString:(NSString *)template_;

- (void)applyPatternWithNSString:(NSString *)template_;

- (id)clone;

- (jboolean)isEqual:(id)object;

- (JavaLangStringBuffer *)formatWithDouble:(jdouble)value
                  withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
                 withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

- (JavaLangStringBuffer *)formatWithLong:(jlong)value
                withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
               withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

- (IOSObjectArray *)getFormats;

- (IOSDoubleArray *)getLimits;

- (NSUInteger)hash;

+ (jdouble)nextDoubleWithDouble:(jdouble)value;

+ (jdouble)nextDoubleWithDouble:(jdouble)value
                    withBoolean:(jboolean)increment;

- (NSNumber *)parseWithNSString:(NSString *)string
      withJavaTextParsePosition:(JavaTextParsePosition *)position;

+ (jdouble)previousDoubleWithDouble:(jdouble)value;

- (void)setChoicesWithDoubleArray:(IOSDoubleArray *)limits
                withNSStringArray:(IOSObjectArray *)formats;

- (NSString *)toPattern;

@end

__attribute__((always_inline)) inline void JavaTextChoiceFormat_init() {}
FOUNDATION_EXPORT jdouble JavaTextChoiceFormat_nextDoubleWithDouble_(jdouble value);
FOUNDATION_EXPORT jdouble JavaTextChoiceFormat_nextDoubleWithDouble_withBoolean_(jdouble value, jboolean increment);
FOUNDATION_EXPORT jdouble JavaTextChoiceFormat_previousDoubleWithDouble_(jdouble value);

J2OBJC_STATIC_FIELD_GETTER(JavaTextChoiceFormat, serialVersionUID, jlong)

#endif // _JavaTextChoiceFormat_H_
