//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
};

struct AudioStreamBasicDescription {
    double _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
};

struct AudioStreamPacketDescription;

struct CATransform3D {
    float m11;
    float m12;
    float m13;
    float m14;
    float m21;
    float m22;
    float m23;
    float m24;
    float m31;
    float m32;
    float m33;
    float m34;
    float m41;
    float m42;
    float m43;
    float m44;
};

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct CKBalloonDescriptor_t {
    char _field1;
    char _field2;
    char _field3;
    char _field4;
    unsigned int _field5;
    char _field6;
    int _field7;
    int _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct IMAssociatedMessageGeometryDescriptor {
    unsigned int layoutIntent;
    unsigned int associatedLayoutIntent;
    float parentPreviewWidth;
    float xScalar;
    float yScalar;
    float scale;
    float rotation;
};

struct IMPreviewConstraints {
    float _field1;
    struct CGSize _field2;
    float _field3;
    _Bool _field4;
};

struct UIEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    float _field6;
    int _field7;
} CDStruct_86e6d80c;

