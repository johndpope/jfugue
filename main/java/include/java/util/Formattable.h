//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Formattable.java
//

#ifndef _JavaUtilFormattable_H_
#define _JavaUtilFormattable_H_

@class JavaUtilFormatter;

#import "JreEmulation.h"

@protocol JavaUtilFormattable < NSObject, JavaObject >

- (void)formatToWithJavaUtilFormatter:(JavaUtilFormatter *)formatter
                              withInt:(jint)flags
                              withInt:(jint)width
                              withInt:(jint)precision;

@end

__attribute__((always_inline)) inline void JavaUtilFormattable_init() {}

#endif // _JavaUtilFormattable_H_