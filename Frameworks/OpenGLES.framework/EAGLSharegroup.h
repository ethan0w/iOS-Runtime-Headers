/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
 */

@class NSString;

@interface EAGLSharegroup : NSObject  {
    struct _EAGLSharegroupPrivate { unsigned int x1; int x2; boolx3; struct __GLDPixelFormatRec { struct __GLDPixelFormatRec {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; unsigned int x_4_1_8; short x_4_1_9; short x_4_1_10; short x_4_1_11; short x_4_1_12; unsigned int x_4_1_13; unsigned char x_4_1_14; unsigned char x_4_1_15; unsigned char x_4_1_16; unsigned char x_4_1_17; unsigned int x_4_1_18; } x4; struct __GLISharedRec {} *x5; } *_private;
    NSString *debugLabel;
}

@property(copy) NSString * debugLabel;


- (id)initWithAPI:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (struct __GLISharedRec { }*)getGLIShared;
- (void)loadGLIPlugin:(struct __GLDPixelFormatRec { struct __GLDPixelFormatRec {} *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; short x9; short x10; short x11; short x12; unsigned int x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned int x18; }*)arg1 sharedWithCompute:(BOOL)arg2;
- (id)debugLabel;
- (id)initWithAPI:(unsigned int)arg1 sharedWithCompute:(BOOL)arg2;
- (void)setDebugLabel:(id)arg1;
- (unsigned int)APIs;

@end
