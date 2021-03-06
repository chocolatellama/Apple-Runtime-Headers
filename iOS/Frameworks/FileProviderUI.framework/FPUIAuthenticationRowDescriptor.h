//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProviderUI/NSCopying-Protocol.h>

@class NSString;

@interface FPUIAuthenticationRowDescriptor : NSObject <NSCopying>
{
    double _rowHeight;
    double _shouldHighlight;
    CDUnknownBlockType _selectionHandler;
    CDUnknownBlockType _accessoryButtonTapHandler;
    Class _cellClass;
    NSString *_cellReuseIdentifier;
    CDUnknownBlockType _cellCustomizationHandler;
    CDUnknownBlockType _cellWillDisplayHandler;
    long long _cellSelectionStyle;
}

+ (id)defaultCellReuseIdentifier;
+ (Class)defaultCellClass;
@property(nonatomic) long long cellSelectionStyle; // @synthesize cellSelectionStyle=_cellSelectionStyle;
@property(copy, nonatomic) CDUnknownBlockType cellWillDisplayHandler; // @synthesize cellWillDisplayHandler=_cellWillDisplayHandler;
@property(copy, nonatomic) CDUnknownBlockType cellCustomizationHandler; // @synthesize cellCustomizationHandler=_cellCustomizationHandler;
@property(copy, nonatomic) NSString *cellReuseIdentifier; // @synthesize cellReuseIdentifier=_cellReuseIdentifier;
@property(copy, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(copy, nonatomic) CDUnknownBlockType accessoryButtonTapHandler; // @synthesize accessoryButtonTapHandler=_accessoryButtonTapHandler;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(nonatomic) double shouldHighlight; // @synthesize shouldHighlight=_shouldHighlight;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

