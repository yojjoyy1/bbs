//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"
#import "JavaLangComparable.h"
#import "NSCopying.h"

@class IOSBooleanArray, IOSIntArray, JavaUtilTimeZone;

@interface JavaUtilCalendar : NSObject <JavaIoSerializable, NSCopying, JavaLangComparable>
{
    _Bool areFieldsSet_;
    IOSIntArray *fields_;
    IOSBooleanArray *isSet__;
    _Bool isTimeSet_;
    long long time_;
    int lastTimeFieldSet_;
    int lastDateFieldSet_;
    _Bool lenient_;
    int firstDayOfWeek_;
    int minimalDaysInFirstWeek_;
    JavaUtilTimeZone *zone_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (void)insertValuesInMapWithJavaUtilMap:(id)arg1 withNSStringArray:(id)arg2;
+ (void)checkStyleWithInt:(int)arg1;
+ (id)getInstanceWithJavaUtilTimeZone:(id)arg1 withJavaUtilLocale:(id)arg2;
+ (id)getInstanceWithJavaUtilTimeZone:(id)arg1;
+ (id)getInstanceWithJavaUtilLocale:(id)arg1;
+ (id)getInstance;
+ (id)getAvailableLocales;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)getDisplayNamesWithInt:(int)arg1 withInt:(int)arg2 withJavaUtilLocale:(id)arg3;
- (id)getDisplayNameArrayWithInt:(int)arg1 withInt:(int)arg2 withJavaUtilLocale:(id)arg3;
- (id)getDisplayNameWithInt:(int)arg1 withInt:(int)arg2 withJavaUtilLocale:(id)arg3;
- (int)compareToWithId:(id)arg1;
- (id)description;
- (void)setTimeZoneWithJavaUtilTimeZone:(id)arg1;
- (void)setTimeInMillisWithLong:(long long)arg1;
- (void)setTimeWithJavaUtilDate:(id)arg1;
- (void)setMinimalDaysInFirstWeekWithInt:(int)arg1;
- (void)setLenientWithBoolean:(_Bool)arg1;
- (void)setFirstDayOfWeekWithInt:(int)arg1;
- (void)setWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6;
- (void)setWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5;
- (void)setWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)setWithInt:(int)arg1 withInt:(int)arg2;
- (void)rollWithInt:(int)arg1 withBoolean:(_Bool)arg2;
- (void)rollWithInt:(int)arg1 withInt:(int)arg2;
- (_Bool)isSetWithInt:(int)arg1;
- (_Bool)isLenient;
- (int)internalGetWithInt:(int)arg1;
- (unsigned long long)hash;
- (id)getTimeZone;
- (long long)getTimeInMillis;
- (id)getTime;
- (int)getMinimumWithInt:(int)arg1;
- (int)getMinimalDaysInFirstWeek;
- (int)getMaximumWithInt:(int)arg1;
- (int)getLeastMaximumWithInt:(int)arg1;
- (int)getGreatestMinimumWithInt:(int)arg1;
- (int)getFirstDayOfWeek;
- (int)getActualMinimumWithInt:(int)arg1;
- (int)getActualMaximumWithInt:(int)arg1;
- (int)getWithInt:(int)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)computeTime;
- (void)computeFields;
- (void)complete;
- (id)clone;
- (void)clearWithInt:(int)arg1;
- (void)clear;
- (_Bool)beforeWithId:(id)arg1;
- (_Bool)afterWithId:(id)arg1;
- (void)addWithInt:(int)arg1 withInt:(int)arg2;
- (id)initWithJavaUtilTimeZone:(id)arg1 withJavaUtilLocale:(id)arg2;
- (id)initJavaUtilCalendarWithJavaUtilTimeZone:(id)arg1 withJavaUtilLocale:(id)arg2;
- (id)initWithJavaUtilTimeZone:(id)arg1;
- (id)initJavaUtilCalendarWithJavaUtilTimeZone:(id)arg1;
- (id)init;

@end

