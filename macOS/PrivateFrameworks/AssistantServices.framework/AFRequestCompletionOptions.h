//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFTriggerlessListeningOptions;

@interface AFRequestCompletionOptions : NSObject <NSSecureCoding, NSCopying>
{
    AFTriggerlessListeningOptions *_triggerlessListeningOptions;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) AFTriggerlessListeningOptions *triggerlessListeningOptions; // @synthesize triggerlessListeningOptions=_triggerlessListeningOptions;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithShowUIDuringListening:(BOOL)arg1 playAlertBeforeListening:(BOOL)arg2;

@end

