/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@class GLKEffect;

@interface GLKEffectProperty : NSObject  {
    int _location;
    char *_nameString;
    struct GLKEffectPropertyPrv { struct GLKBigInt_s {} *x1; struct GLKBigInt_s {} *x2; struct GLKBigInt_s {} *x3; struct GLKBigInt_s {} *x4; id x5; } *_prv;
    char *_vshSource;
    char *_fshSource;
    unsigned long long _dirtyUniforms;
    unsigned char _masksInitialized;
    GLKEffect *_effect;
}

@property int location;
@property char * nameString;
@property char * vshSource;
@property char * fshSource;
@property unsigned long long dirtyUniforms;
@property unsigned char masksInitialized;
@property GLKEffect * effect;

+ (void)logSetMasksWithLabel:(id)arg1 obj:(id)arg2 typeStr:(id)arg3;
+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;

- (void)setLocation:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)effect;
- (void)setEffect:(id)arg1;
- (char *)nameString;
- (void)setNameString:(char *)arg1;
- (int)location;
- (void)bind;
- (void)setFshSource:(char *)arg1;
- (char *)fshSource;
- (void)setVshSource:(char *)arg1;
- (char *)vshSource;
- (void)setMasks;
- (void)setFSHSource:(char *)arg1;
- (void)setVSHSource:(char *)arg1;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)vshMask;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)fshMask;
- (unsigned char)masksInitialized;
- (void)setMasksInitialized:(unsigned char)arg1;
- (void)setShaderBindings;
- (void)initializeMasks;
- (bool)includeFshShaderTextForRootNode:(id)arg1;
- (bool)includeVshShaderTextForRootNode:(id)arg1;
- (unsigned long long)dirtyUniforms;
- (void)setDirtyUniforms:(unsigned long long)arg1;
- (void)dirtyAllUniforms;

@end
