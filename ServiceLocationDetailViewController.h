//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HNCTableViewController.h"

@class NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString;

@interface ServiceLocationDetailViewController : HNCTableViewController
{
    NSLayoutConstraint *_serviceLocationDetailListHeightConstraint;
    NSString *_pageOrder;
    NSMutableDictionary *_selectServiceLocationSummaryDictionary;
    NSMutableArray *_servicesArray;
}

@property(retain, nonatomic) NSMutableArray *servicesArray; // @synthesize servicesArray=_servicesArray;
@property(retain, nonatomic) NSMutableDictionary *selectServiceLocationSummaryDictionary; // @synthesize selectServiceLocationSummaryDictionary=_selectServiceLocationSummaryDictionary;
@property(retain, nonatomic) NSString *pageOrder; // @synthesize pageOrder=_pageOrder;
@property(retain, nonatomic) NSLayoutConstraint *serviceLocationDetailListHeightConstraint; // @synthesize serviceLocationDetailListHeightConstraint=_serviceLocationDetailListHeightConstraint;
- (void)showErrorAlert:(id)arg1;
- (id)getDefaultServicesDataArray;
- (void)getBranchDataFromServer;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)callPhoneButtonClickEvent:(id)arg1;
- (void)mapViewButtonClickEvent:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)dealloc;
- (void)updateViewConstraints;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
