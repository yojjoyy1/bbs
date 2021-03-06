//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MajorViewController.h"

#import "RevealDescriptionViewDeleaget.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class APIDataManager, BonusdetailsData, NSMutableArray, NSString, RevealDescriptionView, UIButton, UIDatePicker, UILabel, UITableView, UITextField, UIView;

@interface BonusQueryViewController : MajorViewController <RevealDescriptionViewDeleaget, UITextFieldDelegate, UIPickerViewDelegate, UIPickerViewDataSource, UITableViewDataSource, UITableViewDelegate>
{
    UILabel *_pBalanceLabel;
    UILabel *_pBalance1Label;
    UILabel *_pPointMonthLabel;
    UIView *_topView;
    UIView *_topBackView;
    UIButton *_thatDayButton;
    UIButton *_nearlyWeekButton;
    UIButton *_nearlyOneMonthButton;
    UIButton *_customButton;
    UITableView *_bonusDetailsTableView;
    NSString *_type;
    NSMutableArray *_pointLists;
    UIView *_blockView;
    UIView *_dateView;
    UIDatePicker *_startDatePicker;
    UIDatePicker *_endDatePicker;
    UITextField *_txtTransactionStatus;
    UITextField *_txtBeginDate;
    UITextField *_txtEndDate;
    NSString *_endDate;
    NSString *_startDate;
    NSMutableArray *_arrayMyaword;
    NSString *_txtTransactionNo;
    APIDataManager *_dataManager;
    BonusdetailsData *_bonusdetailsData;
    NSString *_back;
    UIButton *_imgBonucicon;
    UIView *_bonusBlockView;
    RevealDescriptionView *_descriptionView;
    UIView *_errorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) RevealDescriptionView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UIView *bonusBlockView; // @synthesize bonusBlockView=_bonusBlockView;
@property(retain, nonatomic) UIButton *imgBonucicon; // @synthesize imgBonucicon=_imgBonucicon;
@property(retain, nonatomic) NSString *back; // @synthesize back=_back;
@property(retain, nonatomic) BonusdetailsData *bonusdetailsData; // @synthesize bonusdetailsData=_bonusdetailsData;
@property(retain, nonatomic) APIDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) NSString *txtTransactionNo; // @synthesize txtTransactionNo=_txtTransactionNo;
@property(retain, nonatomic) NSMutableArray *arrayMyaword; // @synthesize arrayMyaword=_arrayMyaword;
@property(retain, nonatomic) NSString *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) UITextField *txtEndDate; // @synthesize txtEndDate=_txtEndDate;
@property(retain, nonatomic) UITextField *txtBeginDate; // @synthesize txtBeginDate=_txtBeginDate;
@property(retain, nonatomic) UITextField *txtTransactionStatus; // @synthesize txtTransactionStatus=_txtTransactionStatus;
@property(retain, nonatomic) UIDatePicker *endDatePicker; // @synthesize endDatePicker=_endDatePicker;
@property(retain, nonatomic) UIDatePicker *startDatePicker; // @synthesize startDatePicker=_startDatePicker;
@property(retain, nonatomic) UIView *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) UIView *blockView; // @synthesize blockView=_blockView;
@property(retain, nonatomic) NSMutableArray *pointLists; // @synthesize pointLists=_pointLists;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) UITableView *bonusDetailsTableView; // @synthesize bonusDetailsTableView=_bonusDetailsTableView;
@property(retain, nonatomic) UIButton *customButton; // @synthesize customButton=_customButton;
@property(retain, nonatomic) UIButton *nearlyOneMonthButton; // @synthesize nearlyOneMonthButton=_nearlyOneMonthButton;
@property(retain, nonatomic) UIButton *nearlyWeekButton; // @synthesize nearlyWeekButton=_nearlyWeekButton;
@property(retain, nonatomic) UIButton *thatDayButton; // @synthesize thatDayButton=_thatDayButton;
@property(retain, nonatomic) UIView *topBackView; // @synthesize topBackView=_topBackView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UILabel *pPointMonthLabel; // @synthesize pPointMonthLabel=_pPointMonthLabel;
@property(retain, nonatomic) UILabel *pBalance1Label; // @synthesize pBalance1Label=_pBalance1Label;
@property(retain, nonatomic) UILabel *pBalanceLabel; // @synthesize pBalanceLabel=_pBalanceLabel;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pickerDone:(id)arg1;
- (void)endDateChanged:(id)arg1;
- (void)startDateChanged:(id)arg1;
- (void)btnConfirmDateClick:(id)arg1;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)createCustomView;
- (void)getPointTransaction;
- (void)didGetPointTransactionFailed:(id)arg1;
- (void)system_maintenance:(id)arg1;
- (void)didGetPointTransactionSuccess:(id)arg1;
- (void)initTopView;
- (void)pressDoneDelegate;
- (void)revealDescription:(id)arg1;
- (void)changeTimeButton:(id)arg1;
- (void)initButton;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

