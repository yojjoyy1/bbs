//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilIterator.h"

@class JavaUtilTreeMap, JavaUtilTreeMap_Node;

@interface JavaUtilTreeMap_MapIterator : NSObject <JavaUtilIterator>
{
    JavaUtilTreeMap_Node *next_;
    JavaUtilTreeMap_Node *last_;
    int expectedModCount_;
    JavaUtilTreeMap *this$0_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (void)remove;
- (id)stepBackward;
- (id)stepForward;
- (_Bool)hasNext;
- (id)initWithJavaUtilTreeMap:(id)arg1 withJavaUtilTreeMap_Node:(id)arg2;

@end

