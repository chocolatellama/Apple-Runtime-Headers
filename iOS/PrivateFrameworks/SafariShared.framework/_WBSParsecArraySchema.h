//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSParsecSchema.h>

@interface _WBSParsecArraySchema : WBSParsecSchema
{
    WBSParsecSchema *_elementSchema;
}

@property(retain, nonatomic) WBSParsecSchema *elementSchema; // @synthesize elementSchema=_elementSchema;
- (void).cxx_destruct;
- (_Bool)_validateChild:(id)arg1 ofParent:(id)arg2 withParentAssociatedError:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (id)initWithElementSchema:(id)arg1 associatedError:(id)arg2 isOptional:(_Bool)arg3;

@end

