//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextFieldDelegate.h"

@class NSMutableDictionary, NSNumberFormatter, NSString, UILabel, UITextField, UIToolbar;

@interface SBTextFieldViewCell : UITableViewCell <UITextFieldDelegate>
{
    NSString *_fieldOption;
    NSMutableDictionary *_fieldOptionInfo;
    UILabel *_titleLabel;
    UITextField *_valueTextField;
    UIToolbar *_toolbar;
    NSNumberFormatter *_moneyFormatter;
    long long _maxLength;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long maxLength; // @synthesize maxLength=_maxLength;
@property(readonly, nonatomic) NSNumberFormatter *moneyFormatter; // @synthesize moneyFormatter=_moneyFormatter;
@property(readonly, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) __weak UITextField *valueTextField; // @synthesize valueTextField=_valueTextField;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak NSMutableDictionary *fieldOptionInfo; // @synthesize fieldOptionInfo=_fieldOptionInfo;
@property(retain, nonatomic) NSString *fieldOption; // @synthesize fieldOption=_fieldOption;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)toolbarDoneClick:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
