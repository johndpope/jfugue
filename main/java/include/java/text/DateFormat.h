//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/DateFormat.java
//

#ifndef _JavaTextDateFormat_H_
#define _JavaTextDateFormat_H_

@class IOSObjectArray;
@class JavaLangStringBuffer;
@class JavaTextFieldPosition;
@class JavaTextNumberFormat;
@class JavaTextParsePosition;
@class JavaUtilCalendar;
@class JavaUtilDate;
@class JavaUtilHashtable;
@class JavaUtilLocale;
@class JavaUtilTimeZone;

#import "JreEmulation.h"
#include "java/text/Format.h"

#define JavaTextDateFormat_AM_PM_FIELD 14
#define JavaTextDateFormat_DATE_FIELD 3
#define JavaTextDateFormat_DAY_OF_WEEK_FIELD 9
#define JavaTextDateFormat_DAY_OF_WEEK_IN_MONTH_FIELD 11
#define JavaTextDateFormat_DAY_OF_YEAR_FIELD 10
#define JavaTextDateFormat_DEFAULT 2
#define JavaTextDateFormat_ERA_FIELD 0
#define JavaTextDateFormat_FULL 0
#define JavaTextDateFormat_HOUR0_FIELD 16
#define JavaTextDateFormat_HOUR1_FIELD 15
#define JavaTextDateFormat_HOUR_OF_DAY0_FIELD 5
#define JavaTextDateFormat_HOUR_OF_DAY1_FIELD 4
#define JavaTextDateFormat_LONG 1
#define JavaTextDateFormat_MEDIUM 2
#define JavaTextDateFormat_MILLISECOND_FIELD 8
#define JavaTextDateFormat_MINUTE_FIELD 6
#define JavaTextDateFormat_MONTH_FIELD 2
#define JavaTextDateFormat_SECOND_FIELD 7
#define JavaTextDateFormat_SHORT 3
#define JavaTextDateFormat_TIMEZONE_FIELD 17
#define JavaTextDateFormat_WEEK_OF_MONTH_FIELD 13
#define JavaTextDateFormat_WEEK_OF_YEAR_FIELD 12
#define JavaTextDateFormat_YEAR_FIELD 1
#define JavaTextDateFormat_serialVersionUID 7218322306649953788LL

@interface JavaTextDateFormat : JavaTextFormat {
 @public
  JavaUtilCalendar *calendar_;
  JavaTextNumberFormat *numberFormat_;
}

- (instancetype)init;

- (id)clone;

- (jboolean)isEqual:(id)object;

- (JavaLangStringBuffer *)formatWithId:(id)object
              withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
             withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

- (NSString *)formatWithJavaUtilDate:(JavaUtilDate *)date;

- (JavaLangStringBuffer *)formatWithJavaUtilDate:(JavaUtilDate *)date
                        withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
                       withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

+ (IOSObjectArray *)getAvailableLocales;

- (JavaUtilCalendar *)getCalendar;

+ (JavaTextDateFormat *)getDateInstance;

+ (JavaTextDateFormat *)getDateInstanceWithInt:(jint)style;

+ (JavaTextDateFormat *)getDateInstanceWithInt:(jint)style
                            withJavaUtilLocale:(JavaUtilLocale *)locale;

+ (JavaTextDateFormat *)getDateTimeInstance;

+ (JavaTextDateFormat *)getDateTimeInstanceWithInt:(jint)dateStyle
                                           withInt:(jint)timeStyle;

+ (JavaTextDateFormat *)getDateTimeInstanceWithInt:(jint)dateStyle
                                           withInt:(jint)timeStyle
                                withJavaUtilLocale:(JavaUtilLocale *)locale;

+ (JavaTextDateFormat *)getInstance;

+ (void)set24HourTimePrefWithBoolean:(jboolean)is24Hour;

- (JavaTextNumberFormat *)getNumberFormat;

+ (JavaTextDateFormat *)getTimeInstance;

+ (JavaTextDateFormat *)getTimeInstanceWithInt:(jint)style;

+ (JavaTextDateFormat *)getTimeInstanceWithInt:(jint)style
                            withJavaUtilLocale:(JavaUtilLocale *)locale;

- (JavaUtilTimeZone *)getTimeZone;

- (NSUInteger)hash;

- (jboolean)isLenient;

- (JavaUtilDate *)parseWithNSString:(NSString *)string;

- (JavaUtilDate *)parseWithNSString:(NSString *)string
          withJavaTextParsePosition:(JavaTextParsePosition *)position;

- (id)parseObjectWithNSString:(NSString *)string
    withJavaTextParsePosition:(JavaTextParsePosition *)position;

- (void)setCalendarWithJavaUtilCalendar:(JavaUtilCalendar *)cal;

- (void)setLenientWithBoolean:(jboolean)value;

- (void)setNumberFormatWithJavaTextNumberFormat:(JavaTextNumberFormat *)format;

- (void)setTimeZoneWithJavaUtilTimeZone:(JavaUtilTimeZone *)timezone;

@end

__attribute__((always_inline)) inline void JavaTextDateFormat_init() {}

J2OBJC_FIELD_SETTER(JavaTextDateFormat, calendar_, JavaUtilCalendar *)
J2OBJC_FIELD_SETTER(JavaTextDateFormat, numberFormat_, JavaTextNumberFormat *)
FOUNDATION_EXPORT IOSObjectArray *JavaTextDateFormat_getAvailableLocales();
FOUNDATION_EXPORT JavaTextDateFormat *JavaTextDateFormat_getDateInstance();
FOUNDATION_EXPORT JavaTextDateFormat *JavaTextDateFormat_getDateInstanceWithInt_(jint style);
FOUNDATION_EXPORT JavaTextDateFormat *JavaTextDateFormat_getDateInstanceWithInt_withJavaUtilLocale_(jint style, JavaUtilLocale *locale);
FOUNDATION_EXPORT JavaTextDateFormat *JavaTextDateFormat_getDateTimeInstance();
FOUNDATION_EXPORT JavaTextDateFormat *JavaTextDateFormat_getDateTimeInstanceWithInt_withInt_(jint dateStyle, jint timeStyle);
FOUNDATION_EXPORT JavaTextDateFormat *JavaTextDateFormat_getDateTimeInstanceWithInt_withInt_withJavaUtilLocale_(jint dateStyle, jint timeStyle, JavaUtilLocale *locale);
FOUNDATION_EXPORT JavaTextDateFormat *JavaTextDateFormat_getInstance();
FOUNDATION_EXPORT void JavaTextDateFormat_set24HourTimePrefWithBoolean_(jboolean is24Hour);
FOUNDATION_EXPORT JavaTextDateFormat *JavaTextDateFormat_getTimeInstance();
FOUNDATION_EXPORT JavaTextDateFormat *JavaTextDateFormat_getTimeInstanceWithInt_(jint style);
FOUNDATION_EXPORT JavaTextDateFormat *JavaTextDateFormat_getTimeInstanceWithInt_withJavaUtilLocale_(jint style, JavaUtilLocale *locale);

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, serialVersionUID, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, DEFAULT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, FULL, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, LONG, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, MEDIUM, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, SHORT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, ERA_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, YEAR_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, MONTH_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, DATE_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, HOUR_OF_DAY1_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, HOUR_OF_DAY0_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, MINUTE_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, SECOND_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, MILLISECOND_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, DAY_OF_WEEK_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, DAY_OF_YEAR_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, DAY_OF_WEEK_IN_MONTH_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, WEEK_OF_YEAR_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, WEEK_OF_MONTH_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, AM_PM_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, HOUR1_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, HOUR0_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, TIMEZONE_FIELD, jint)

#define JavaTextDateFormat_Field_serialVersionUID 7441350119349544720LL

@interface JavaTextDateFormat_Field : JavaTextFormat_Field {
}

- (instancetype)initWithNSString:(NSString *)fieldName
                         withInt:(jint)calendarField;

- (jint)getCalendarField;

+ (JavaTextDateFormat_Field *)ofCalendarFieldWithInt:(jint)calendarField;

@end

FOUNDATION_EXPORT BOOL JavaTextDateFormat_Field_initialized;
J2OBJC_STATIC_INIT(JavaTextDateFormat_Field)
FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_ofCalendarFieldWithInt_(jint calendarField);

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, serialVersionUID, jlong)

FOUNDATION_EXPORT JavaUtilHashtable *JavaTextDateFormat_Field_table_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, table_, JavaUtilHashtable *)
J2OBJC_STATIC_FIELD_SETTER(JavaTextDateFormat_Field, table_, JavaUtilHashtable *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_ERA_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, ERA_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_YEAR_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, YEAR_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_MONTH_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, MONTH_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_HOUR_OF_DAY0_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, HOUR_OF_DAY0_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_HOUR_OF_DAY1_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, HOUR_OF_DAY1_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_MINUTE_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, MINUTE_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_SECOND_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, SECOND_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_MILLISECOND_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, MILLISECOND_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_DAY_OF_WEEK_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, DAY_OF_WEEK_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_DAY_OF_MONTH_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, DAY_OF_MONTH_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_DAY_OF_YEAR_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, DAY_OF_YEAR_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_DAY_OF_WEEK_IN_MONTH_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, DAY_OF_WEEK_IN_MONTH_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_WEEK_OF_YEAR_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, WEEK_OF_YEAR_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_WEEK_OF_MONTH_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, WEEK_OF_MONTH_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_AM_PM_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, AM_PM_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_HOUR0_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, HOUR0_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_HOUR1_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, HOUR1_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_TIME_ZONE_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, TIME_ZONE_, JavaTextDateFormat_Field *)

#endif // _JavaTextDateFormat_H_
