//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPStoreSocialRequestOperationDataSource-Protocol.h>

@class MPModelSocialPerson, NSString;

@interface MPStoreSocialRemoveFollowerOperationDataSource : NSObject <MPStoreSocialRequestOperationDataSource>
{
    MPModelSocialPerson *_person;
}

@property(retain, nonatomic) MPModelSocialPerson *person; // @synthesize person=_person;
- (void).cxx_destruct;
- (id)queryItems;
- (int)httpMethod;
- (int)httpBodyType;
- (id)httpBody;
- (id)bagKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

