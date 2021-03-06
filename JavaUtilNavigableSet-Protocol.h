//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "JavaUtilSortedSet.h"
#import "NSObject.h"

@protocol JavaUtilNavigableSet <JavaUtilSortedSet, NSObject, JavaObject>
- (id <JavaUtilSortedSet>)tailSetWithId:(id)arg1;
- (id <JavaUtilSortedSet>)headSetWithId:(id)arg1;
- (id <JavaUtilSortedSet>)subSetWithId:(id)arg1 withId:(id)arg2;
- (id <JavaUtilNavigableSet>)tailSetWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (id <JavaUtilNavigableSet>)headSetWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (id <JavaUtilNavigableSet>)subSetWithId:(id)arg1 withBoolean:(_Bool)arg2 withId:(id)arg3 withBoolean:(_Bool)arg4;
- (id <JavaUtilIterator>)descendingIterator;
- (id <JavaUtilNavigableSet>)descendingSet;
- (id <JavaUtilIterator>)iterator;
- (id)pollLast;
- (id)pollFirst;
- (id)higherWithId:(id)arg1;
- (id)ceilingWithId:(id)arg1;
- (id)floorWithId:(id)arg1;
- (id)lowerWithId:(id)arg1;
@end

