//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/jsr305/build_result/java/javax/annotation/Syntax.java
//

#ifndef _JavaxAnnotationSyntax_H_
#define _JavaxAnnotationSyntax_H_

@class JavaxAnnotationMetaWhenEnum;

#import "JreEmulation.h"
#include "java/lang/annotation/Annotation.h"

@protocol JavaxAnnotationSyntax < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;
@property (readonly) JavaxAnnotationMetaWhenEnum *when;


@end

@interface JavaxAnnotationSyntax : NSObject < JavaxAnnotationSyntax > {
 @private
  NSString *value;
  JavaxAnnotationMetaWhenEnum *when;
}

- (instancetype)initWithValue:(NSString *)value_ withWhen:(JavaxAnnotationMetaWhenEnum *)when_;

+ (JavaxAnnotationMetaWhenEnum *)whenDefault;

@end

__attribute__((always_inline)) inline void JavaxAnnotationSyntax_init() {}

#endif // _JavaxAnnotationSyntax_H_
