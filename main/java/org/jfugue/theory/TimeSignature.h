//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/jfugue/theory/TimeSignature.java
//

#ifndef _OrgJfugueTheoryTimeSignature_H_
#define _OrgJfugueTheoryTimeSignature_H_

#import "JreEmulation.h"

@interface OrgJfugueTheoryTimeSignature : NSObject {
 @public
  jint beatsPerMeasure_;
  jint durationForBeat_;
}

- (instancetype)initWithInt:(jint)beatsPerMeasure
                    withInt:(jint)durationForBeat;

- (OrgJfugueTheoryTimeSignature *)setBeatsPerMeasureWithInt:(jint)beatsPerMeasure;

- (jint)getBeatsPerMeasure;

- (OrgJfugueTheoryTimeSignature *)setDurationForBeatWithInt:(jint)durationForBeat;

- (jint)getDurationForBeat;

- (void)copyAllFieldsTo:(OrgJfugueTheoryTimeSignature *)other;

@end

FOUNDATION_EXPORT BOOL OrgJfugueTheoryTimeSignature_initialized;
J2OBJC_STATIC_INIT(OrgJfugueTheoryTimeSignature)

FOUNDATION_EXPORT OrgJfugueTheoryTimeSignature *OrgJfugueTheoryTimeSignature_DEFAULT_TIMESIG_;
J2OBJC_STATIC_FIELD_GETTER(OrgJfugueTheoryTimeSignature, DEFAULT_TIMESIG_, OrgJfugueTheoryTimeSignature *)

#endif // _OrgJfugueTheoryTimeSignature_H_
