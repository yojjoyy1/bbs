//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HNCTableViewController.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, NSLayoutConstraint, NSMutableArray, NSString;

@interface BenefitViewController : HNCTableViewController <CLLocationManagerDelegate>
{
    _Bool _isAlreadyDetectGPSLocation;
    NSLayoutConstraint *_benefitListHeightConstraint;
    NSString *_pageOrder;
    NSMutableArray *_benefitArray;
    CLLocationManager *_locationManager;
    struct CLLocationCoordinate2D _userLocationCoordinate;
}

@property(nonatomic) struct CLLocationCoordinate2D userLocationCoordinate; // @synthesize userLocationCoordinate=_userLocationCoordinate;
@property(nonatomic) _Bool isAlreadyDetectGPSLocation; // @synthesize isAlreadyDetectGPSLocation=_isAlreadyDetectGPSLocation;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSMutableArray *benefitArray; // @synthesize benefitArray=_benefitArray;
@property(retain, nonatomic) NSString *pageOrder; // @synthesize pageOrder=_pageOrder;
@property(retain, nonatomic) NSLayoutConstraint *benefitListHeightConstraint; // @synthesize benefitListHeightConstraint=_benefitListHeightConstraint;
- (void)WebServiceObject:(id)arg1 didCompleteAT0001WithHeader:(id)arg2 withAT0001ResponseBody:(id)arg3;
- (void)WebServiceObject:(id)arg1 didCompleteAP0010WithHeader:(id)arg2 withAP0010ResponseBody:(id)arg3;
- (void)WebServiceObject:(id)arg1 didCompleteAP0004WithHeader:(id)arg2 withAP0004ResponseBody:(id)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)detectGPSLocation;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
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

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

