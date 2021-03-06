//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKPencilAnnotationStorage-Protocol.h>

@class NSArray, NSData, NSDate, NSString, PKDrawing, TSKPKDrawing, TSPData, TSUBezierPath, TSUColor, TSUImage;
@protocol TSKPencilAnnotationStorage;

__attribute__((visibility("hidden")))
@interface TSDPencilAnnotationStorage : TSPObject <TSKPencilAnnotationStorage>
{
    struct CGPath *_path;
    TSPData *_rasterizedImageTSPData;
    TSUColor *_penColor;
    long long _toolType;
    NSDate *_creationDate;
    long long _compoundAnnotationType;
    long long _attachedLocation;
    long long _attachedType;
    double _percentOfPAContainedInParentRep;
    unsigned long long _textBaselinesTouchedCount;
    unsigned long long _visibleStrokesCount;
    TSKPKDrawing *_drawing;
    PKDrawing *_drawingForTextRecognition;
    TSPData *_encodedDrawingTSPData;
    TSPData *_legacyEncodedDrawingTSPData;
    NSArray *_subStorages;
    id <TSKPencilAnnotationStorage> _parentStorage;
    double _pencilAnnotationDrawingScale;
    struct CGPoint _markupOffset;
    struct CGSize _originalAttachedSize;
    struct CGRect _unscaledBoundsOfStrokes;
    struct CGRect _strokePointsFrame;
    struct CGRect _renderedFrame;
}

+ (id)p_rasterizedTSPDataForPencilAnnotationImage:(id)arg1 context:(id)arg2;
@property(nonatomic) double pencilAnnotationDrawingScale; // @synthesize pencilAnnotationDrawingScale=_pencilAnnotationDrawingScale;
@property(nonatomic) __weak id <TSKPencilAnnotationStorage> parentStorage; // @synthesize parentStorage=_parentStorage;
@property(retain, nonatomic) NSArray *subStorages; // @synthesize subStorages=_subStorages;
@property(readonly, nonatomic) TSPData *legacyEncodedDrawingTSPData; // @synthesize legacyEncodedDrawingTSPData=_legacyEncodedDrawingTSPData;
@property(readonly, nonatomic) TSPData *encodedDrawingTSPData; // @synthesize encodedDrawingTSPData=_encodedDrawingTSPData;
@property(retain, nonatomic) PKDrawing *drawingForTextRecognition; // @synthesize drawingForTextRecognition=_drawingForTextRecognition;
@property(retain, nonatomic) TSKPKDrawing *drawing; // @synthesize drawing=_drawing;
@property(nonatomic) struct CGRect renderedFrame; // @synthesize renderedFrame=_renderedFrame;
@property(nonatomic) struct CGRect strokePointsFrame; // @synthesize strokePointsFrame=_strokePointsFrame;
@property(nonatomic) struct CGRect unscaledBoundsOfStrokes; // @synthesize unscaledBoundsOfStrokes=_unscaledBoundsOfStrokes;
@property(nonatomic) unsigned long long visibleStrokesCount; // @synthesize visibleStrokesCount=_visibleStrokesCount;
@property(nonatomic) unsigned long long textBaselinesTouchedCount; // @synthesize textBaselinesTouchedCount=_textBaselinesTouchedCount;
@property(nonatomic) double percentOfPAContainedInParentRep; // @synthesize percentOfPAContainedInParentRep=_percentOfPAContainedInParentRep;
@property(nonatomic) struct CGSize originalAttachedSize; // @synthesize originalAttachedSize=_originalAttachedSize;
@property(nonatomic) struct CGPoint markupOffset; // @synthesize markupOffset=_markupOffset;
@property(nonatomic) long long attachedType; // @synthesize attachedType=_attachedType;
@property(nonatomic) long long attachedLocation; // @synthesize attachedLocation=_attachedLocation;
@property(nonatomic) long long compoundAnnotationType; // @synthesize compoundAnnotationType=_compoundAnnotationType;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) long long toolType; // @synthesize toolType=_toolType;
@property(readonly, nonatomic) TSUColor *penColor; // @synthesize penColor=_penColor;
@property(readonly, nonatomic) TSPData *rasterizedImageTSPData; // @synthesize rasterizedImageTSPData=_rasterizedImageTSPData;
@property(readonly, nonatomic) struct CGPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (struct CGSize)convertStrokeToUnscaledCanvasSize:(struct CGSize)arg1;
- (struct CGSize)convertUnscaledCanvasToStrokeSize:(struct CGSize)arg1;
- (struct CGPoint)convertStrokeToUnscaledCanvasPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertUnscaledCanvasToStrokePoint:(struct CGPoint)arg1;
- (struct CGRect)convertStrokeRectToUnscaledCanvas:(struct CGRect)arg1;
- (struct CGRect)convertUnscaledCanvasToStrokeRect:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool isCalloutParentStorage;
@property(readonly, nonatomic) TSUImage *rasterizedImage;
- (_Bool)isStretchableParagraphAnnotation;
@property(readonly, nonatomic) _Bool isCalloutMarginAnnotation;
@property(readonly, nonatomic) _Bool isCalloutLine;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
-     // Error parsing type: v32@0:8r^{PencilAnnotationStorageArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}^{Point}^{DataReference}^{DataReference}^{Path}^{Point}^{Size}^{Size}^{Color}^{Date}^{DataReference}^{Point}^{Size}^{Point}^{Size}iidQQiid}16@24, name: loadFromArchive:unarchiver:
@property(readonly, nonatomic) _Bool needsTextRecognition;
- (void)initializeTextRecognition;
@property(readonly, nonatomic) TSUBezierPath *unscaledPath;
@property(readonly, nonatomic) _Bool shouldResizeInOneDirection;
@property(readonly, nonatomic) _Bool shouldInvertStretchAxis;
@property(readonly, nonatomic) _Bool shouldUseHeadTail;
@property(readonly, nonatomic) _Bool shouldSplitAcrossAnchorRects;
@property(readonly, nonatomic) _Bool shouldResizeWithAnchor;
@property(readonly, nonatomic) NSData *legacyEncodedDrawing;
@property(readonly, nonatomic) NSData *encodedDrawing;
@property(readonly, nonatomic) struct CGRect unscaledStrokePointsFrame;
@property(readonly, nonatomic) struct CGRect unscaledRenderedFrame;
- (_Bool)p_isSubStorage;
@property(readonly, nonatomic) _Bool shouldShowAnchorRect;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 drawing:(id)arg2 markupOffset:(struct CGPoint)arg3 rasterizedImageTSPData:(id)arg4 attachedLocation:(long long)arg5 attachedType:(long long)arg6 encodedDrawing:(id)arg7 legacyEncodedDrawing:(id)arg8 path:(struct CGPath *)arg9 unscaledBoundsOfStrokes:(struct CGRect)arg10 originalAttachedSize:(struct CGSize)arg11 percentOfPAContainedInParentRep:(double)arg12 textBaselinesTouchedCount:(unsigned long long)arg13 visibleStrokesCount:(unsigned long long)arg14 penColor:(id)arg15 toolType:(long long)arg16 compoundAnnotationType:(long long)arg17 subStorages:(id)arg18 creationDate:(id)arg19 pencilAnnotationDrawingScale:(double)arg20 strokePointsFrame:(struct CGRect)arg21 renderedFrame:(struct CGRect)arg22;
- (id)initFromSOSWithContext:(id)arg1 markupOffset:(struct CGPoint)arg2 rasterizedImageTSPData:(id)arg3 attachedLocation:(long long)arg4 attachedType:(long long)arg5 encodedDrawing:(id)arg6 legacyEncodedDrawing:(id)arg7 path:(struct CGPath *)arg8 unscaledBoundsOfStrokes:(struct CGRect)arg9 originalAttachedSize:(struct CGSize)arg10 percentOfPAContainedInParentRep:(double)arg11 textBaselinesTouchedCount:(unsigned long long)arg12 visibleStrokesCount:(unsigned long long)arg13 penColor:(id)arg14 toolType:(long long)arg15 compoundAnnotationType:(long long)arg16 subStorages:(id)arg17 creationDate:(id)arg18 pencilAnnotationDrawingScale:(double)arg19 strokePointsFrame:(struct CGRect)arg20 renderedFrame:(struct CGRect)arg21;
- (id)initWithContext:(id)arg1 drawing:(id)arg2 markupOffset:(struct CGPoint)arg3 rasterizedImage:(id)arg4 attachedLocation:(long long)arg5 attachedType:(long long)arg6 path:(struct CGPath *)arg7 unscaledBoundsOfStrokes:(struct CGRect)arg8 originalAttachedSize:(struct CGSize)arg9 percentOfPAContainedInParentRep:(double)arg10 textBaselinesTouchedCount:(unsigned long long)arg11 visibleStrokesCount:(unsigned long long)arg12 penColor:(id)arg13 toolType:(long long)arg14 compoundAnnotationType:(long long)arg15 subStorages:(id)arg16 creationDate:(id)arg17 pencilAnnotationDrawingScale:(double)arg18;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

