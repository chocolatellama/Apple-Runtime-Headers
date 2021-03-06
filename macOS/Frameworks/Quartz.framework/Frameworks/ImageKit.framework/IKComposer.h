//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, IKFilterChain, IKImageBackgroundLayer, IKImageLayer, IKImageView, IKRootLayer, NSColor, NSMutableArray, NSMutableDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface IKComposer : NSObject
{
    IKImageView *_view;
    id _viewDelegate;
    IKRootLayer *_rootLayer;
    IKImageBackgroundLayer *_imageBackgroundLayer;
    IKImageLayer *_imageLayer;
    CALayer *_userOverlayImage;
    CALayer *_userOverlayRoot;
    CALayer *_mouseDownLayer;
    NSMutableArray *_layers;
    NSMutableDictionary *_registeredLayers;
    NSURL *_URL;
    IKFilterChain *_filterChain;
    long long _toolMode;
    long long _oldToolMode;
    int _selectionType;
    int _annotationType;
    int _maxTextureSize;
    NSColor *_backgroundColor;
    struct CGColor *_cgBackgroundColor;
    BOOL _viewDelegateRespondsToWillChange;
    BOOL _viewDelegateRespondsToDidChange;
    BOOL _viewDelegateRespondsToDidChangeWithParameters;
    BOOL _viewDelegateRespondsToUndoManagerForOperation;
    BOOL _needToCreateImageForImageState;
    BOOL _reuseImageLayer;
    BOOL _isOpaque;
}

+ (struct CGImage *)imageFromCGImage:(struct CGImage *)arg1 imageProperties:(id)arg2 imageState:(id)arg3 options:(id)arg4;
+ (struct CGImage *)imageFromURL:(id)arg1 imageState:(id)arg2 options:(id)arg3;
+ (struct CGImage *)createCopy:(struct CGImage *)arg1 filterArray:(id)arg2;
+ (struct CGImage *)createCopy:(struct CGImage *)arg1 orientationTag:(int)arg2;
+ (struct CGContext *)createContextForCGImage:(struct CGImage *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 alphaInfo:(unsigned int)arg4 data:(void **)arg5;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
@property BOOL isOpaque; // @synthesize isOpaque=_isOpaque;
@property BOOL reuseImageLayer; // @synthesize reuseImageLayer=_reuseImageLayer;
- (void)filter:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)filterArray;
- (void)setFilterArray:(id)arg1;
- (id)filter:(id)arg1 valueForKey:(id)arg2;
- (void)updateFilter:(id)arg1 withParameters:(id)arg2;
- (void)filterRemoved:(id)arg1 filterChain:(id)arg2;
- (void)filterAdded:(id)arg1 filterChain:(id)arg2;
- (void)setFilterChain:(id)arg1;
- (id)filterChain;
- (void)filterChainChanged:(id)arg1;
- (void)reassignFilterChain:(id)arg1;
- (void)showKnobs;
- (void)hideKnobs;
- (BOOL)validLayer:(id)arg1;
- (void)doRemoveAnnotation:(id)arg1;
- (void)doAddAnnotation:(id)arg1 select:(BOOL)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 inObject:(id)arg3;
- (id)overlayForType:(id)arg1;
- (void)setOverlay:(id)arg1 forType:(id)arg2;
- (void)removeLayer:(id)arg1;
- (void)addLayer:(id)arg1 linkedTo:(id)arg2;
- (void)unbindLayer:(id)arg1;
- (void)bind:(id)arg1 toLayer:(id)arg2;
- (id)imageLayer;
- (id)backgroundLayer;
- (id)rootLayer;
- (id)layerOfType:(id)arg1;
- (void)setImageLayer:(id)arg1;
- (void)setupImageLayer;
- (id)layerForImage;
- (void)setupImageBackgroundLayer;
- (void)setupRootLayer;
- (void)setupDefaultLayers;
- (void)registerInternalLayers;
- (id)createLayerForTool:(long long)arg1 event:(id)arg2;
- (id)layerForTool:(long long)arg1;
- (id)layerForName:(id)arg1;
- (BOOL)registerLayer:(id)arg1;
- (void)applyPaste:(id)arg1;
- (void)applyPasteCallback:(id)arg1 layer:(id)arg2;
- (void)paste:(id)arg1;
- (BOOL)canPaste;
- (BOOL)canCrop;
- (void)crop:(id)arg1;
- (void)swapOldImage:(struct CGImage *)arg1 oldState:(id)arg2 newImage:(struct CGImage *)arg3 newState:(id)arg4 undoManager:(id)arg5;
- (void)removeSelectionLayers;
- (void)copy:(id)arg1;
- (struct CGImage *)cgImageFromSelection:(BOOL)arg1;
- (struct CGImage *)cgImageFromSelection:(BOOL)arg1 createSquarePixels:(BOOL)arg2;
- (void)selectionRectDidChange:(struct CGRect)arg1;
- (void)selectionRectRemoved;
- (void)selectionRectAdded;
- (void)setSelectionRectCG:(struct CGRect)arg1;
- (struct CGRect)selectionRectCG;
- (void)selectAll:(id)arg1;
- (struct CGRect)convertImageRectToViewRect:(struct CGRect)arg1;
- (struct CGPoint)convertImagePointToViewPoint:(struct CGPoint)arg1;
- (struct CGRect)convertViewRectToImageRect:(struct CGRect)arg1;
- (struct CGPoint)convertViewPointToImagePoint:(struct CGPoint)arg1;
- (void)rotateImageRight:(id)arg1;
- (void)rotateImageLeft:(id)arg1;
- (void)flipImageVertical:(id)arg1;
- (void)flipImageHorizontal:(id)arg1;
- (void)setRotationAngle:(double)arg1 centerPoint:(struct CGPoint)arg2;
- (void)scrollToRect:(struct CGRect)arg1;
- (void)scrollToPoint:(struct CGPoint)arg1;
- (void)setImageZoomFactor:(double)arg1 centerPoint:(struct CGPoint)arg2;
- (void)changeFont:(id)arg1;
- (void)changeColor:(id)arg1;
- (struct CGColor *)cgBackgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (struct CGColor *)createCGColorFromNSColor:(id)arg1;
- (id)backgroundColor;
- (void)addCursorRectForToolMode;
- (int)selectionType;
- (void)setSelectionType:(int)arg1;
- (int)annotationType;
- (void)setAnnotationType:(int)arg1;
- (void)resetToolMode;
- (void)setToolMode:(long long)arg1;
- (long long)toolMode;
- (int)maxTextureSize;
- (id)undoManagerForOperation:(id)arg1;
- (id)imageView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)targetForSelector:(SEL)arg1;
- (void)setMouseDownLayer:(id)arg1;
- (id)mouseDownLayer;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)keyDown:(id)arg1;
- (void)imageDidChange;
- (void)imageDidChange:(BOOL)arg1 imageStateDidChange:(BOOL)arg2;
- (void)imageWillChange;
- (void)applyPendingChanges;
- (void)imageState:(id *)arg1 image:(struct CGImage **)arg2 options:(id)arg3;
- (struct CGImage *)imageForImageState;
- (id)imageState;
- (struct CGSize)imageSize;
- (struct CGImage *)imageWithOptions:(id)arg1;
- (void)renderOptionsForOptionsCallback:(id)arg1 param:(id)arg2;
- (struct CGImage *)image;
- (struct CGImage *)createImageWithCallback:(SEL)arg1 param:(id)arg2;
- (struct CGImage *)createNewImageWithCallback:(SEL)arg1 param:(id)arg2 applyFilters:(BOOL)arg3;
- (struct CGImage *)createThumbnailWithMaximumSize:(struct CGSize)arg1;
- (id)imageProperties;
- (void)setImage:(struct CGImage *)arg1 imageProperties:(id)arg2 imageState:(id)arg3 options:(id)arg4;
- (void)setImageWithURL:(id)arg1 imageState:(id)arg2 options:(id)arg3;
- (id)fileURL;
- (void)closingDown;
- (void)viewDelegateChanged;
- (void)finalize;
- (void)dealloc;
- (void)cleanup;
- (id)initWithView:(id)arg1;

@end

