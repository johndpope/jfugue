//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/jfugue/pattern/Pattern.java
//

#ifndef _OrgJfuguePatternPattern_H_
#define _OrgJfuguePatternPattern_H_

@class IOSObjectArray;
@class JavaLangStringBuilder;

#import "JreEmulation.h"
#include "org/jfugue/pattern/PatternProducer.h"

#define OrgJfuguePatternPattern_UNDECLARED_EXPLICIT -1

@interface OrgJfuguePatternPattern : NSObject < OrgJfuguePatternPatternProducer > {
 @public
  JavaLangStringBuilder *patternSB_;
  jint explicitVoice_;
  jint explicitInstrument_;
  jint explicitTempo_;
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)pattern;

- (instancetype)initWithOrgJfuguePatternPatternProducerArray:(IOSObjectArray *)producers;

- (OrgJfuguePatternPattern *)addWithOrgJfuguePatternPatternProducerArray:(IOSObjectArray *)producers;

- (OrgJfuguePatternPattern *)addWithNSString:(NSString *)string;

- (OrgJfuguePatternPattern *)addTrackWithInt:(jint)trackNumber
         withOrgJfuguePatternPatternProducer:(id<OrgJfuguePatternPatternProducer>)producer;

- (OrgJfuguePatternPattern *)clear;

- (OrgJfuguePatternPattern *)repeatWithInt:(jint)n;

- (OrgJfuguePatternPattern *)getPattern;

- (NSString *)description;

- (OrgJfuguePatternPattern *)setTempoWithInt:(jint)explicitTempo;

- (OrgJfuguePatternPattern *)setTempoWithNSString:(NSString *)tempo;

- (OrgJfuguePatternPattern *)setVoiceWithInt:(jint)voice;

- (OrgJfuguePatternPattern *)setInstrumentWithInt:(jint)instrument;

- (OrgJfuguePatternPattern *)setInstrumentWithNSString:(NSString *)instrument;

- (OrgJfuguePatternPattern *)addToEachNoteElementWithNSString:(NSString *)decoratorString;

- (void)copyAllFieldsTo:(OrgJfuguePatternPattern *)other;

@end

__attribute__((always_inline)) inline void OrgJfuguePatternPattern_init() {}

J2OBJC_FIELD_SETTER(OrgJfuguePatternPattern, patternSB_, JavaLangStringBuilder *)

J2OBJC_STATIC_FIELD_GETTER(OrgJfuguePatternPattern, UNDECLARED_EXPLICIT, jint)

#endif // _OrgJfuguePatternPattern_H_
