//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABCardViewDataSource-Protocol.h>

@class ABCommandExecutor, AKCardViewDataSource, NSString;
@protocol ABCardViewMultiValue;

@interface ABCardViewUndoableDataSource : NSObject <ABCardViewDataSource>
{
    AKCardViewDataSource *_dataSource;
    ABCommandExecutor *_commandExecutor;
}

@property(retain, nonatomic) ABCommandExecutor *commandExecutor; // @synthesize commandExecutor=_commandExecutor;
@property(retain, nonatomic) AKCardViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)createAndExecuteEditCommandWithKey:(id)arg1 value:(id)arg2;
- (void)rejectLabeledValue:(id)arg1 valueKeyPath:(id)arg2;
- (void)confirmLabeledValue:(id)arg1 valueKeyPath:(id)arg2;
- (id)makeSetImageCommandWithImage:(id)arg1 forLinkedContactWithIdentifier:(id)arg2;
- (id)makeSetImageCommandWithImage:(id)arg1;
- (id)updatedImageCommand;
- (id)updatedImage;
- (id)editedPropertyKeys;
- (id)contact;
- (id)updatedContacts;
- (id)unlinkedContacts;
- (void)executeCommand:(id)arg1;
@property(retain, nonatomic) id <ABCardViewMultiValue> textAlert;
@property(retain, nonatomic) id <ABCardViewMultiValue> callAlert;
@property(retain, nonatomic) id <ABCardViewMultiValue> preferredForName;
- (id)identifierOfPersonPreferredForPhoto;
- (void)setPersonWithIdentifierPreferredForPhoto:(id)arg1;
- (void)setImage:(id)arg1 forLinkedContactWithIdentifier:(id)arg2;
- (void)setImage:(id)arg1;
- (id)uniqueIdentifiers;
- (id)URL;
@property(getter=isTransient) BOOL transient;
- (BOOL)isDirectoryResult;
- (BOOL)isEmpty;
- (BOOL)isReadOnly;
- (BOOL)isMe;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (unsigned long long)displayStyle;
- (void)setJobTitle:(id)arg1;
- (id)jobTitle;
- (id)jobTitlePlaceholder;
- (void)setDepartmentName:(id)arg1;
- (id)departmentName;
- (id)departmentNamePlaceholder;
- (void)setPhoneticOrganizationName:(id)arg1;
- (id)phoneticOrganizationNamePlaceholder;
- (id)phoneticOrganizationName;
- (void)setOrganizationName:(id)arg1;
- (id)organizationName;
- (id)organizationNamePlaceholder;
- (id)phoneticCompleteName;
- (id)phoneticCompleteNamePlaceholder;
- (void)setPhoneticFamilyName:(id)arg1;
- (id)phoneticFamilyName;
- (id)phoneticFamilyNamePlaceholder;
- (void)setPhoneticMiddleName:(id)arg1;
- (id)phoneticMiddleName;
- (id)phoneticMiddleNamePlaceholder;
- (void)setPhoneticGivenName:(id)arg1;
- (id)phoneticGivenName;
- (id)phoneticGivenNamePlaceholder;
- (id)completeName;
- (id)completeNamePlaceholder;
- (void)setNickname:(id)arg1;
- (id)nickname;
- (id)nicknamePlaceholder;
- (void)setNameSuffix:(id)arg1;
- (id)nameSuffix;
- (id)nameSuffixPlaceholder;
- (void)setFamilyName:(id)arg1;
- (id)familyName;
- (id)familyNamePlaceholder;
- (void)setMiddleName:(id)arg1;
- (id)middleName;
- (id)middleNamePlaceholder;
- (void)setGivenName:(id)arg1;
- (id)givenName;
- (id)givenNamePlaceholder;
- (void)setNamePrefix:(id)arg1;
- (id)namePrefix;
- (id)namePrefixPlaceholder;
@property(retain, nonatomic) id <ABCardViewMultiValue> postalAddresses;
@property(retain, nonatomic) id <ABCardViewMultiValue> note;
@property(retain, nonatomic) id <ABCardViewMultiValue> previousFamilyName;
@property(retain, nonatomic) id <ABCardViewMultiValue> contactRelations;
@property(retain, nonatomic) id <ABCardViewMultiValue> socialProfiles;
@property(retain, nonatomic) id <ABCardViewMultiValue> instantMessageAddresses;
@property(retain, nonatomic) id <ABCardViewMultiValue> urlAddresses;
@property(retain, nonatomic) id <ABCardViewMultiValue> dates;
@property(retain, nonatomic) id <ABCardViewMultiValue> nonGregorianBirthday;
@property(retain, nonatomic) id <ABCardViewMultiValue> birthday;
@property(retain, nonatomic) id <ABCardViewMultiValue> emailAddresses;
@property(retain, nonatomic) id <ABCardViewMultiValue> phoneNumbers;
@property(retain, nonatomic) id <ABCardViewMultiValue> linkedContacts;
- (void)manuallyAddPropertyKey:(id)arg1;
- (BOOL)hasKeyBeenManuallyAdded:(id)arg1;
- (BOOL)keyAvailable:(id)arg1;
- (id)multiValueKeys;
- (BOOL)shouldUseUnifiedPlaceholderForKey:(id)arg1;
- (BOOL)shouldOfferPhoneticName;
- (BOOL)allowsPhotoEditing;
- (id)nameViewKeys;
- (id)phoneticNameKeys;
- (id)nameKeys;
- (BOOL)hasChanges;
- (void)markAsViewed:(id)arg1;
- (id)contactIdentifer;
- (id)addressBookForActionExecution;
- (id)initWithDataSource:(id)arg1 commandExecutor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

