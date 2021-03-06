//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioUnitMeterClipping {
    float peakValueSinceLastCall;
    unsigned char sawInfinity;
    unsigned char sawNotANumber;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct NSDictionary {
    Class _field1;
};

struct NSNumber {
    Class _field1;
};

struct PowerMeter {
    double mSampleRate;
    double mPeakDecay1;
    double mPeakDecay;
    double mDecay1;
    double mDecay;
    int mPrevBlockSize;
    int mPeakHoldCount;
    double mMaxPeak;
    struct AudioUnitMeterClipping mClipping;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIOffset {
    double _field1;
    double _field2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _RCWaveformRendererState {
    _Bool recordDidSwitch;
    double lastRenderTime;
};

struct vector<float, std::__1::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    double beginTime;
    double endTime;
} CDStruct_73a5d3ca;

typedef struct {
    float scale;
    double vDeltaWaveformToTimeBaseline;
    double vDeltaTimeBaselineToTitleBaseline;
    double vDeltaTitleBaselineToDateBaseline;
    double vDeltaDateBaselineToControlsTop;
    double vDeltaControlsBottomToBottom;
    double vDeltaControlsTopToNavigationBottom;
    _Bool hIsWaveformFlushToEdges;
    double hDeltaAdditionalInsetFromWaveformEdge;
    double hDeltaControlButtonsSpacing;
    double hDeltaTrimProgressInset;
    double hTrimModeInset;
    double hDetailNavigationBarInset;
    double hPresentedRecordMemoHeight;
    double vDeltaLockAbsoluteTopToWaveformTop;
} CDStruct_a8723754;

// Template types
typedef struct vector<float, std::__1::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *__value_;
    } __end_cap_;
} vector_7584168e;

