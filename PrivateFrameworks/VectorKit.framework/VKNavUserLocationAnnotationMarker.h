/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKAnimation, VGLRenderState, VGLMesh, VGLDualTexturedMesh, VGLSingleTexturedMesh, VGLTexture;

@interface VKNavUserLocationAnnotationMarker : VKMeshAnnotationMarker  {
    VGLDualTexturedMesh *_domeMesh;
    VGLSingleTexturedMesh *_arrowMesh;
    VGLSingleTexturedMesh *_rimMesh;
    VGLMesh *_dropShadowMesh;
    VGLRenderState *_renderState;
    BOOL _shouldBillboard;
    double _animationStartTime;
    double _lastFrameTimestamp;
    float _scale;
    BOOL _shouldShowCourse;
    double _presentationCourse;
    double _sizePoints;
    BOOL _stale;
    VGLTexture *_domeTexture;
    VGLTexture *_domeTextureGrey;
    VGLTexture *_arrowTexture;
    VGLTexture *_arrowTextureGrey;
    VGLTexture *_arrowShadowTexture;
    VGLTexture *_arrowShadowTextureGrey;
    VKAnimation *_puckStyleAnimation;
    int _puckStyle;
    float _greyPuckAlphaScale;
}

@property BOOL shouldBillboard;
@property BOOL shouldShowCourse;
@property float scale;
@property(getter=isStale) BOOL stale;
@property double presentationCourse;


- (BOOL)shouldShowCourse;
- (BOOL)shouldBillboard;
- (BOOL)isStale;
- (void)setStale:(BOOL)arg1;
- (void)setShouldShowCourse:(BOOL)arg1;
- (void)setShouldBillboard:(BOOL)arg1;
- (void)setPresentationCourse:(double)arg1;
- (void)_drawWithContext:(id)arg1 puckState:(const struct { float x1; struct { double x_2_1_1[4][4]; } x2; struct { double x_3_1_1[4][4]; } x3; struct { double x_4_1_1[4][4]; } x4; union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; float x_1_2_5; float x_1_2_6; float x_1_2_7; float x_1_2_8; float x_1_2_9; } x_5_1_1; float x_5_1_2[9]; } x5; id x6; id x7; id x8; int x9; }*)arg2;
- (double)presentationCourse;
- (id)_newDropShadowMesh;
- (void)_updatePuckStyle;
- (void)drawWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setScale:(float)arg1;
- (float)scale;

@end
