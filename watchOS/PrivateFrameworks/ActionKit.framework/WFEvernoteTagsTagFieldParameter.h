//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFDynamicTagFieldParameter.h>

#import <ActionKit/WFDynamicTagFieldDataSource-Protocol.h>

@class NSString, WFEvernoteAccessResource;

@interface WFEvernoteTagsTagFieldParameter : WFDynamicTagFieldParameter <WFDynamicTagFieldDataSource>
{
    WFEvernoteAccessResource *_evernoteAccessResource;
}

+ (id)referencedActionResourceClasses;
@property(retain, nonatomic) WFEvernoteAccessResource *evernoteAccessResource; // @synthesize evernoteAccessResource=_evernoteAccessResource;
- (void).cxx_destruct;
- (id)suggestedTagsForTagField:(id)arg1;
- (void)updateTags;
- (void)wasAddedToWorkflow;
- (void)setActionResources:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

