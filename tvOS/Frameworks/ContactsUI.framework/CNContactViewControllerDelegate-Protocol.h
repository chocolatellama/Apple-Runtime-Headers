//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContact, CNContactProperty, CNContactViewController;

@protocol CNContactViewControllerDelegate <NSObject>

@optional
- (void)contactViewController:(CNContactViewController *)arg1 didCompleteWithContact:(CNContact *)arg2;
- (_Bool)contactViewController:(CNContactViewController *)arg1 shouldPerformDefaultActionForContactProperty:(CNContactProperty *)arg2;
@end

