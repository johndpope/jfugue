//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/junit/build_result/java/org/hamcrest/Description.java
//

#ifndef _OrgHamcrestDescription_H_
#define _OrgHamcrestDescription_H_

@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol OrgHamcrestSelfDescribing;

#import "JreEmulation.h"

@protocol OrgHamcrestDescription < NSObject, JavaObject >

- (id<OrgHamcrestDescription>)appendTextWithNSString:(NSString *)text;

- (id<OrgHamcrestDescription>)appendDescriptionOfWithOrgHamcrestSelfDescribing:(id<OrgHamcrestSelfDescribing>)value;

- (id<OrgHamcrestDescription>)appendValueWithId:(id)value;

- (id<OrgHamcrestDescription>)appendValueListWithNSString:(NSString *)start
                                             withNSString:(NSString *)separator
                                             withNSString:(NSString *)end
                                        withNSObjectArray:(IOSObjectArray *)values;

- (id<OrgHamcrestDescription>)appendValueListWithNSString:(NSString *)start
                                             withNSString:(NSString *)separator
                                             withNSString:(NSString *)end
                                     withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<OrgHamcrestDescription>)appendListWithNSString:(NSString *)start
                                        withNSString:(NSString *)separator
                                        withNSString:(NSString *)end
                                withJavaLangIterable:(id<JavaLangIterable>)values;

@end

__attribute__((always_inline)) inline void OrgHamcrestDescription_init() {}

#endif // _OrgHamcrestDescription_H_