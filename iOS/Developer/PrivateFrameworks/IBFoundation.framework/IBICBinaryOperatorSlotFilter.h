//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlotFilter.h>

@interface IBICBinaryOperatorSlotFilter : IBICSlotFilter
{
    IBICSlotFilter *_lhs;
    IBICSlotFilter *_rhs;
}

@property(retain) IBICSlotFilter *rhs; // @synthesize rhs=_rhs;
@property(retain) IBICSlotFilter *lhs; // @synthesize lhs=_lhs;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(long long)arg1;
- (id)descriptionName;
- (void)ibic_generateSubNodes:(CDUnknownBlockType)arg1;
- (_Bool)isEqualToSlotFilterWithKnownIdenticalClass:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithSlotClass:(Class)arg1 leftHandSide:(id)arg2 rightHandSide:(id)arg3;

@end

