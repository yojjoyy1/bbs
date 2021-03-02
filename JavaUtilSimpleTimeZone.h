//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilTimeZone.h"

@interface JavaUtilSimpleTimeZone : JavaUtilTimeZone
{
    int rawOffset_;
    int startYear_;
    int startMonth_;
    int startDay_;
    int startDayOfWeek_;
    int startTime_;
    int endMonth_;
    int endDay_;
    int endDayOfWeek_;
    int endTime_;
    int startMode_;
    int endMode_;
    _Bool useDaylight_;
    int dstSavings_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (_Bool)useDaylightTime;
- (id)description;
- (void)setStartYearWithInt:(int)arg1;
- (void)setStartRuleWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withBoolean:(_Bool)arg5;
- (void)setStartRuleWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (void)setStartRuleWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)setStartMode;
- (void)setRawOffsetWithInt:(int)arg1;
- (void)setEndRuleWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withBoolean:(_Bool)arg5;
- (void)setEndRuleWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (void)setEndRuleWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)setEndMode;
- (void)checkDayWithInt:(int)arg1 withInt:(int)arg2;
- (void)checkRangeWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)setDSTSavingsWithInt:(int)arg1;
- (int)mod7WithInt:(int)arg1;
- (_Bool)isLeapYearWithInt:(int)arg1;
- (_Bool)inDaylightTimeWithJavaUtilDate:(id)arg1;
- (_Bool)hasSameRulesWithJavaUtilTimeZone:(id)arg1;
- (unsigned long long)hash;
- (int)getRawOffset;
- (int)getOffsetWithLong:(long long)arg1;
- (int)getOffsetWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6;
- (int)getDSTSavings;
- (_Bool)isEqual:(id)arg1;
- (id)clone;
- (id)initWithInt:(int)arg1 withNSString:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withInt:(int)arg7 withInt:(int)arg8 withInt:(int)arg9 withInt:(int)arg10 withInt:(int)arg11 withInt:(int)arg12 withInt:(int)arg13;
- (id)initWithInt:(int)arg1 withNSString:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withInt:(int)arg7 withInt:(int)arg8 withInt:(int)arg9 withInt:(int)arg10 withInt:(int)arg11;
- (id)initJavaUtilSimpleTimeZoneWithInt:(int)arg1 withNSString:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withInt:(int)arg7 withInt:(int)arg8 withInt:(int)arg9 withInt:(int)arg10 withInt:(int)arg11;
- (id)initWithInt:(int)arg1 withNSString:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withInt:(int)arg7 withInt:(int)arg8 withInt:(int)arg9 withInt:(int)arg10;
- (id)initWithInt:(int)arg1 withNSString:(id)arg2;
- (id)initJavaUtilSimpleTimeZoneWithInt:(int)arg1 withNSString:(id)arg2;

@end
