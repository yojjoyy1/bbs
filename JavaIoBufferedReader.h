//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaIoReader.h"

@class IOSCharArray;

@interface JavaIoBufferedReader : JavaIoReader
{
    JavaIoReader *in_;
    IOSCharArray *buf_;
    int pos_;
    int end_;
    int mark__;
    int markLimit_;
    _Bool lastWasCR_;
    _Bool markedLastWasCR_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (long long)skipWithLong:(long long)arg1;
- (void)reset;
- (_Bool)ready;
- (id)readLine;
- (void)maybeSwallowLF;
- (void)chompNewline;
- (int)readWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)readChar;
- (int)read;
- (_Bool)markSupported;
- (void)checkNotClosed;
- (void)markWithInt:(int)arg1;
- (_Bool)isClosed;
- (int)fillBuf;
- (void)close;
- (id)initWithJavaIoReader:(id)arg1 withInt:(int)arg2;
- (id)initJavaIoBufferedReaderWithJavaIoReader:(id)arg1 withInt:(int)arg2;
- (id)initWithJavaIoReader:(id)arg1;

@end

