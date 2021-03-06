//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKSosBase.h>

#import <iWorkImport/TSDComment-Protocol.h>

@class NSDate, NSString, TSDCommentStorage, TSDDrawableInfo, TSKAnnotationAuthor;

__attribute__((visibility("hidden")))
@interface TSDDrawableComment : TSKSosBase <TSDComment>
{
    TSDCommentStorage *mStorage;
    TSDDrawableInfo *_parent;
    NSString *_annotationUUID;
}

@property(retain, nonatomic) NSString *annotationUUID; // @synthesize annotationUUID=_annotationUUID;
@property(nonatomic) __weak TSDDrawableInfo *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (_Bool)isInDocument;
- (void)commentWillBeAddedToDocumentRoot;
@property(readonly, nonatomic) _Bool isHighlight;
@property(readonly, nonatomic) int annotationDisplayStringType;
@property(readonly, nonatomic) int annotationType;
@property(readonly, nonatomic) NSDate *date;
@property(retain, nonatomic) TSKAnnotationAuthor *author;
- (_Bool)isFloatingComment;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) TSDCommentStorage *storage;
- (void)p_updateAnnotationUUID;
- (id)initWithParent:(id)arg1 storage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

