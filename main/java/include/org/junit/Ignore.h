//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/junit/build_result/java/org/junit/Ignore.java
//

#ifndef _OrgJunitIgnore_H_
#define _OrgJunitIgnore_H_

#import "JreEmulation.h"
#include "java/lang/annotation/Annotation.h"

@protocol OrgJunitIgnore < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;


@end

@interface OrgJunitIgnore : NSObject < OrgJunitIgnore > {
 @private
  NSString *value;
}

- (instancetype)initWithValue:(NSString *)value_;

+ (NSString *)valueDefault;

@end

__attribute__((always_inline)) inline void OrgJunitIgnore_init() {}

#endif // _OrgJunitIgnore_H_
