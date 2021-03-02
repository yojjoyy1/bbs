//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HNCTableViewController.h"

#import "CLLocationManagerDelegate.h"
#import "MKMapViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class CLLocationManager, MKMapView, NSLayoutConstraint, NSMutableArray, NSString, UIButton;

@interface ServiceLocationSummaryViewController : HNCTableViewController <MKMapViewDelegate, CLLocationManagerDelegate, UIAlertViewDelegate>
{
    _Bool _isHiddenToolbar;
    _Bool _isNeedGetBranch;
    _Bool _isAlreadyDetectGPSLocation;
    NSLayoutConstraint *_toolbarHeightConstraint;
    UIButton *_listViewModeButton;
    UIButton *_mapViewModeButton;
    NSLayoutConstraint *_serviceLocationSummaryListHeightConstraint;
    MKMapView *_mapView;
    NSString *_pageOrder;
    NSString *_responseMessage;
    NSMutableArray *_serviceLocationSummaryArray;
    long long _currentLoadingCellRowsCount;
    CLLocationManager *_locationManager;
    struct CLLocationCoordinate2D _userLocationCoordinate;
}

@property(nonatomic) _Bool isAlreadyDetectGPSLocation; // @synthesize isAlreadyDetectGPSLocation=_isAlreadyDetectGPSLocation;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) long long currentLoadingCellRowsCount; // @synthesize currentLoadingCellRowsCount=_currentLoadingCellRowsCount;
@property(nonatomic) _Bool isNeedGetBranch; // @synthesize isNeedGetBranch=_isNeedGetBranch;
@property(nonatomic) struct CLLocationCoordinate2D userLocationCoordinate; // @synthesize userLocationCoordinate=_userLocationCoordinate;
@property(nonatomic) _Bool isHiddenToolbar; // @synthesize isHiddenToolbar=_isHiddenToolbar;
@property(retain, nonatomic) NSMutableArray *serviceLocationSummaryArray; // @synthesize serviceLocationSummaryArray=_serviceLocationSummaryArray;
@property(retain, nonatomic) NSString *responseMessage; // @synthesize responseMessage=_responseMessage;
@property(retain, nonatomic) NSString *pageOrder; // @synthesize pageOrder=_pageOrder;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) NSLayoutConstraint *serviceLocationSummaryListHeightConstraint; // @synthesize serviceLocationSummaryListHeightConstraint=_serviceLocationSummaryListHeightConstraint;
@property(retain, nonatomic) UIButton *mapViewModeButton; // @synthesize mapViewModeButton=_mapViewModeButton;
@property(retain, nonatomic) UIButton *listViewModeButton; // @synthesize listViewModeButton=_listViewModeButton;
@property(retain, nonatomic) NSLayoutConstraint *toolbarHeightConstraint; // @synthesize toolbarHeightConstraint=_toolbarHeightConstraint;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)WebServiceObject:(id)arg1 didCompleteAP0021WithHeader:(id)arg2 withAP0021ResponseBody:(id)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)detectGPSLocation;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)loadMapAnnotations;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)switchModeClickEvent:(id)arg1;
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
