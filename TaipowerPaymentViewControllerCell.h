//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class APIDataManager, NSMutableArray, UIButton, UILabel;

@interface TaipowerPaymentViewControllerCell : UITableViewCell
{
    APIDataManager *_dataManager;
    UILabel *_tollDay;
    UILabel *_typeFee;
    UILabel *_amt;
    UILabel *_KWH;
    UIButton *_checkbox;
    NSMutableArray *_checkArray;
    CDUnknownBlockType _btnClick;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType btnClick; // @synthesize btnClick=_btnClick;
@property(retain, nonatomic) NSMutableArray *checkArray; // @synthesize checkArray=_checkArray;
@property(retain, nonatomic) UIButton *checkbox; // @synthesize checkbox=_checkbox;
@property(retain, nonatomic) UILabel *KWH; // @synthesize KWH=_KWH;
@property(retain, nonatomic) UILabel *amt; // @synthesize amt=_amt;
@property(retain, nonatomic) UILabel *typeFee; // @synthesize typeFee=_typeFee;
@property(retain, nonatomic) UILabel *tollDay; // @synthesize tollDay=_tollDay;
@property(nonatomic) APIDataManager *dataManager; // @synthesize dataManager=_dataManager;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)checkAction:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

