//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNetSocketImpl.h"

@class DalvikSystemCloseGuard, JavaNetProxy;

@interface JavaNetPlainSocketImpl : JavaNetSocketImpl
{
    _Bool streaming_;
    _Bool shutdownInput__;
    JavaNetProxy *proxy_;
    DalvikSystemCloseGuard *guard_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)writeWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)readWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)sendUrgentDataWithInt:(int)arg1;
- (_Bool)supportsUrgentData;
- (void)connectWithJavaNetSocketAddress:(id)arg1 withInt:(int)arg2;
- (id)socksReadReply;
- (void)socksSendRequestWithInt:(int)arg1 withJavaNetInetAddress:(id)arg2 withInt:(int)arg3;
- (void)socksBind;
- (void)shutdownOutput;
- (void)shutdownInput;
- (void)socksAccept;
- (void)socksRequestConnectionWithJavaNetInetAddress:(id)arg1 withInt:(int)arg2;
- (void)socksConnectWithJavaNetInetAddress:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)socksGetServerAddress;
- (int)socksGetServerPort;
- (void)setOptionWithInt:(int)arg1 withId:(id)arg2;
- (void)listenWithInt:(int)arg1;
- (id)getOutputStream;
- (id)getOptionWithInt:(int)arg1;
- (id)getInputStream;
- (void)dealloc;
- (void)createWithBoolean:(_Bool)arg1;
- (void)connectWithJavaNetInetAddress:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)connectWithJavaNetInetAddress:(id)arg1 withInt:(int)arg2;
- (void)connectWithNSString:(id)arg1 withInt:(int)arg2;
- (void)close;
- (void)bindWithJavaNetInetAddress:(id)arg1 withInt:(int)arg2;
- (int)available;
- (void)checkNotClosed;
- (void)initRemoteAddressAndPortWithJavaNetInetAddress:(id)arg1 withInt:(int)arg2;
- (void)initLocalPortWithInt:(int)arg1;
- (_Bool)usingSocks;
- (void)acceptWithJavaNetSocketImpl:(id)arg1;
- (id)initWithJavaIoFileDescriptor:(id)arg1 withInt:(int)arg2 withJavaNetInetAddress:(id)arg3 withInt:(int)arg4;
- (id)init;
- (id)initWithJavaNetProxy:(id)arg1;
- (id)initWithJavaIoFileDescriptor:(id)arg1;
- (id)initJavaNetPlainSocketImplWithJavaIoFileDescriptor:(id)arg1;

@end

