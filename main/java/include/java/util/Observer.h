//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Observer.java
//

#ifndef _JavaUtilObserver_H_
#define _JavaUtilObserver_H_

@class JavaUtilObservable;

#import "JreEmulation.h"

@protocol JavaUtilObserver < NSObject, JavaObject >

- (void)updateWithJavaUtilObservable:(JavaUtilObservable *)observable
                              withId:(id)data;

@end

__attribute__((always_inline)) inline void JavaUtilObserver_init() {}

#endif // _JavaUtilObserver_H_
