//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebUI/NSObject-Protocol.h>

@class NSString, WBSFormAutoFillCorrectionManager, WBSFormFieldClassificationCorrector;

@protocol WBSFormFieldClassificationCorrectorDelegate <NSObject>
- (_Bool)formFieldClassificationCorrector:(WBSFormFieldClassificationCorrector *)arg1 hasAddressBookDataForAddressBookLabel:(NSString *)arg2;
- (WBSFormAutoFillCorrectionManager *)formAutoFillCorrectionManagerForFormFieldClassificationCorrector:(WBSFormFieldClassificationCorrector *)arg1;
- (NSString *)formFieldClassificationCorrector:(WBSFormFieldClassificationCorrector *)arg1 bestAddressBookLabelForControlValue:(NSString *)arg2;
@end

