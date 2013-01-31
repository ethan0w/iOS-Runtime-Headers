/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, CAMeshTransform, NSString, CALayer, NSDictionary;

@interface CALayer : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming> {
    struct _CALayerIvars { 
        int refcount; 
        unsigned int magic; 
        void *layer; 
        void *unused1[8]; 
    } _attr;
}

@property(readonly) CALayer * currentLayer;
@property(readonly) CALayer * _mapKit_mapLayer;
@property(copy) NSArray * states;
@property(copy) NSArray * stateTransitions;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleRect;
@property(copy) CAMeshTransform * meshTransform;
@property BOOL needsLayoutOnGeometryChange;
@property BOOL canDrawConcurrently;
@property BOOL acceleratesDrawing;
@property(getter=isFrozen) BOOL frozen;
@property BOOL allowsHitTesting;
@property BOOL hitTestsAsOpaque;
@property BOOL clearsContext;
@property BOOL contentsOpaque;
@property BOOL literalContentsCenter;
@property(copy) NSString * contentsScaling;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } contentsTransform;
@property BOOL invertsShadow;
@property BOOL shadowPathIsBounds;
@property BOOL sortsSublayers;
@property BOOL preloadsCache;
@property BOOL allowsEdgeAntialiasing;
@property BOOL allowsGroupOpacity;
@property BOOL allowsGroupBlending;
@property BOOL allowsDisplayCompositing;
@property struct CGSize { float x1; float x2; } sizeRequisition;
@property(copy) NSArray * lights;
@property BOOL acceptsLights;
@property float ambientReflectance;
@property float diffuseReflectance;
@property float specularReflectance;
@property float shininess;
@property float metallicity;
@property(copy) NSArray * behaviors;
@property float velocityStretch;
@property float mass;
@property float momentOfInertia;
@property float coefficientOfRestitution;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property struct CGPoint { float x1; float x2; } position;
@property float zPosition;
@property struct CGPoint { float x1; float x2; } anchorPoint;
@property float anchorPointZ;
@property struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } transform;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property(getter=isHidden) BOOL hidden;
@property(getter=isDoubleSided) BOOL doubleSided;
@property(getter=isGeometryFlipped) BOOL geometryFlipped;
@property(readonly) CALayer * superlayer;
@property(copy) NSArray * sublayers;
@property struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } sublayerTransform;
@property(retain) CALayer * mask;
@property BOOL masksToBounds;
@property(retain) id contents;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentsRect;
@property(copy) NSString * contentsGravity;
@property float contentsScale;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentsCenter;
@property(copy) NSString * minificationFilter;
@property(copy) NSString * magnificationFilter;
@property float minificationFilterBias;
@property(getter=isOpaque) BOOL opaque;
@property BOOL needsDisplayOnBoundsChange;
@property BOOL drawsAsynchronously;
@property unsigned int edgeAntialiasingMask;
@property struct CGColor { }* backgroundColor;
@property float cornerRadius;
@property float borderWidth;
@property struct CGColor { }* borderColor;
@property float opacity;
@property(retain) id compositingFilter;
@property(copy) NSArray * filters;
@property(copy) NSArray * backgroundFilters;
@property BOOL shouldRasterize;
@property float rasterizationScale;
@property struct CGColor { }* shadowColor;
@property float shadowOpacity;
@property struct CGSize { float x1; float x2; } shadowOffset;
@property float shadowRadius;
@property struct CGPath { }* shadowPath;
@property(copy) NSDictionary * actions;
@property(copy) NSString * name;
@property id delegate;
@property(copy) NSDictionary * style;
@property double beginTime;
@property double duration;
@property float speed;
@property double timeOffset;
@property float repeatCount;
@property double repeatDuration;
@property BOOL autoreverses;
@property(copy) NSString * fillMode;

+ (BOOL)needsDisplayForKey:(id)arg1;
+ (id)properties;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)layer;
+ (BOOL)needsLayoutForKey:(id)arg1;
+ (int (*)())CA_getterForType:(int)arg1;
+ (int (*)())CA_setterForType:(int)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)defaultActionForKey:(id)arg1;

- (float)shadowRadius;
- (float)shadowOpacity;
- (BOOL)doubleSided;
- (void)reloadValueForKeyPath:(id)arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDescendantOf:(id)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)layoutSublayers;
- (void*)regionBeingDrawn;
- (void)scrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCanDrawConcurrently:(BOOL)arg1;
- (BOOL)canDrawConcurrently;
- (void)setAcceleratesDrawing:(BOOL)arg1;
- (BOOL)acceleratesDrawing;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })sublayerTransform;
- (void)setAnchorPointZ:(float)arg1;
- (float)anchorPointZ;
- (float)zPosition;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)setContentsChanged;
- (BOOL)autoreverses;
- (float)repeatCount;
- (double)timeOffset;
- (double)beginTime;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)fillMode;
- (void)display;
- (float)borderWidth;
- (struct CGColor { }*)borderColor;
- (id)magnificationFilter;
- (id)minificationFilter;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setName:(id)arg1;
- (id)name;
- (id)debugDescription;
- (unsigned int)retainCount;
- (id).cxx_construct;
- (id)retain;
- (id)valueForKey:(id)arg1;
- (void)dealloc;
- (oneway void)release;
- (id)init;
- (void)setAllowsDisplayCompositing:(BOOL)arg1;
- (void)setContentsOpaque:(BOOL)arg1;
- (BOOL)isFlipped;
- (void)setBehaviors:(id)arg1;
- (unsigned int)edgeAntialiasingMask;
- (void)setRepeatDuration:(double)arg1;
- (double)repeatDuration;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })preferredFrameSize;
- (void)setGeometryFlipped:(BOOL)arg1;
- (BOOL)isGeometryFlipped;
- (void)setMass:(float)arg1;
- (BOOL)isDoubleSided;
- (void)setCompositingFilter:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentsRect;
- (void)setShadowRadius:(float)arg1;
- (void)setShadowOpacity:(float)arg1;
- (void)setShadowPath:(struct CGPath { }*)arg1;
- (BOOL)hidden;
- (float)cornerRadius;
- (void)setHitTestsAsOpaque:(BOOL)arg1;
- (float)rasterizationScale;
- (BOOL)opaque;
- (void)_display;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1;
- (id)initWithLayer:(id)arg1;
- (id)actionForKey:(id)arg1;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (void)setCornerRadius:(float)arg1;
- (void)setMask:(id)arg1;
- (void)setDoubleSided:(BOOL)arg1;
- (void)setZPosition:(float)arg1;
- (void)setMinificationFilter:(id)arg1;
- (void)setSortsSublayers:(BOOL)arg1;
- (void)setAllowsGroupOpacity:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)_dealloc;
- (void)setFlipped:(BOOL)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setEdgeAntialiasingMask:(unsigned int)arg1;
- (void)setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)contentsScaling;
- (struct CGColor { }*)shadowColor;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setShadowColor:(struct CGColor { }*)arg1;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (void)setFrozen:(BOOL)arg1;
- (void)setPreloadsCache:(BOOL)arg1;
- (BOOL)shouldRasterize;
- (id)style;
- (void)setStyle:(id)arg1;
- (void)setSpeed:(float)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setDoublePosition:(struct CADoublePoint { double x1; double x2; })arg1;
- (struct CADoublePoint { double x1; double x2; })doublePosition;
- (struct CADoublePoint { double x1; double x2; })convertDoublePoint:(struct CADoublePoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (struct CADoublePoint { double x1; double x2; })convertDoublePoint:(struct CADoublePoint { double x1; double x2; })arg1 toLayer:(id)arg2;
- (void)setDoubleBounds:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })doubleBounds;
- (void)setNeedsLayoutOnGeometryChange:(BOOL)arg1;
- (BOOL)needsLayoutOnGeometryChange;
- (void)setSublayerTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (BOOL)isFrozen;
- (id)valueForKeyPath:(id)arg1;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (BOOL)hasBeenCommitted;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (id)mask;
- (void)setContentsTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setContents:(id)arg1;
- (float)speed;
- (void)invalidateContents;
- (void)removeAllAnimations;
- (id)filters;
- (void)displayIfNeeded;
- (void)clearHasBeenCommitted;
- (BOOL)clearsContext;
- (void)setClearsContext:(BOOL)arg1;
- (float)opacity;
- (void)setOpacity:(float)arg1;
- (BOOL)masksToBounds;
- (BOOL)needsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setShouldRasterize:(BOOL)arg1;
- (void)setContentsScale:(float)arg1;
- (float)contentsScale;
- (void)setContentsScaling:(id)arg1;
- (id)contentsGravity;
- (BOOL)needsDisplayOnBoundsChange;
- (void)setContentsGravity:(id)arg1;
- (void)setSublayers:(id)arg1;
- (id)presentationLayer;
- (void)layoutBelowIfNeeded;
- (BOOL)needsLayout;
- (struct CGPoint { float x1; float x2; })position;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentsCenter;
- (void)setContentsCenter:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMagnificationFilter:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setFilters:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)setFillMode:(id)arg1;
- (void)setAutoreverses:(BOOL)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setBorderWidth:(float)arg1;
- (void)setBorderColor:(struct CGColor { }*)arg1;
- (id)context;
- (id)sublayers;
- (void)layoutIfNeeded;
- (BOOL)isOpaque;
- (struct CGColor { }*)backgroundColor;
- (void)setTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (id)contents;
- (void)removeAnimationForKey:(id)arg1;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })transform;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toLayer:(id)arg2;
- (id)superlayer;
- (void)removeFromSuperlayer;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)addSublayer:(id)arg1;
- (void)setRasterizationScale:(float)arg1;
- (void)setMasksToBounds:(BOOL)arg1;
- (void)setAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })affineTransform;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isHidden;
- (void)setNeedsLayout;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (struct CGSize { float x1; float x2; })size;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayOnBoundsChange:(BOOL)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setCoefficientOfRestitution:(float)arg1;
- (void)setMomentOfInertia:(float)arg1;
- (void)setVelocityStretch:(float)arg1;
- (void)setMetallicity:(float)arg1;
- (void)setShininess:(float)arg1;
- (void)setSpecularReflectance:(float)arg1;
- (void)setDiffuseReflectance:(float)arg1;
- (void)setAmbientReflectance:(float)arg1;
- (void)setAcceptsLights:(BOOL)arg1;
- (void)setAllowsGroupBlending:(BOOL)arg1;
- (BOOL)contentsOpaque;
- (void)setShadowPathIsBounds:(BOOL)arg1;
- (void)setInvertsShadow:(BOOL)arg1;
- (void)setLiteralContentsCenter:(BOOL)arg1;
- (void)setAllowsHitTesting:(BOOL)arg1;
- (id)layerAtTime:(double)arg1;
- (id)layerBeingDrawn;
- (BOOL)layoutIsActive;
- (void)setMeshTransform:(id)arg1;
- (BOOL)_canDisplayConcurrently;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (void)_didCommitLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; }*)arg1;
- (BOOL)shadowPathIsBounds;
- (BOOL)invertsShadow;
- (BOOL)literalContentsCenter;
- (BOOL)hitTestsAsOpaque;
- (BOOL)allowsGroupBlending;
- (BOOL)allowsDisplayCompositing;
- (BOOL)allowsGroupOpacity;
- (BOOL)allowsEdgeAntialiasing;
- (BOOL)preloadsCache;
- (float)coefficientOfRestitution;
- (float)momentOfInertia;
- (float)velocityStretch;
- (float)metallicity;
- (float)shininess;
- (float)specularReflectance;
- (float)diffuseReflectance;
- (float)ambientReflectance;
- (BOOL)acceptsLights;
- (id)behaviors;
- (id)lights;
- (id)meshTransform;
- (void)setDrawsAsynchronously:(BOOL)arg1;
- (struct CGPath { }*)shadowPath;
- (id)compositingFilter;
- (void)setBackgroundFilters:(id)arg1;
- (id)backgroundFilters;
- (double)convertTime:(double)arg1 toLayer:(id)arg2;
- (struct CGSize { float x1; float x2; })_preferredSize;
- (struct CGSize { float x1; float x2; })sizeRequisition;
- (void)setSizeRequisition:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)drawsMipmapLevels;
- (BOOL)drawsAsynchronously;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })contentsTransform;
- (void)_renderBorderInContext:(struct CGContext { }*)arg1;
- (void)_renderSublayersInContext:(struct CGContext { }*)arg1;
- (void)_renderForegroundInContext:(struct CGContext { }*)arg1;
- (void)_prepareContext:(struct CGContext { }*)arg1;
- (void)_cancelAnimationTimer;
- (BOOL)_scheduleAnimationTimer;
- (id)modelLayer;
- (BOOL)sortsSublayers;
- (BOOL)allowsHitTesting;
- (BOOL)ignoresHitTesting;
- (id)ancestorSharedWithLayer:(id)arg1;
- (void)_renderBackgroundInContext:(struct CGContext { }*)arg1;
- (struct Layer { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct Data { unsigned int x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned int x_3_1_6 : 2; unsigned int x_3_1_7 : 2; unsigned int x_3_1_8 : 4; unsigned int x_3_1_9 : 4; unsigned int x_3_1_10 : 1; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 32; struct Vec2<double> { double x_31_2_1; double x_31_2_2; } x_3_1_31; struct Rect { double x_32_2_1; double x_32_2_2; double x_32_2_3; double x_32_2_4; } x_3_1_32; } x3; struct Ref<CA::Render::Object> { struct Object {} *x_4_1_1; } x4; struct Ref<CA::Render::TypedArray<CA::Render::Layer> > { struct TypedArray<CA::Render::Layer> {} *x_5_1_1; } x5; struct Layer {} *x6; struct Ref<CA::Render::Layer::Ext> { struct Ext {} *x_7_1_1; } x7; struct Ref<CA::Render::TypedArray<CA::Render::Animation> > { struct TypedArray<CA::Render::Animation> {} *x_8_1_1; } x8; struct Ref<CA::Render::Handle> { struct Handle {} *x_9_1_1; } x9; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; }*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (void)setMinificationFilterBias:(float)arg1;
- (float)minificationFilterBias;
- (float)mass;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleRectOfLayer:(id)arg1;
- (void)_scrollRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (void)_scrollPoint:(struct CGPoint { float x1; float x2; })arg1 fromLayer:(id)arg2;
- (id)stateTransitionFrom:(id)arg1 to:(id)arg2;
- (id)dependentStatesOfState:(id)arg1;
- (id)stateWithName:(id)arg1;
- (void)removeState:(id)arg1;
- (void)addState:(id)arg1;
- (void)insertState:(id)arg1 atIndex:(unsigned int)arg2;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (double)convertTime:(double)arg1 fromLayer:(id)arg2;
- (BOOL)contentsAreFlipped;
- (void)setLights:(id)arg1;
- (void)setAllowsEdgeAntialiasing:(BOOL)arg1;
- (void)setActions:(id)arg1;
- (id)actions;
- (int)compareTextEffectsOrdering:(id)arg1;
- (BOOL)uiHasFilterWithName:(id)arg1;
- (BOOL)getPresentationValue:(id*)arg1 forKey:(id)arg2 removeAnimation:(BOOL)arg3;
- (id)currentLayer;
- (BOOL)getPresentationValue:(id*)arg1 forValueKey:(id)arg2 animationKey:(id)arg3 removeAnimation:(BOOL)arg4;
- (id)_mapKit_mapLayer;
- (void)moveToFront;

@end
