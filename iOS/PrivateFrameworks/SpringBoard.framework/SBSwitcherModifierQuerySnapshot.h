//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface SBSwitcherModifierQuerySnapshot : NSObject
{
    NSArray *_implementingQueryMethods;
    NSArray *_nonImplementingQueryMethods;
    NSDictionary *_queryMethodsToDescriptions;
}

@property(retain, nonatomic) NSDictionary *queryMethodsToDescriptions; // @synthesize queryMethodsToDescriptions=_queryMethodsToDescriptions;
@property(retain, nonatomic) NSArray *nonImplementingQueryMethods; // @synthesize nonImplementingQueryMethods=_nonImplementingQueryMethods;
@property(retain, nonatomic) NSArray *implementingQueryMethods; // @synthesize implementingQueryMethods=_implementingQueryMethods;
- (void).cxx_destruct;

@end

