//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupFieldView.h>

#import <PassKitUI/NSTextFieldDelegate-Protocol.h>

@class NSString, NSTextField;

@interface PKPaymentSetupTextFieldView : PKPaymentSetupFieldView <NSTextFieldDelegate>
{
    NSTextField *_textField;
}

@property(retain) NSTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (id)textView:(id)arg1 willDisplayToolTip:(id)arg2 forCharacterAtIndex:(unsigned long long)arg3;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)label;
- (void)controlTextDidChange:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)initWithSetupField:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

