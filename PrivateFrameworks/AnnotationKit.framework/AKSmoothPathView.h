/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKSmoothPathView : UIView {
    BOOL  _applyModelBaseScaleFactorToStroke;
    AKBitmapFIFO * _bitmapFifo;
    float  _cachedEffectiveStrokeWidthInModel;
    float  _cachedModelToViewScale;
    AKController * _controller;
    float  _currentWeight;
    <AKSmoothPathViewDelegate> * _delegate;
    BOOL  _disableSingleDotSpecialCase;
    BOOL  _hasShadow;
    CHQuadCurvePointFIFO * _interpolatingFIFO;
    BOOL  _isAddingPointWithoutSmoothing;
    float  _maxPressure;
    float  _maxThickness;
    float  _minPressure;
    float  _minThickness;
    BOOL  _prestrokedOutputMode;
    float  _shadowRadiusInModel;
    float  _shadowRadiusInView;
    float  _singleDotCurrentSize;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _singleDotRect;
    CHBoxcarFilterPointFIFO * _smoothingFIFO;
    BOOL  _startedTouchDrawing;
    UIColor * _strokeColor;
    CHPointStrokeFIFO * _strokeFIFO;
    float  _strokeWidth;
}

@property BOOL applyModelBaseScaleFactorToStroke;
@property (nonatomic, retain) AKBitmapFIFO *bitmapFifo;
@property float cachedModelToViewScale;
@property AKController *controller;
@property float currentWeight;
@property <AKSmoothPathViewDelegate> *delegate;
@property BOOL disableSingleDotSpecialCase;
@property (nonatomic) BOOL hasShadow;
@property (nonatomic, retain) CHQuadCurvePointFIFO *interpolatingFIFO;
@property BOOL isAddingPointWithoutSmoothing;
@property (nonatomic) float maxPressure;
@property (nonatomic) float maxThickness;
@property (nonatomic) float minPressure;
@property (nonatomic) float minThickness;
@property (nonatomic) BOOL prestrokedOutputMode;
@property float shadowRadiusInModel;
@property float shadowRadiusInView;
@property float singleDotCurrentSize;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } singleDotRect;
@property (nonatomic, retain) CHBoxcarFilterPointFIFO *smoothingFIFO;
@property (nonatomic) BOOL startedTouchDrawing;
@property (nonatomic, retain) UIColor *strokeColor;
@property (nonatomic, retain) CHPointStrokeFIFO *strokeFIFO;
@property (nonatomic) float strokeWidth;

+ (id)newSmoothPathViewForCurrentPlatformWithController:(id)arg1;

- (void).cxx_destruct;
- (BOOL)_catchUpAccumulatedTouchesForRecognizer:(id)arg1;
- (void)_clear;
- (float)_convertValueFromModelToSelf:(float)arg1;
- (float)_effectiveStrokeWidthInModel;
- (struct CGContext { }*)_getPlatformCGContext;
- (void)_pointForRecognizer:(id)arg1;
- (void)_pointForTouch:(id)arg1;
- (void)_setupFilterChainWithBitmapFifo:(BOOL)arg1;
- (void)_setupShadowInContext:(struct CGContext { }*)arg1;
- (void)_updateInterpolatingFifoLineWidth;
- (void)_updateShadowRadiusInView;
- (float)_windowBackingScaleFactor;
- (BOOL)applyModelBaseScaleFactorToStroke;
- (void)awakeFromNib;
- (id)bitmapFifo;
- (float)cachedModelToViewScale;
- (void)callDelegate;
- (void)commonInit;
- (void)continueStroke;
- (void)continueStrokeWithoutSmoothing;
- (id)controller;
- (float)currentWeight;
- (id)delegate;
- (BOOL)disableSingleDotSpecialCase;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)drawing;
- (void)handleDragAction:(id)arg1;
- (void)handleForwardedEvent:(id)arg1;
- (void)handleTapAction:(id)arg1;
- (BOOL)hasShadow;
- (id)initWithController:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)interpolatingFIFO;
- (BOOL)isAddingPointWithoutSmoothing;
- (BOOL)isOpaque;
- (float)maxPressure;
- (float)maxThickness;
- (float)minPressure;
- (float)minThickness;
- (BOOL)prestrokedOutputMode;
- (void)setApplyModelBaseScaleFactorToStroke:(BOOL)arg1;
- (void)setBitmapFifo:(id)arg1;
- (void)setCachedModelToViewScale:(float)arg1;
- (void)setController:(id)arg1;
- (void)setCurrentWeight:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableSingleDotSpecialCase:(BOOL)arg1;
- (void)setHasShadow:(BOOL)arg1;
- (void)setInterpolatingFIFO:(id)arg1;
- (void)setIsAddingPointWithoutSmoothing:(BOOL)arg1;
- (void)setMaxPressure:(float)arg1;
- (void)setMaxThickness:(float)arg1;
- (void)setMinPressure:(float)arg1;
- (void)setMinThickness:(float)arg1;
- (void)setPrestrokedOutputMode:(BOOL)arg1;
- (void)setShadowRadiusInModel:(float)arg1;
- (void)setShadowRadiusInView:(float)arg1;
- (void)setSingleDotCurrentSize:(float)arg1;
- (void)setSingleDotRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSmoothingFIFO:(id)arg1;
- (void)setStartedTouchDrawing:(BOOL)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeFIFO:(id)arg1;
- (void)setStrokeWidth:(float)arg1;
- (float)shadowRadiusInModel;
- (float)shadowRadiusInView;
- (float)singleDotCurrentSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })singleDotRect;
- (id)smoothingFIFO;
- (void)startStroke;
- (BOOL)startedTouchDrawing;
- (id)strokeColor;
- (id)strokeFIFO;
- (float)strokeWidth;
- (void)teardown;
- (void)terminateStroke;
- (void)updateInterpolatingFifoUnitScale;
- (float)weightForValue:(float)arg1;

@end
