/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLFBO : TSCH3DGLFramebuffer {
    TSCH3DFBOLoader * mLoader;
    BOOL  mPreserveProtectedResourceAfterDestroy;
    TSCH3DResource * mResource;
}

@property (nonatomic) BOOL preserveProtectedResourceAfterDestroy;

+ (id)FBOFromContext:(id)arg1 size:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 attributes:(const struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; }*)arg3 colorAllocator:(id)arg4 depthAllocator:(id)arg5 resource:(id)arg6;
+ (id)FBOFromContext:(id)arg1 size:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 attributes:(const struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; }*)arg3 textureAttributes:(const struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; }*)arg4 resource:(id)arg5;
+ (id)FBOFromContext:(id)arg1 size:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 attributes:(const struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; }*)arg3 textureAttributes:(const struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; }*)arg4 resource:(id)arg5 FBOClass:(Class)arg6 RTTRenderbufferAllocatorBlock:(id /* block */)arg7;

- (id)FBOHandleForSession:(id)arg1;
- (id)GLHandleForSession:(id)arg1;
- (BOOL)activateInsideSession:(id)arg1;
- (void)bindColorbufferInSession:(id)arg1;
- (BOOL)bindInSession:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)destroyResourcesInSession:(id)arg1;
- (void)disableSamplingInSession:(id)arg1;
- (void)discardBuffers;
- (void)discardColorBuffer;
- (void)discardDepthBuffer;
- (unsigned int)estimatedMemroyInBytes;
- (id)initFromContext:(id)arg1 size:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 attributes:(const struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; }*)arg3 colorAllocator:(id)arg4 depthAllocator:(id)arg5 resource:(id)arg6;
- (BOOL)isProtectedInSession:(id)arg1;
- (BOOL)isTexturable;
- (struct SessionLoadResourceResult { BOOL x1; BOOL x2; BOOL x3; id x4; })loadInsideSession:(id)arg1;
- (id)loader;
- (BOOL)preserveProtectedResourceAfterDestroy;
- (void)protectInSession:(id)arg1 unprotectOnFail:(BOOL)arg2;
- (void)setPreserveProtectedResourceAfterDestroy:(BOOL)arg1;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })size;
- (unsigned int)type;
- (void)unprotectInSession:(id)arg1 clearOnFailProtection:(BOOL)arg2;
- (BOOL)validForSession:(id)arg1;

@end
