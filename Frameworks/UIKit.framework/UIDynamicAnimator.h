/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDynamicAnimator : NSObject {
    float  _accuracy;
    id /* block */  _action;
    NSMutableIndexSet * _availableFieldCategories;
    NSMutableArray * _beginContacts;
    NSMutableSet * _behaviorsToAdd;
    NSMutableSet * _behaviorsToRemove;
    NSMutableDictionary * _bodies;
    BOOL  _debugEnabled;
    int  _debugInterval;
    <UIDynamicAnimatorDelegate> * _delegate;
    BOOL  _disableDisplayLink;
    CADisplayLink * _displaylink;
    UIDynamicsDebug * _dynamicsDebug;
    double  _elapsedTime;
    NSMutableArray * _endContacts;
    unsigned int  _integralization;
    BOOL  _isInWorldStepMethod;
    double  _lastInterval;
    double  _lastUpdateTime;
    BOOL  _needsLocalBehaviorReevaluation;
    NSMutableArray * _postSolverActions;
    double  _realElapsedTime;
    <_UIDynamicReferenceSystem> * _referenceSystem;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _referenceSystemBounds;
    unsigned int  _referenceSystemType;
    NSMutableSet * _registeredBehaviors;
    int  _registeredCollisionGroups;
    int  _registeredImplicitBounds;
    float  _speed;
    struct { 
        unsigned int delegateImplementsDynamicAnimatorDidPause : 1; 
        unsigned int delegateImplementsDynamicAnimatorWillResume : 1; 
    }  _stateFlags;
    BOOL  _stopping;
    UIDynamicAnimatorTicker * _ticker;
    long long  _ticks;
    NSMutableArray * _topLevelBehaviors;
    PKExtendedPhysicsWorld * _world;
}

@property (nonatomic, readonly, copy) NSArray *behaviors;
@property (nonatomic) <UIDynamicAnimatorDelegate> *delegate;
@property (nonatomic, readonly) double elapsedTime;
@property (nonatomic, readonly) UIView *referenceView;
@property (getter=isRunning, nonatomic, readonly) BOOL running;
@property (nonatomic, retain) UIDynamicAnimatorTicker *ticker;

+ (id)_allDynamicAnimators;
+ (void)_clearReferenceViewFromAnimators:(id)arg1;
+ (void)_referenceViewSizeChanged:(id)arg1;
+ (void)_registerAnimator:(id)arg1;
+ (void)_unregisterAnimator:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (BOOL)_alwaysDisableDisplayLink;
- (unsigned int)_animatorIntegralization;
- (double)_animatorInterval;
- (BOOL)_animatorStep:(double)arg1;
- (id)_bodyForItem:(id)arg1;
- (void)_checkBehavior:(id)arg1;
- (void)_clearReferenceView;
- (BOOL)_containsBehavior:(id)arg1;
- (BOOL)_debugEnabled;
- (int)_debugInterval;
- (void)_defaultMapper:(id)arg1 position:(struct CGPoint { float x1; float x2; })arg2 angle:(float)arg3 itemType:(unsigned int)arg4;
- (id)_delegate;
- (void)_displayLinkTick:(id)arg1;
- (void)_evaluateLocalBehaviors;
- (BOOL)_isWorldActive;
- (id)_keyForItem:(id)arg1;
- (id)_newBodyForItem:(id)arg1 inItemGroup:(id)arg2;
- (void)_postSolverStep;
- (void)_preSolverStep;
- (float)_ptmRatio;
- (double)_realElapsedTime;
- (void)_reevaluateImplicitBounds;
- (id)_referenceSystem;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_referenceSystemBounds;
- (unsigned int)_referenceSystemType;
- (void)_registerBehavior:(id)arg1;
- (id)_registerBodyForItem:(id)arg1;
- (int)_registerCollisionGroup;
- (void)_registerFieldCategoryForFieldBehavior:(id)arg1;
- (void)_registerImplicitBounds;
- (void)_reportBeginContacts;
- (void)_reportEndContacts;
- (void)_runBlockPostSolverIfNeeded:(id /* block */)arg1;
- (void)_setAction:(id /* block */)arg1;
- (void)_setAlwaysDisableDisplayLink:(BOOL)arg1;
- (void)_setAnimatorIntegralization:(unsigned int)arg1;
- (void)_setDebugEnabled:(BOOL)arg1;
- (void)_setDebugInterval:(int)arg1;
- (void)_setDelegate:(id)arg1;
- (void)_setReferenceSystem:(id)arg1;
- (void)_setRunning:(BOOL)arg1;
- (void)_setSpeed:(float)arg1;
- (void)_setupWorld;
- (void)_shouldReevaluateLocalBehaviors;
- (float)_speed;
- (void)_start;
- (void)_stop;
- (void)_tickle;
- (long long)_ticks;
- (void)_traverseBehaviorHierarchy:(id /* block */)arg1;
- (void)_unregisterBehavior:(id)arg1;
- (void)_unregisterBodyForItem:(id)arg1 action:(id /* block */)arg2;
- (void)_unregisterCollisionGroup;
- (void)_unregisterFieldCategoryForFieldBehavior:(id)arg1;
- (void)_unregisterImplicitBounds;
- (id)_world;
- (void)addBehavior:(id)arg1;
- (id)behaviors;
- (void)dealloc;
- (float)debugAnimationSpeed;
- (unsigned int)debugFrameInterval;
- (id)delegate;
- (id)description;
- (void)didBeginContact:(id)arg1;
- (void)didEndContact:(id)arg1;
- (double)elapsedTime;
- (id)init;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithReferenceSystem:(id)arg1;
- (id)initWithReferenceView:(id)arg1;
- (BOOL)isDebugEnabled;
- (BOOL)isRunning;
- (id)itemsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForCellAtIndexPath:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)recursiveDescription;
- (id)referenceView;
- (void)removeAllBehaviors;
- (void)removeBehavior:(id)arg1;
- (void)setDebugAnimationSpeed:(float)arg1;
- (void)setDebugEnabled:(BOOL)arg1;
- (void)setDebugFrameInterval:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setReferenceView:(id)arg1;
- (void)setTicker:(id)arg1;
- (id)ticker;
- (void)updateItemFromCurrentState:(id)arg1;
- (void)updateItemUsingCurrentState:(id)arg1;

@end
