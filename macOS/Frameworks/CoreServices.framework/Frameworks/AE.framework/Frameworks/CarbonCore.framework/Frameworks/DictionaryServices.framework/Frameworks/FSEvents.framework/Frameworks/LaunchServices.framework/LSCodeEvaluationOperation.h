//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LSCodeEvaluationInfo, NSUUID;

__attribute__((visibility("hidden")))
@interface LSCodeEvaluationOperation : NSObject
{
    NSUUID *_identifier;
    LSCodeEvaluationInfo *_info;
    CDUnknownBlockType _handler;
}

@property(copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy) LSCodeEvaluationInfo *info; // @synthesize info=_info;
@property(copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithInfo:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

