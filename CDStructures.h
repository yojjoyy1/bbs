//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
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

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct GAIReachabilityApi {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
};

struct J2ObjcAttribute {
    unsigned short _field1;
    unsigned short _field2;
};

struct J2ObjcClassInfo {
    char *_field1;
    char *_field2;
    char *_field3;
    unsigned short _field4;
    unsigned short _field5;
    struct J2ObjcMethodInfo *_field6;
    unsigned short _field7;
    struct J2ObjcFieldInfo *_field8;
    unsigned short _field9;
    char **_field10;
    unsigned short _field11;
    struct J2ObjcAttribute *_field12;
};

struct J2ObjcFieldInfo {
    char *_field1;
    char *_field2;
    unsigned short _field3;
    char *_field4;
    void *_field5;
    CDUnion_f43d4af3 _field6;
};

struct J2ObjcMethodInfo {
    char *_field1;
    char *_field2;
    char *_field3;
    unsigned short _field4;
    char *_field5;
};

struct JreStringBuilder {
    unsigned short *buffer_;
    int bufferSize_;
    int count_;
};

struct MSVideoSize {
    int width;
    int height;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _CallContext {
    struct _LinphoneCall *call;
    unsigned char cameraIsEnabled;
};

struct _LinphoneCall;

struct _LinphoneManagerSounds {
    unsigned int vibrate;
};

struct _LinphoneRingtonePlayer {
    id _field1;
    id _field2;
    CDUnknownFunctionPointerType _field3;
    void *_field4;
};

struct _MSAverageFPS {
    unsigned int last_frame_time;
    unsigned int last_print_time;
    float mean_inter_frame;
    char *context;
};

struct _MSList {
    struct _MSList *_field1;
    struct _MSList *_field2;
    void *_field3;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __CFString;

struct _xmlNode {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    char *_field11;
    struct _xmlAttr *_field12;
    struct _xmlNs *_field13;
    void *_field14;
    unsigned short _field15;
    unsigned short _field16;
};

struct _xmlNs;

struct datab;

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct internal_state;

struct msgb {
    struct msgb *_field1;
    struct msgb *_field2;
    struct msgb *_field3;
    struct datab *_field4;
    char *_field5;
    char *_field6;
    unsigned int _field7;
    unsigned int _field8;
    struct ortp_recv_addr _field9;
    struct sockaddr_storage _field10;
    unsigned int _field11;
    unsigned char _field12;
};

struct ortp_recv_addr {
    int _field1;
    union {
        struct in_addr _field1;
        struct in6_addr _field2;
    } _field2;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_storage {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[6];
    long long _field4;
    char _field5[112];
};

struct uregex;

struct z_stream_s {
    char *next_in;
    unsigned int avail_in;
    unsigned long long total_in;
    char *next_out;
    unsigned int avail_out;
    unsigned long long total_out;
    char *msg;
    struct internal_state *state;
    CDUnknownFunctionPointerType zalloc;
    CDUnknownFunctionPointerType zfree;
    void *opaque;
    int data_type;
    unsigned long long adler;
    unsigned long long reserved;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    long long _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
} CDStruct_e097db04;

#pragma mark Typedef'd Unions

typedef union {
    void *_field1;
    char _field2;
    unsigned short _field3;
    short _field4;
    int _field5;
    long long _field6;
    float _field7;
    double _field8;
    _Bool _field9;
} CDUnion_f43d4af3;

