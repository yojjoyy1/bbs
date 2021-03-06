//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HNCTableViewController.h"

@class NSArray, NSMutableSet, NSString;

@interface FavoritesListViewController : HNCTableViewController
{
    NSArray *_mtaFuncList;
    NSString *_favoritesRecord;
    NSArray *_favoritesFuncWFIDArray;
    NSMutableSet *_funcSet;
    NSString *_tempSelectedWFID;
    long long _totalFuncCount;
    long long _funcSeq;
    long long _selectedDicSeq;
}

@property(nonatomic) long long selectedDicSeq; // @synthesize selectedDicSeq=_selectedDicSeq;
@property(nonatomic) long long funcSeq; // @synthesize funcSeq=_funcSeq;
@property(nonatomic) long long totalFuncCount; // @synthesize totalFuncCount=_totalFuncCount;
@property(retain, nonatomic) NSString *tempSelectedWFID; // @synthesize tempSelectedWFID=_tempSelectedWFID;
@property(retain, nonatomic) NSMutableSet *funcSet; // @synthesize funcSet=_funcSet;
@property(retain, nonatomic) NSArray *favoritesFuncWFIDArray; // @synthesize favoritesFuncWFIDArray=_favoritesFuncWFIDArray;
@property(retain, nonatomic) NSString *favoritesRecord; // @synthesize favoritesRecord=_favoritesRecord;
@property(retain, nonatomic) NSArray *mtaFuncList; // @synthesize mtaFuncList=_mtaFuncList;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;

@end

