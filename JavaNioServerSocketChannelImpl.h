//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNioChannelsServerSocketChannel.h"

#import "JavaNioFileDescriptorChannel.h"

@class JavaNioServerSocketChannelImpl_ServerSocketAdapter;

@interface JavaNioServerSocketChannelImpl : JavaNioChannelsServerSocketChannel <JavaNioFileDescriptorChannel>
{
    JavaNioServerSocketChannelImpl_ServerSocketAdapter *socket__;
    id acceptLock_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)getFD;
- (void)implCloseSelectableChannel;
- (void)implConfigureBlockingWithBoolean:(_Bool)arg1;
- (_Bool)shouldThrowSocketTimeoutExceptionFromAcceptWithJavaNetSocketTimeoutException:(id)arg1;
- (id)accept;
- (id)supportedOptions;
- (id)setOptionWithJavaNetSocketOption:(id)arg1 withId:(id)arg2;
- (id)getOptionWithJavaNetSocketOption:(id)arg1;
- (id)getLocalAddress;
- (id)bindWithJavaNetSocketAddress:(id)arg1 withInt:(int)arg2;
- (id)socket;
- (id)initWithJavaNioChannelsSpiSelectorProvider:(id)arg1;

@end

