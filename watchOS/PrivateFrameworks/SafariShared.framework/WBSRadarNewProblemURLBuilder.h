//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface WBSRadarNewProblemURLBuilder : NSObject
{
    NSString *_componentName;
    NSString *_componentVersion;
    NSString *_title;
    NSString *_descriptionText;
    NSArray *_attachmentURLs;
    int _classification;
}

@property(nonatomic) int classification; // @synthesize classification=_classification;
@property(copy, nonatomic) NSArray *attachmentURLs; // @synthesize attachmentURLs=_attachmentURLs;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *componentVersion; // @synthesize componentVersion=_componentVersion;
@property(copy, nonatomic) NSString *componentName; // @synthesize componentName=_componentName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *url;

@end

