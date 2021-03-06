//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSException.h"

#import "JavaIoSerializable.h"
#import "JavaObject.h"

@class IOSObjectArray, NSString;

@interface JavaLangThrowable : NSException <JavaIoSerializable, JavaObject>
{
    JavaLangThrowable *cause;
    NSString *detailMessage;
    IOSObjectArray *stackTrace;
    IOSObjectArray *suppressedExceptions;
    void **rawCallStack;
    unsigned int rawFrameCount;
}

+ (struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)maybeFreeRawCallStack;
- (id)description;
- (id)getSuppressed;
- (void)addSuppressedWithJavaLangThrowable:(id)arg1;
- (void)setStackTraceWithJavaLangStackTraceElementArray:(id)arg1;
- (void)printStackTraceWithJavaIoPrintStream:(id)arg1;
- (void)printStackTraceWithJavaIoPrintWriter:(id)arg1;
- (void)printStackTrace;
- (id)initCauseWithJavaLangThrowable:(id)arg1;
- (id)getStackTrace;
- (id)getMessage;
- (id)getLocalizedMessage;
- (id)getCause;
- (id)fillInStackTrace;
- (id)filterStackTrace;
- (id)initWithNSString:(id)arg1 withJavaLangThrowable:(id)arg2 withBoolean:(_Bool)arg3 withBoolean:(_Bool)arg4;
- (id)initWithJavaLangThrowable:(id)arg1;
- (id)initWithNSString:(id)arg1 withJavaLangThrowable:(id)arg2;
- (id)initWithNSString:(id)arg1;
- (id)init;
- (id)initJavaLangThrowableWithNSString:(id)arg1 withJavaLangThrowable:(id)arg2;

@end

