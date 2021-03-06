//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataAccess/DAContactsAccount-Protocol.h>

@class CNAccount, NSString;

@interface DAContactsBasedAccount : NSObject <DAContactsAccount>
{
    _Bool _markedForDeletion;
    CNAccount *_account;
}

@property(nonatomic) _Bool markedForDeletion; // @synthesize markedForDeletion=_markedForDeletion;
@property(readonly, nonatomic) CNAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)markForDeletion;
- (void)updateSaveRequest:(id)arg1;
- (_Bool)isAccount;
- (_Bool)isContainer;
- (_Bool)isGroup;
- (_Bool)isContact;
- (id)externalIdentifier;
- (id)identifier;
- (int)legacyIdentifier;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

