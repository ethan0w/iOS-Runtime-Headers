/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface CAContextImpl : CAContext  {
    struct Context { unsigned int x1; struct Context {} *x2; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_3_1_1; } x3; id x4; unsigned int x5; unsigned int x6; unsigned int x7; id x8; struct Context {} *x9; struct CGColorSpace {} *x10; struct __CFDictionary {} *x11; unsigned int x12; unsigned int x13; unsigned int x14; struct ObjectCache {} *x15; unsigned int x16; struct __CFMachPort {} *x17; struct __CFRunLoopSource {} *x18; float x19; struct Commit {} *x20; struct Generic { int (**x_21_1_1)(); struct Context {} *x_21_1_2; } x21; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; } *_impl;
}


- (void)invalidate;
- (void)dealloc;
- (struct CGColorSpace { }*)colorSpace;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setObject:(id)arg1 forSlot:(unsigned int)arg2;
- (unsigned int)createSlot;
- (void)deleteSlot:(unsigned int)arg1;
- (BOOL)valid;
- (id)options;
- (unsigned int)createFencePort;
- (float)level;
- (void)setFence:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)setFencePort:(unsigned int)arg1;
- (void)setFencePort:(unsigned int)arg1 commitHandler:(id)arg2;
- (void)setLevel:(float)arg1;
- (void)setLayer:(id)arg1;
- (void)orderAbove:(unsigned int)arg1;
- (id)layer;
- (unsigned int)contextId;
- (struct Context { }*)renderContext;
- (void)orderBelow:(unsigned int)arg1;
- (id)initRemoteWithOptions:(id)arg1;
- (id)initWithOptions:(id)arg1 localContext:(bool)arg2;

@end
