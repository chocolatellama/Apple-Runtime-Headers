//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFParameter.h>

@class NSSet, NSString;

@interface WFDictionaryParameter : WFParameter
{
    NSString *_localizedItemTypeName;
    NSString *_localizedNewItemTypeName;
    NSSet *_allowedValueTypes;
}

@property(readonly, nonatomic) NSSet *allowedValueTypes; // @synthesize allowedValueTypes=_allowedValueTypes;
@property(readonly, nonatomic) NSString *localizedNewItemTypeName; // @synthesize localizedNewItemTypeName=_localizedNewItemTypeName;
@property(readonly, nonatomic) NSString *localizedItemTypeName; // @synthesize localizedItemTypeName=_localizedItemTypeName;
- (void).cxx_destruct;
- (id)defaultSupportedVariableTypes;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

