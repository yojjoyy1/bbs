//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MajorViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class APIDataManager, NSMutableArray, NSString, UICollectionView;

@interface SettingDefaultHome : MajorViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    UICollectionView *_collV;
    NSMutableArray *_arrayTitle;
    NSMutableArray *_arrayAPIString;
    APIDataManager *_dataManager;
    long long _tag;
    NSString *_defaultPage;
    NSString *_defaultPayType;
}

@property(retain, nonatomic) NSString *defaultPayType; // @synthesize defaultPayType=_defaultPayType;
@property(retain, nonatomic) NSString *defaultPage; // @synthesize defaultPage=_defaultPage;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) APIDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) NSMutableArray *arrayAPIString; // @synthesize arrayAPIString=_arrayAPIString;
@property(retain, nonatomic) NSMutableArray *arrayTitle; // @synthesize arrayTitle=_arrayTitle;
@property(retain, nonatomic) UICollectionView *collV; // @synthesize collV=_collV;
- (void)system_maintenance:(id)arg1;
- (void)GET_FIRST_LOGIN_FAILED:(id)arg1;
- (void)GET_FIRST_LOGIN_SUCCESS:(id)arg1;
- (void)SETDEFAULTPAGE_FAILED:(id)arg1;
- (void)SETDEFAULTPAGE_SUCCESS:(id)arg1;
- (void)selectBtnTag:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
