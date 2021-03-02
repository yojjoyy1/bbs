//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JavaLangRefReferenceQueue;

@interface JavaLangRefReference : NSObject
{
    id referent_;
    JavaLangRefReferenceQueue *queue_;
    JavaLangRefReference *queueNext_;
    JavaLangRefReference *pendingNext_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)removeAssociation;
- (void)weakenReferent;
- (void)strengthenReferent;
- (void)initReferent;
- (void)dealloc;
- (_Bool)isEnqueued;
- (id)get;
- (_Bool)enqueue;
- (_Bool)enqueueInternal;
- (void)clear;
- (id)initWithId:(id)arg1 withJavaLangRefReferenceQueue:(id)arg2;
- (id)init;

@end
